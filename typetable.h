#pragma once

/***

	Data type information according to 

	   https://www.ibm.com/developerworks/community/wikis/home?lang=en#!/wiki/W51a7ffcf4dfd_4b40_9d82_446ebc23c550/page/Intel%20SSE%20to%20PowerPC%20AltiVec%20migration

	Autogenerated using:

		print "\n\n".join("""template <>
		struct typetable<%s> {
			using vectype = __vector %s;
			static constexpr const char *typestr = \"%s\";
			enum { elem_count = %d,
			       elem_bits = %d};
		};""" % (t, t, t, e, c) for t, e, c in types)

*/

namespace altivecmm {

	template<typename T>
	struct typetable;

	template <>
	struct typetable<unsigned char> {
		using vectype = __vector unsigned char;
		static constexpr const char *typestr = "unsigned char";
		enum { elem_count = 16,
			   elem_bits = 8};
	};

	template <>
	struct typetable<signed char> {
		using vectype = __vector signed char;
		static constexpr const char *typestr = "signed char";
		enum { elem_count = 16,
			   elem_bits = 8};
	};

	/*template <>
	struct typetable<bool char> {
		using vectype = __vector bool char;
		static constexpr const char *typestr = "bool char";
		enum { elem_count = 16,
			   elem_bits = 8};
	};*/

	template <>
	struct typetable<unsigned short> {
		using vectype = __vector unsigned short;
		static constexpr const char *typestr = "unsigned short";
		enum { elem_count = 8,
			   elem_bits = 16};
	};

	template <>
	struct typetable<signed short> {
		using vectype = __vector signed short;
		static constexpr const char *typestr = "signed short";
		enum { elem_count = 8,
			   elem_bits = 16};
	};
	
	/*template <>
	struct typetable<bool short> {
		using vectype = __vector bool short;
		static constexpr const char *typestr = "bool short";
		enum { elem_count = 8,
			   elem_bits = 16};
	};*/

	/*template <>
	struct typetable<__pixel> {
		using vectype = __vector __pixel;
		static constexpr const char *typestr = "__pixel";
		enum { elem_count = 8,
			   elem_bits = 16};
	};*/

	template <>
	struct typetable<unsigned int> {
		using vectype = __vector unsigned int;
		static constexpr const char *typestr = "unsigned int";
		enum { elem_count = 4,
			   elem_bits = 32};
	};

	template <>
	struct typetable<signed int> {
		using vectype = __vector signed int;
		static constexpr const char *typestr = "signed int";
		enum { elem_count = 4,
			   elem_bits = 32};
	};

	/*template <>
	struct typetable<bool int> {
		using vectype = __vector bool int;
		static constexpr const char *typestr = "bool int";
		enum { elem_count = 4,
			   elem_bits = 32};
	};*/

	template <>
	struct typetable<float> {
		using vectype = __vector float;
		static constexpr const char *typestr = "float";
		enum { elem_count = 4,
			   elem_bits = 32};
	};

#if _ARCH_PWR7
	template <>
	struct typetable<double> {
		using vectype = __vector double;
		static constexpr const char *typestr = "double";
		enum { elem_count = 2,
			   elem_bits = 64};
	};
#endif // _ARCH_PWR7

#if _ARCH_PWR8
	template <>
	struct typetable<unsigned long> {
		using vectype = __vector unsigned long;
		static constexpr const char *typestr = "unsigned long";
		enum { elem_count = 2,
			   elem_bits = 64};
	};

	template <>
	struct typetable<signed long> {
		using vectype = __vector signed long;
		static constexpr const char *typestr = "signed long";
		enum { elem_count = 2,
			   elem_bits = 64};
	};

	template <>
	struct typetable<long long> {
		using vectype = __vector long long;
		static constexpr const char *typestr = "long long";
		enum { elem_count = 2,
			   elem_bits = 64};
	};

	template <>
	struct typetable<unsigned long long> {
		using vectype = __vector unsigned long long;
		static constexpr const char *typestr = "unsigned long long";
		enum { elem_count = 2,
			   elem_bits = 64};
	};

	/*template <>
	struct typetable<long bool> {
		using vectype = __vector long bool;
		static constexpr const char *typestr = "long bool";
		enum { elem_count = 2,
			   elem_bits = 64};
	};*/
#endif // _ARCH_PWR8
}
