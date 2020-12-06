#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include<Header.h>
#define PROJECT_NAME    "LSB-based-Steganography"

void check_decode_files(void);
void read_and_validate_decode_args(void);
void do_decoding(void);
void open_files_for_decoding(void);
void decode_magic_string(void);
void get_byte_from_lsb(void);
void decode_secret_file_extn_size(void);
void decode_size(void);
void decode_secret_file_extn(void);
void decode_secret_file_size(void);
void decode_file_size(void);
void decode_secret_file_data(void);
void decode_data_to_file(void);

void check_operation_type(void);
void check_encode_files(void);
void read_and_validate_encode_args(void);
void do_encoding(void);
void open_files(void);
void check_capacity(void);
void get_file_size(void);
void get_image_size_for_bmp(void);
void copy_bmp_header(void);
void encode_magic_string(void);
void encode_data_to_image(void);
void encode_byte_to_lsb(void);
void encode_size(void);
void encode_size_to_lsb(void);
void encode_secret_file_extn(void);
void encode_secret_file_size(void);

int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "check_decode_files", check_decode_files);
  CU_add_test(suite, "read_and_validate_decode_args", read_and_validate_decode_args);
  CU_add_test(suite, "do_decoding", do_decoding);
  CU_add_test(suite, "open_files_for_decoding", open_files_for_decoding);
  CU_add_test(suite, "decode_magic_string", decode_magic_string);
  CU_add_test(suite, "get_byte_from_lsb", get_byte_from_lsb);
   CU_add_test(suite, "decode_secret_file_extn_size", decode_secret_file_extn_size);
   CU_add_test(suite, "decode_size", decode_size);
   CU_add_test(suite, "decode_secret_file_extn", decode_secret_file_extn);
   CU_add_test(suite, "decode_secret_file_size", decode_secret_file_size);
   CU_add_test(suite, "decode_file_size", decode_file_size);
   CU_add_test(suite, "decode_secret_file_data", decode_secret_file_data);
   CU_add_test(suite, "decode_data_to_file", decode_data_to_file);
   CU_add_test(suite, "check_operation_type", check_operation_type);
   CU_add_test(suite, "check_encode_files", check_encode_files);
   CU_add_test(suite, "read_and_validate_encode_args", read_and_validate_encode_args);
   CU_add_test(suite, "do_encoding", do_encoding);
   CU_add_test(suite, "open_files", open_files);
   CU_add_test(suite, "check_capacity", check_capacity);
   CU_add_test(suite, "get_file_size",get_file_size);
   CU_add_test(suite, "get_image_size_for_bmp", get_image_size_for_bmp);
   CU_add_test(suite, "copy_bmp_header", copy_bmp_header);
   CU_add_test(suite, "encode_magic_string", encode_magic_string);
   CU_add_test(suite, "encode_data_to_image",encode_data_to_image);
   CU_add_test(suite, "encode_byte_to_lsb",encode_byte_to_lsb);
   CU_add_test(suite, "encode_size", encode_size);
   CU_add_test(suite, "encode_size_to_lsb",encode_size_to_lsb);
   CU_add_test(suite, "encode_secret_file_extn",encode_secret_file_extn);
   CU_add_test(suite, "encode_secret_file_size",encode_secret_file_size);
   

  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
}
void check_decode_files(void); {}
void read_and_validate_decode_args(void); {}
void do_decoding(void); {}
void open_files_for_decoding(void); {}
void decode_magic_string(void); {}
void get_byte_from_lsb(void); {}
void decode_secret_file_extn_size(void); {}
void decode_size(void); {}
void decode_secret_file_extn(void); {}
void decode_secret_file_size(void); {}
void decode_file_size(void); {}
void decode_secret_file_data(void); {}
void decode_data_to_file(void); {}

void check_operation_type(void); {}
void check_encode_files(void); {}
void read_and_validate_encode_args(void); {}
void do_encoding(void); {}
void open_files(void); {}
void check_capacity(void); {}
void get_file_size(void); {}
void get_image_size_for_bmp(void); {}
void copy_bmp_header(void); {} 
void encode_magic_string(void); {}
void encode_data_to_image(void); {}
void encode_byte_to_lsb(void); {}
void encode_size(void); {}
void encode_size_to_lsb(void); {}
void encode_secret_file_extn(void); {}
void encode_secret_file_size(void); {}
