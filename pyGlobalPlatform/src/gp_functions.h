#ifndef HEADER_GP_FUNCTIONS_H
#define HEADER_GP_FUNCTIONS_H

#include <Python.h>

#ifdef __cplusplus
extern "C" {
#endif

PyObject* pyOPGP_enable_trace_mode(PyObject* self, PyObject* args);

PyObject* establishContext(PyObject* self, PyObject* args);
PyObject* releaseContext(PyObject* self, PyObject* args);
PyObject* listReaders(PyObject* self, PyObject* args);
PyObject* connectCard(PyObject* self, PyObject* args);
PyObject* disconnectCard(PyObject* self, PyObject* args);

PyObject* pyOPGP_select_application(PyObject* self, PyObject* args);
PyObject* pyGP211_get_status(PyObject* self, PyObject* args);
PyObject* pyGP211_set_status(PyObject* self, PyObject* args);
PyObject* pyGP211_mutual_authentication(PyObject* self, PyObject* args);
PyObject* pyGP211_init_implicit_secure_channel(PyObject* self, PyObject* args);
PyObject* pyGP211_close_implicit_secure_channel(PyObject* self, PyObject* args);
PyObject* pyGP211_get_data(PyObject* self, PyObject* args);
PyObject* pyGP211_get_data_iso7816_4(PyObject* self, PyObject* args);
PyObject* pyGP211_get_secure_channel_protocol_details(PyObject* self, PyObject* args);
PyObject* pyGP211_get_sequence_counter(PyObject* self, PyObject* args);
PyObject* pyGP211_put_data(PyObject* self, PyObject* args);
PyObject* pyGP211_pin_change(PyObject* self, PyObject* args);
PyObject* pyGP211_put_3des_key(PyObject* self, PyObject* args);
PyObject* pyGP211_put_rsa_key(PyObject* self, PyObject* args);
PyObject* pyGP211_put_secure_channel_keys(PyObject* self, PyObject* args);
PyObject* pyGP211_delete_key(PyObject* self, PyObject* args);
PyObject* pyGP211_get_key_information_templates(PyObject* self, PyObject* args);
PyObject* pyGP211_delete_application(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_load(PyObject* self, PyObject* args);
PyObject* pyGP211_get_extradition_token_signature_data(PyObject* self, PyObject* args);
PyObject* pyGP211_get_load_token_signature_data(PyObject* self, PyObject* args);
PyObject* pyGP211_get_install_token_signature_data(PyObject* self, PyObject* args);
PyObject* pyGP211_calculate_load_token(PyObject* self, PyObject* args);
PyObject* pyGP211_calculate_install_token(PyObject* self, PyObject* args);
PyObject* pyGP211_calculate_load_file_data_block_hash(PyObject* self, PyObject* args);
PyObject* pyGP211_load(PyObject* self, PyObject* args);
PyObject* pyGP211_load_from_buffer(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_install(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_make_selectable(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_install_and_make_selectable(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_personalization(PyObject* self, PyObject* args);
PyObject* pyGP211_install_for_extradition(PyObject* self, PyObject* args);
PyObject* pyGP211_put_delegated_management_keys(PyObject* self, PyObject* args);
PyObject* pyGP211_send_APDU(PyObject* self, PyObject* args);
PyObject* pyGP211_calculate_3des_DAP(PyObject* self, PyObject* args);
PyObject* pyGP211_calculate_rsa_DAP(PyObject* self, PyObject* args);
PyObject* pyGP211_validate_delete_receipt(PyObject* self, PyObject* args);
PyObject* pyGP211_validate_install_receipt(PyObject* self, PyObject* args);
PyObject* pyGP211_validate_load_receipt(PyObject* self, PyObject* args);
PyObject* pyGP211_validate_extradition_receipt(PyObject* self, PyObject* args);
PyObject* pyOPGP_manage_channel(PyObject* self, PyObject* args);
PyObject* pyOPGP_select_channel(PyObject* self, PyObject* args);
PyObject* pyGP211_store_data(PyObject* self, PyObject* args);
PyObject* pyGP211_begin_R_MAC(PyObject* self, PyObject* args);
PyObject* pyGP211_end_R_MAC(PyObject* self, PyObject* args);
PyObject* pyOPGP_read_executable_load_file_parameters(PyObject* self, PyObject* args);
PyObject* pyOPGP_VISA2_derive_keys(PyObject* self, PyObject* args);
PyObject* pyOPGP_cap_to_ijc(PyObject* self, PyObject* args);
PyObject* pyOPGP_extract_cap_file(PyObject* self, PyObject* args);
PyObject* pyOPGP_read_executable_load_file_parameters_from_buffer(PyObject* self, PyObject* args);
PyObject* pyOPGP_EMV_CPS11_derive_keys(PyObject* self, PyObject* args);

#ifdef __cplusplus
}
#endif

#endif
