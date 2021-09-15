/*** File generated by GenISSLib version 3.0.2: DO NOT MODIFY ***/
#ifndef __unisim_component_cxx_processor_arm_top_thumb_unisim__component__cxx__processor__arm__isa__thumb_HH__
#define __unisim_component_cxx_processor_arm_top_thumb_unisim__component__cxx__processor__arm__isa__thumb_HH__
#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS
#endif

#include <vector>
#include <inttypes.h>
#include <cstring>
namespace unisim { namespace component { namespace cxx { namespace processor { namespace arm { namespace isa { namespace thumb {
typedef uint32_t CodeType;

template <
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
typename
#line 18 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
ARCH
#line 21 "unisim/component/cxx/processor/arm/top_thumb.hh"
>
class Operation;
const unsigned int NUM_OPERATIONS_PER_PAGE = 4096;
template <
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
typename
#line 28 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
ARCH
#line 31 "unisim/component/cxx/processor/arm/top_thumb.hh"
>
class DecodeMapPage
{
public:
	DecodeMapPage(uint32_t key);
	~DecodeMapPage();
	uint32_t key;
	DecodeMapPage *next;
	Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 43 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *operation[NUM_OPERATIONS_PER_PAGE];
};

template <
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
typename
#line 50 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
ARCH
#line 53 "unisim/component/cxx/processor/arm/top_thumb.hh"
>
class DecodeTableEntry
{
public:
	DecodeTableEntry(CodeType opcode, CodeType opcode_mask, Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 61 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *(*decode)(CodeType, uint32_t));
	CodeType opcode;
	CodeType opcode_mask;
	Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 68 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *(*decode)(CodeType code, uint32_t addr);
};
const unsigned int NUM_DECODE_HASH_TABLE_ENTRIES = 4096;
template <
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
typename
#line 75 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
ARCH
#line 78 "unisim/component/cxx/processor/arm/top_thumb.hh"
>
class Decoder
{
public:
	typedef Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 86 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> operation_type;

	Decoder();
	virtual ~Decoder();

	Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 95 "unisim/component/cxx/processor/arm/top_thumb.hh"
	>*NCDecode(uint32_t addr);
	Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 100 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *NCDecode(uint32_t addr, CodeType code);
	Operation<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 105 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *Decode(uint32_t addr, CodeType insn);
	std::vector<DecodeTableEntry<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 110 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> > const& GetDecodeTable() const { return decode_table; };
	void InvalidateDecodingCacheEntry(uint32_t addr);
	void InvalidateDecodingCache();

	void SetLittleEndian();
	void SetBigEndian();
private:
	std::vector<DecodeTableEntry<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 121 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> > decode_table;
	DecodeMapPage<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 126 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *mru_page;
	DecodeMapPage<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 131 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *decode_hash_table[NUM_DECODE_HASH_TABLE_ENTRIES];
	DecodeMapPage<
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH
#line 136 "unisim/component/cxx/processor/arm/top_thumb.hh"
	> *FindPage(uint32_t page_key)
#if defined(__GNUC__) && (__GNUC__ >= 3 && (__GNUC__ != 3 || __GNUC_MINOR__ != 4 || __GNUC_PATCHLEVEL__ != 6))
	__attribute__((always_inline))
#endif
	;
};

} } } } } } }
#line 52 "unisim/component/cxx/processor/arm/top_thumb.isa"

#include <iosfwd>
#include <stdint.h>
#line 149 "unisim/component/cxx/processor/arm/top_thumb.hh"
namespace unisim { namespace component { namespace cxx { namespace processor { namespace arm { namespace isa { namespace thumb {
template <
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
typename
#line 154 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 50 "unisim/component/cxx/processor/arm/top_thumb.isa"
ARCH
#line 157 "unisim/component/cxx/processor/arm/top_thumb.hh"
>
class Operation
{
public:
	Operation(CodeType code, uint32_t addr, const char *name);
	virtual ~Operation();
	inline uint32_t GetAddr() const { return addr; }
	inline void SetAddr(uint32_t _addr) { this->addr = _addr; }
	inline CodeType GetEncoding() const { return encoding; }
	virtual unsigned int GetLength() const { return 0; };
	inline const char *GetName() const { return name; }
	static unsigned int const minsize = 16;
	static unsigned int const maxsize = 32;
	virtual
#line 61 "unisim/component/cxx/processor/arm/top_thumb.isa"
	void
#line 174 "unisim/component/cxx/processor/arm/top_thumb.hh"
	disasm(
#line 61 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH &
#line 178 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 61 "unisim/component/cxx/processor/arm/top_thumb.isa"
	cpu
#line 181 "unisim/component/cxx/processor/arm/top_thumb.hh"
	,
#line 61 "unisim/component/cxx/processor/arm/top_thumb.isa"
	std::ostream &
#line 185 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 61 "unisim/component/cxx/processor/arm/top_thumb.isa"
	buffer
#line 188 "unisim/component/cxx/processor/arm/top_thumb.hh"
	);
	virtual
#line 57 "unisim/component/cxx/processor/arm/top_thumb.isa"
	void
#line 193 "unisim/component/cxx/processor/arm/top_thumb.hh"
	execute(
#line 57 "unisim/component/cxx/processor/arm/top_thumb.isa"
	ARCH &
#line 197 "unisim/component/cxx/processor/arm/top_thumb.hh"
#line 57 "unisim/component/cxx/processor/arm/top_thumb.isa"
	cpu
#line 200 "unisim/component/cxx/processor/arm/top_thumb.hh"
	);
protected:
	CodeType encoding;
	uint32_t addr;
	const char *name;
};

} } } } } } }
#endif
