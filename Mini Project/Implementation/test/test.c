#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<com.h>
#include<dec.h>
#include<enc.h>
#include<types.h>
#define PROJECT_NAME    "LSB-based-Steganography"

void test_check_decode_files(void);
void test_read_and_validate_decode_args(void);
void test_do_decoding(void);
void test_open_files_for_decoding(void);
void test_decode_magic_string(void);
void test_get_byte_from_lsb(void);
void test_decode_secret_file_extn_size(void);
void test_decode_size(void);
void test_decode_secret_file_extn(void);
void test_decode_secret_file_size(void);
void test_decode_file_size(void);
void test_decode_secret_file_data(void);
void test_decode_data_to_file(void);
	 
void test_check_operation_type(void);
void test_check_encode_files(void);
void test_read_and_validate_encode_args(void);
void test_do_encoding(void);
void test_open_files(void);
void test_check_capacity(void);
void test_get_file_size(void);
void test_get_image_size_for_bmp(void);
void test_copy_bmp_header(void);
void test_encode_magic_string(void);
void test_encode_data_to_image(void);
void test_encode_byte_to_lsb(void);
void test_encode_size(void);
void test_encode_size_to_lsb(void);
void test_encode_secret_file_extn(void);
void test_encode_secret_file_size(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "check_decode_files", test_check_decode_files);
  CU_add_test(suite, "read_and_validate_decode_args", test_read_and_validate_decode_args);
  CU_add_test(suite, "do_decoding", test_do_decoding);
  CU_add_test(suite, "open_files_for_decoding", test_open_files_for_decoding);
  CU_add_test(suite, "decode_magic_string", test_decode_magic_string);
  CU_add_test(suite, "get_byte_from_lsb", test_get_byte_from_lsb);
   CU_add_test(suite, "decode_secret_file_extn_size", test_decode_secret_file_extn_size);
   CU_add_test(suite, "decode_size", test_decode_size);
   CU_add_test(suite, "decode_secret_file_extn", test_decode_secret_file_extn);
   CU_add_test(suite, "decode_secret_file_size", test_decode_secret_file_size);
   CU_add_test(suite, "decode_file_size", test_decode_file_size);
   CU_add_test(suite, "decode_secret_file_data", test_decode_secret_file_data);
   CU_add_test(suite, "decode_data_to_file", test_decode_data_to_file);
   CU_add_test(suite, "check_operation_type", test_check_operation_type);
   CU_add_test(suite, "check_encode_files", test_check_encode_files);
   CU_add_test(suite, "read_and_validate_encode_args", test_read_and_validate_encode_args);
   CU_add_test(suite, "do_encoding", test_do_encoding);
   CU_add_test(suite, "open_files", test_open_files);
   CU_add_test(suite, "check_capacity", test_check_capacity);
   CU_add_test(suite, "get_file_size",test_get_file_size);
   CU_add_test(suite, "get_image_size_for_bmp", test_get_image_size_for_bmp);
   CU_add_test(suite, "copy_bmp_header", test_copy_bmp_header);
   CU_add_test(suite, "encode_magic_string", test_encode_magic_string);
   CU_add_test(suite, "encode_data_to_image",test_encode_data_to_image);
   CU_add_test(suite, "encode_byte_to_lsb",test_encode_byte_to_lsb);
   CU_add_test(suite, "encode_size", test_encode_size);
   CU_add_test(suite, "encode_size_to_lsb",test_encode_size_to_lsb);
   CU_add_test(suite, "encode_secret_file_extn",test_encode_secret_file_extn);
   CU_add_test(suite, "encode_secret_file_size",test_encode_secret_file_size);
   

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}
void test_check_decode_files(void) {}
void test_read_and_validate_decode_args(void) {}
void test_do_decoding(void) {}
void test_open_files_for_decoding(void) {}
void test_decode_magic_string(void) {}
void test_get_byte_from_lsb(void) {}
void test_decode_secret_file_extn_size(void) {}
void test_decode_size(void) {}
void test_decode_secret_file_extn(void) {}
void test_decode_secret_file_size(void) {}
void test_decode_file_size(void) {}
void test_decode_secret_file_data(void) {}
void test_decode_data_to_file(void) {}
	 
void test_check_operation_type(void) {}
void test_check_encode_files(void) {}
void test_read_and_validate_encode_args(void) {}
void test_do_encoding(void) {}
void test_open_files(void) {}
void test_check_capacity(void) {}
void test_get_file_size(void) {}
void test_get_image_size_for_bmp(void) {}
void test_copy_bmp_header(void) {} 
void test_encode_magic_string(void) {}
void test_encode_data_to_image(void) {}
void test_encode_byte_to_lsb(void) {}
void test_encode_size(void) {}
void test_encode_size_to_lsb(void) {}
void test_encode_secret_file_extn(void) {}
void test_encode_secret_file_size(void) {}
