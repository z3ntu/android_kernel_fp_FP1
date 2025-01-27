#ifndef _SEC_STATUS_H_
#define _SEC_STATUS_H_

typedef enum {
    B_OK = 0,

    /* ==========================*/
    /* operation error codes */
    INVALID_PARAMETER           = 0x1000,
    INVALID_NAME_SIZE,
    INVALID_BUFFER_SIZE,
    INFO_NOT_FOUND,
    ROM_INFO_NOT_FOUND,
    CUST_NAME_NOT_FOUND,
    PRELOADER_NOT_FOUND,
    STORAGE_DRIVER_NOT_FOUND,
    STORAGE_READ_FAILED,
    LIST_ENTRY_ALLOCATION_FAILED,
    SECURE_DATA_BUF_OVERFLOW,
    PART_GET_INDEX_FAIL,
    PART_GET_DEV_FAIL,
    PART_ERASE_FAIL,
    PART_WRITE_FAIL,
    PART_READ_FAIL,

    /* ==========================*/
    /* security image releated error code */
    SECHDR_NOT_FOUND            = 0x2000,
    SECEXTHDR_NOT_FOUND,
    SECEXTHDR_CORRUPTED,
    SECHDR_NOT_PARSED_YET,
    SECVER_NOT_SUPPORTED,
    SECEXTHDR_NOT_SUPPORTED,
    HASH_TYPE_NOT_SUPPORTED,
    SIG_TYPE_NOT_SUPPORTED,
    INCORRECT_SIG_SIZE,
    INVALID_SIG,       
    VERIFY_BUF_TOO_SMALL,
    HASH_FAILED,
    AUTH_FAILED,
    CIPHER_MODE_INVALID,
    CIPHER_KEY_INVALID,
    CIPHER_DATA_UNALIGNED,
    /* 0x2010 */
    WAITING_SECURE_DATA,
    CHUNK_VERIFY_FAILED,
    SEC_DOWNLOAD_NOT_SUPPORT_THIS_IMAGE,
    SEC_DOWNLOAD_SIGNATURE_NOT_REQUIRED,
    SW_SEC_BOOT_IMAGE_DL_IS_NOT_ALLOWED,
    SW_SEC_BOOT_SIGNATURE_NOT_REQUIRED,
    SIG_NOT_FOUND,
    SW_SEC_BOOT_SIGNATURE_REQUIRED,
    SEC_IMG_VERSION_NOT_ALLOWED,
    SEC_CUSTOMER_NAME_NOT_ALLOWED,
    SEC_UNSIGNED_IMAGE_IS_REQUIRED,
    SEC_SIGNED_IMAGE_IS_REQUIRED,

    /* ==========================*/
    /* seccfg related error code */
    ROM_INFO_NOT_INIT       = 0x3000,
    SECCFG_NOT_FOUND,
    SECCFG_MAGIC_INCORRECT,
    SECCFG_CAN_NOT_WRITE_TO_FIRST_BLOCK,
    SECCFG_EXT_REGION_SPACE_OVERFLOW,
    ERASE_SECCFG_NAND_PARTITION_FAILED,
    IMAGE_INFO_CHECK_CMD_EXT_HEADER_SELF_COPY_FAIL,
    IMAGE_INFO_CHECK_CMD_EXT_HEADER_OFFSET_INVALID,

    /* ==========================*/
    /* secro related error code */
    S_SECURITY_AC_REGION_NOT_FOUND_IN_SECROIMG  = 0x4000,
    S_SECURITY_SECRO_MEMORY_ALLOCATE_FAIL,
    S_SECURITY_SECRO_ANTICLONE_LENGTH_INVALID,
    S_SECURITY_SECRO_HASH_INCORRECT,
    SECRO_NOT_FOUND,

    /* ==========================*/
    /* sec status code */
    S_SECURITY_GO_ON_CHECK = 0x5000,
    S_SECURITY_UNKONWN_STATUS,
    

    /* secure boot error code */
    ERR_LIB_SEC_CFG_NOT_EXIST = 0x6000,
    ERR_IMG_VERIFY_THIS_IMG_INFO_NOT_EXIST,
    ERR_IMG_VERIFY_INVALID_IMG_INFO_ATTR,
    ERR_IMG_NOT_FOUND,
    ERR_IMG_EXTENSION_MAGIC_WRONG,
    ERR_IMG_EXTENSION_TYPE_NOT_SUPPORT,
    ERR_IMG_EXTENSION_HDR_NOT_FOUND,
    ERR_IMG_SIGN_FORMAT_NOT_MATCH,
    ERR_IMG_EXTENSION_HASH_CAL_FAIL,
    ERR_IMG_VERIFY_SIGNATURE_FAIL,
    ERR_IMG_VERIFY_HASH_COMPARE_FAIL,
} STATUS;

#endif /* _SEC_STATUS_H_ */
