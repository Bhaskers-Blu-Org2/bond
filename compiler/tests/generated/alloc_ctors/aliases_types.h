
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0800
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0b00
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace tests
{
    
    template <typename T>
    struct Foo
    {
        using allocator_type = arena;

        std::vector<std::vector<T, typename std::allocator_traits<arena>::template rebind_alloc<T> >, typename std::allocator_traits<arena>::template rebind_alloc<std::vector<T, typename std::allocator_traits<arena>::template rebind_alloc<T> > > > aa;
        
        struct _bond_vc12_ctor_workaround_ {};
        template <int = 0> // Workaround to avoid compilation if not used
        Foo(_bond_vc12_ctor_workaround_ = {})
        {
        }

        
        // Compiler generated copy ctor OK
        Foo(const Foo&) = default;

        Foo(const Foo& other, const arena& allocator)
          : aa(other.aa, allocator)
        {
        }
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        Foo(Foo&& other)
          : aa(std::move(other.aa))
        {
        }
#else
        Foo(Foo&&) = default;
#endif

        Foo(Foo&& other, const arena& allocator)
          : aa(std::move(other.aa), allocator)
        {
        }
        
        explicit
        Foo(const arena& allocator)
          : aa(allocator)
        {
        }
        
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        Foo& operator=(Foo other)
        {
            other.swap(*this);
            return *this;
        }
#else
        // Compiler generated operator= OK
        Foo& operator=(const Foo&) = default;
        Foo& operator=(Foo&&) = default;
#endif

        bool operator==(const Foo& other) const
        {
            return true
                && (aa == other.aa);
        }

        bool operator!=(const Foo& other) const
        {
            return !(*this == other);
        }

        void swap(Foo& other)
        {
            using std::swap;
            swap(aa, other.aa);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    template <typename T>
    inline void swap(::tests::Foo<T>& left, ::tests::Foo<T>& right)
    {
        left.swap(right);
    }

    
    namespace _bond_enumerators
    {
    namespace EnumToWrap
    {
        enum EnumToWrap
        {
            anEnumValue
        };
        
        inline BOND_CONSTEXPR const char* GetTypeName(enum EnumToWrap)
        {
            return "EnumToWrap";
        }

        inline BOND_CONSTEXPR const char* GetTypeName(enum EnumToWrap, const ::bond::qualified_name_tag&)
        {
            return "tests.EnumToWrap";
        }

#if defined(_MSC_VER) && (_MSC_VER < 1900) // Versions of MSVC prior to 1900 do not support magic statics
        extern const std::map<enum EnumToWrap, std::string> _value_to_name_EnumToWrap;

        inline const std::map<enum EnumToWrap, std::string>& GetValueToNameMap(enum EnumToWrap)
        {
            return _value_to_name_EnumToWrap;
        }

        extern const std::map<std::string, enum EnumToWrap> _name_to_value_EnumToWrap;

        inline const std::map<std::string, enum EnumToWrap>& GetNameToValueMap(enum EnumToWrap)
        {
            return _name_to_value_EnumToWrap;
        }
#else
        template <typename Map = std::map<enum EnumToWrap, std::string> >
        inline const Map& GetValueToNameMap(enum EnumToWrap, ::bond::detail::mpl::identity<Map> = {})
        {
            static const Map s_valueToNameMap
                {
                    { anEnumValue, "anEnumValue" }
                };
            return s_valueToNameMap;
        }

        template <typename Map = std::map<std::string, enum EnumToWrap> >
        inline const Map& GetNameToValueMap(enum EnumToWrap, ::bond::detail::mpl::identity<Map> = {})
        {
            static const Map s_nameToValueMap
                {
                    { "anEnumValue", anEnumValue }
                };
            return s_nameToValueMap;
        }
#endif
        const std::string& ToString(enum EnumToWrap value);

        void FromString(const std::string& name, enum EnumToWrap& value);

        bool ToEnum(enum EnumToWrap& value, const std::string& name);

        bool FromEnum(std::string& name, enum EnumToWrap value);

    } // namespace EnumToWrap
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::EnumToWrap;
    

    
    struct WrappingAnEnum
    {
        using allocator_type = arena;

        ::tests::EnumToWrap aWrappedEnum;
        
        WrappingAnEnum()
          : aWrappedEnum(::tests::_bond_enumerators::EnumToWrap::anEnumValue)
        {
        }

        
        // Compiler generated copy ctor OK
        WrappingAnEnum(const WrappingAnEnum&) = default;

        WrappingAnEnum(const WrappingAnEnum& other, const arena&)
          : aWrappedEnum(other.aWrappedEnum)
        {
        }
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        WrappingAnEnum(WrappingAnEnum&& other)
          : aWrappedEnum(std::move(other.aWrappedEnum))
        {
        }
#else
        WrappingAnEnum(WrappingAnEnum&&) = default;
#endif

        WrappingAnEnum(WrappingAnEnum&& other, const arena&)
          : aWrappedEnum(std::move(other.aWrappedEnum))
        {
        }
        
        explicit
        WrappingAnEnum(const arena&)
          : aWrappedEnum(::tests::_bond_enumerators::EnumToWrap::anEnumValue)
        {
        }
        
        
#if defined(_MSC_VER) && (_MSC_VER < 1900)  // Versions of MSVC prior to 1900 do not support = default for move ctors
        WrappingAnEnum& operator=(WrappingAnEnum other)
        {
            other.swap(*this);
            return *this;
        }
#else
        // Compiler generated operator= OK
        WrappingAnEnum& operator=(const WrappingAnEnum&) = default;
        WrappingAnEnum& operator=(WrappingAnEnum&&) = default;
#endif

        bool operator==(const WrappingAnEnum& other) const
        {
            return true
                && (aWrappedEnum == other.aWrappedEnum);
        }

        bool operator!=(const WrappingAnEnum& other) const
        {
            return !(*this == other);
        }

        void swap(WrappingAnEnum& other)
        {
            using std::swap;
            swap(aWrappedEnum, other.aWrappedEnum);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::WrappingAnEnum& left, ::tests::WrappingAnEnum& right)
    {
        left.swap(right);
    }
} // namespace tests
