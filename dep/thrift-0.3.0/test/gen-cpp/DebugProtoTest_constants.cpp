/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "DebugProtoTest_constants.h"

namespace thrift { namespace test { namespace debug {

const DebugProtoTestConstants g_DebugProtoTest_constants;

DebugProtoTestConstants::DebugProtoTestConstants() {
  COMPACT_TEST.a_byte = 127;
  COMPACT_TEST.__isset.a_byte = true;
  COMPACT_TEST.a_i16 = 32000;
  COMPACT_TEST.__isset.a_i16 = true;
  COMPACT_TEST.a_i32 = 1000000000;
  COMPACT_TEST.__isset.a_i32 = true;
  COMPACT_TEST.a_i64 = 1099511627775LL;
  COMPACT_TEST.__isset.a_i64 = true;
  COMPACT_TEST.a_double = 5.6789;
  COMPACT_TEST.__isset.a_double = true;
  COMPACT_TEST.a_string = "my string";
  COMPACT_TEST.__isset.a_string = true;
  COMPACT_TEST.true_field = true;
  COMPACT_TEST.__isset.true_field = true;
  COMPACT_TEST.false_field = false;
  COMPACT_TEST.__isset.false_field = true;
  Empty tmp0;

  COMPACT_TEST.empty_struct_field = tmp0;
  COMPACT_TEST.__isset.empty_struct_field = true;
  std::vector<int8_t>  tmp1;
  tmp1.push_back(-127);
  tmp1.push_back(-1);
  tmp1.push_back(0);
  tmp1.push_back(1);
  tmp1.push_back(127);

  COMPACT_TEST.byte_list = tmp1;
  COMPACT_TEST.__isset.byte_list = true;
  std::vector<int16_t>  tmp2;
  tmp2.push_back(-1);
  tmp2.push_back(0);
  tmp2.push_back(1);
  tmp2.push_back(32767);

  COMPACT_TEST.i16_list = tmp2;
  COMPACT_TEST.__isset.i16_list = true;
  std::vector<int32_t>  tmp3;
  tmp3.push_back(-1);
  tmp3.push_back(0);
  tmp3.push_back(255);
  tmp3.push_back(65535);
  tmp3.push_back(16777215);
  tmp3.push_back(2147483647);

  COMPACT_TEST.i32_list = tmp3;
  COMPACT_TEST.__isset.i32_list = true;
  std::vector<int64_t>  tmp4;
  tmp4.push_back(-1LL);
  tmp4.push_back(0LL);
  tmp4.push_back(255LL);
  tmp4.push_back(65535LL);
  tmp4.push_back(16777215LL);
  tmp4.push_back(4294967295LL);
  tmp4.push_back(1099511627775LL);
  tmp4.push_back(281474976710655LL);
  tmp4.push_back(72057594037927935LL);
  tmp4.push_back(9223372036854775807LL);

  COMPACT_TEST.i64_list = tmp4;
  COMPACT_TEST.__isset.i64_list = true;
  std::vector<double>  tmp5;
  tmp5.push_back(0.1);
  tmp5.push_back(0.2);
  tmp5.push_back(0.3);

  COMPACT_TEST.double_list = tmp5;
  COMPACT_TEST.__isset.double_list = true;
  std::vector<std::string>  tmp6;
  tmp6.push_back("first");
  tmp6.push_back("second");
  tmp6.push_back("third");

  COMPACT_TEST.string_list = tmp6;
  COMPACT_TEST.__isset.string_list = true;
  std::vector<bool>  tmp7;
  tmp7.push_back(true);
  tmp7.push_back(true);
  tmp7.push_back(true);
  tmp7.push_back(false);
  tmp7.push_back(false);
  tmp7.push_back(false);

  COMPACT_TEST.boolean_list = tmp7;
  COMPACT_TEST.__isset.boolean_list = true;
  std::vector<Empty>  tmp8;
  Empty tmp9;

  tmp8.push_back(tmp9);
  Empty tmp10;

  tmp8.push_back(tmp10);

  COMPACT_TEST.struct_list = tmp8;
  COMPACT_TEST.__isset.struct_list = true;
  std::set<int8_t>  tmp11;
  tmp11.insert(-127);
  tmp11.insert(-1);
  tmp11.insert(0);
  tmp11.insert(1);
  tmp11.insert(127);

  COMPACT_TEST.byte_set = tmp11;
  COMPACT_TEST.__isset.byte_set = true;
  std::set<int16_t>  tmp12;
  tmp12.insert(-1);
  tmp12.insert(0);
  tmp12.insert(1);
  tmp12.insert(32767);

  COMPACT_TEST.i16_set = tmp12;
  COMPACT_TEST.__isset.i16_set = true;
  std::set<int32_t>  tmp13;
  tmp13.insert(1);
  tmp13.insert(2);
  tmp13.insert(3);

  COMPACT_TEST.i32_set = tmp13;
  COMPACT_TEST.__isset.i32_set = true;
  std::set<int64_t>  tmp14;
  tmp14.insert(-1LL);
  tmp14.insert(0LL);
  tmp14.insert(255LL);
  tmp14.insert(65535LL);
  tmp14.insert(16777215LL);
  tmp14.insert(4294967295LL);
  tmp14.insert(1099511627775LL);
  tmp14.insert(281474976710655LL);
  tmp14.insert(72057594037927935LL);
  tmp14.insert(9223372036854775807LL);

  COMPACT_TEST.i64_set = tmp14;
  COMPACT_TEST.__isset.i64_set = true;
  std::set<double>  tmp15;
  tmp15.insert(0.1);
  tmp15.insert(0.2);
  tmp15.insert(0.3);

  COMPACT_TEST.double_set = tmp15;
  COMPACT_TEST.__isset.double_set = true;
  std::set<std::string>  tmp16;
  tmp16.insert("first");
  tmp16.insert("second");
  tmp16.insert("third");

  COMPACT_TEST.string_set = tmp16;
  COMPACT_TEST.__isset.string_set = true;
  std::set<bool>  tmp17;
  tmp17.insert(true);
  tmp17.insert(false);

  COMPACT_TEST.boolean_set = tmp17;
  COMPACT_TEST.__isset.boolean_set = true;
  std::set<Empty>  tmp18;
  Empty tmp19;

  tmp18.insert(tmp19);

  COMPACT_TEST.struct_set = tmp18;
  COMPACT_TEST.__isset.struct_set = true;
  std::map<int8_t, int8_t>  tmp20;
  tmp20.insert(std::make_pair(1, 2));

  COMPACT_TEST.byte_byte_map = tmp20;
  COMPACT_TEST.__isset.byte_byte_map = true;
  std::map<int16_t, int8_t>  tmp21;
  tmp21.insert(std::make_pair(1, 1));
  tmp21.insert(std::make_pair(-1, 1));
  tmp21.insert(std::make_pair(32767, 1));

  COMPACT_TEST.i16_byte_map = tmp21;
  COMPACT_TEST.__isset.i16_byte_map = true;
  std::map<int32_t, int8_t>  tmp22;
  tmp22.insert(std::make_pair(1, 1));
  tmp22.insert(std::make_pair(-1, 1));
  tmp22.insert(std::make_pair(2147483647, 1));

  COMPACT_TEST.i32_byte_map = tmp22;
  COMPACT_TEST.__isset.i32_byte_map = true;
  std::map<int64_t, int8_t>  tmp23;
  tmp23.insert(std::make_pair(0LL, 1));
  tmp23.insert(std::make_pair(1LL, 1));
  tmp23.insert(std::make_pair(-1LL, 1));
  tmp23.insert(std::make_pair(9223372036854775807LL, 1));

  COMPACT_TEST.i64_byte_map = tmp23;
  COMPACT_TEST.__isset.i64_byte_map = true;
  std::map<double, int8_t>  tmp24;
  tmp24.insert(std::make_pair(-1.1, 1));
  tmp24.insert(std::make_pair(1.1, 1));

  COMPACT_TEST.double_byte_map = tmp24;
  COMPACT_TEST.__isset.double_byte_map = true;
  std::map<std::string, int8_t>  tmp25;
  tmp25.insert(std::make_pair("first", 1));
  tmp25.insert(std::make_pair("second", 2));
  tmp25.insert(std::make_pair("third", 3));
  tmp25.insert(std::make_pair("", 0));

  COMPACT_TEST.string_byte_map = tmp25;
  COMPACT_TEST.__isset.string_byte_map = true;
  std::map<bool, int8_t>  tmp26;
  tmp26.insert(std::make_pair(true, 1));
  tmp26.insert(std::make_pair(false, 0));

  COMPACT_TEST.boolean_byte_map = tmp26;
  COMPACT_TEST.__isset.boolean_byte_map = true;
  std::map<int8_t, int16_t>  tmp27;
  tmp27.insert(std::make_pair(1, 1));
  tmp27.insert(std::make_pair(2, -1));
  tmp27.insert(std::make_pair(3, 32767));

  COMPACT_TEST.byte_i16_map = tmp27;
  COMPACT_TEST.__isset.byte_i16_map = true;
  std::map<int8_t, int32_t>  tmp28;
  tmp28.insert(std::make_pair(1, 1));
  tmp28.insert(std::make_pair(2, -1));
  tmp28.insert(std::make_pair(3, 2147483647));

  COMPACT_TEST.byte_i32_map = tmp28;
  COMPACT_TEST.__isset.byte_i32_map = true;
  std::map<int8_t, int64_t>  tmp29;
  tmp29.insert(std::make_pair(1, 1LL));
  tmp29.insert(std::make_pair(2, -1LL));
  tmp29.insert(std::make_pair(3, 9223372036854775807LL));

  COMPACT_TEST.byte_i64_map = tmp29;
  COMPACT_TEST.__isset.byte_i64_map = true;
  std::map<int8_t, double>  tmp30;
  tmp30.insert(std::make_pair(1, 0.1));
  tmp30.insert(std::make_pair(2, -0.1));
  tmp30.insert(std::make_pair(3, 1e+06));

  COMPACT_TEST.byte_double_map = tmp30;
  COMPACT_TEST.__isset.byte_double_map = true;
  std::map<int8_t, std::string>  tmp31;
  tmp31.insert(std::make_pair(1, ""));
  tmp31.insert(std::make_pair(2, "blah"));
  tmp31.insert(std::make_pair(3, "loooooooooooooong string"));

  COMPACT_TEST.byte_string_map = tmp31;
  COMPACT_TEST.__isset.byte_string_map = true;
  std::map<int8_t, bool>  tmp32;
  tmp32.insert(std::make_pair(1, true));
  tmp32.insert(std::make_pair(2, false));

  COMPACT_TEST.byte_boolean_map = tmp32;
  COMPACT_TEST.__isset.byte_boolean_map = true;
  std::map<std::vector<int8_t> , int8_t>  tmp33;
  std::vector<int8_t>  tmp34;
  tmp34.push_back(1);
  tmp34.push_back(2);
  tmp34.push_back(3);

  tmp33.insert(std::make_pair(tmp34, 1));
  std::vector<int8_t>  tmp35;
  tmp35.push_back(0);
  tmp35.push_back(1);

  tmp33.insert(std::make_pair(tmp35, 2));
  std::vector<int8_t>  tmp36;

  tmp33.insert(std::make_pair(tmp36, 0));

  COMPACT_TEST.list_byte_map = tmp33;
  COMPACT_TEST.__isset.list_byte_map = true;
  std::map<std::set<int8_t> , int8_t>  tmp37;
  std::set<int8_t>  tmp38;
  tmp38.insert(1);
  tmp38.insert(2);
  tmp38.insert(3);

  tmp37.insert(std::make_pair(tmp38, 1));
  std::set<int8_t>  tmp39;
  tmp39.insert(0);
  tmp39.insert(1);

  tmp37.insert(std::make_pair(tmp39, 2));
  std::set<int8_t>  tmp40;

  tmp37.insert(std::make_pair(tmp40, 0));

  COMPACT_TEST.set_byte_map = tmp37;
  COMPACT_TEST.__isset.set_byte_map = true;
  std::map<std::map<int8_t, int8_t> , int8_t>  tmp41;
  std::map<int8_t, int8_t>  tmp42;
  tmp42.insert(std::make_pair(1, 1));

  tmp41.insert(std::make_pair(tmp42, 1));
  std::map<int8_t, int8_t>  tmp43;
  tmp43.insert(std::make_pair(2, 2));

  tmp41.insert(std::make_pair(tmp43, 2));
  std::map<int8_t, int8_t>  tmp44;

  tmp41.insert(std::make_pair(tmp44, 0));

  COMPACT_TEST.map_byte_map = tmp41;
  COMPACT_TEST.__isset.map_byte_map = true;
  std::map<int8_t, std::map<int8_t, int8_t> >  tmp45;
  std::map<int8_t, int8_t>  tmp46;

  tmp45.insert(std::make_pair(0, tmp46));
  std::map<int8_t, int8_t>  tmp47;
  tmp47.insert(std::make_pair(1, 1));

  tmp45.insert(std::make_pair(1, tmp47));
  std::map<int8_t, int8_t>  tmp48;
  tmp48.insert(std::make_pair(1, 1));
  tmp48.insert(std::make_pair(2, 2));

  tmp45.insert(std::make_pair(2, tmp48));

  COMPACT_TEST.byte_map_map = tmp45;
  COMPACT_TEST.__isset.byte_map_map = true;
  std::map<int8_t, std::set<int8_t> >  tmp49;
  std::set<int8_t>  tmp50;

  tmp49.insert(std::make_pair(0, tmp50));
  std::set<int8_t>  tmp51;
  tmp51.insert(1);

  tmp49.insert(std::make_pair(1, tmp51));
  std::set<int8_t>  tmp52;
  tmp52.insert(1);
  tmp52.insert(2);

  tmp49.insert(std::make_pair(2, tmp52));

  COMPACT_TEST.byte_set_map = tmp49;
  COMPACT_TEST.__isset.byte_set_map = true;
  std::map<int8_t, std::vector<int8_t> >  tmp53;
  std::vector<int8_t>  tmp54;

  tmp53.insert(std::make_pair(0, tmp54));
  std::vector<int8_t>  tmp55;
  tmp55.push_back(1);

  tmp53.insert(std::make_pair(1, tmp55));
  std::vector<int8_t>  tmp56;
  tmp56.push_back(1);
  tmp56.push_back(2);

  tmp53.insert(std::make_pair(2, tmp56));

  COMPACT_TEST.byte_list_map = tmp53;
  COMPACT_TEST.__isset.byte_list_map = true;

  MYCONST = 2;

  MY_SOME_ENUM = (SomeEnum)1;

  MY_SOME_ENUM_1 = (SomeEnum)1;

  MY_ENUM_MAP.insert(std::make_pair((SomeEnum)1, (SomeEnum)2));

  StructWithSomeEnum tmp57;
  tmp57.blah = (SomeEnum)2;
  tmp57.__isset.blah = true;

  EXTRA_CRAZY_MAP.insert(std::make_pair((SomeEnum)1, tmp57));

}

}}} // namespace

