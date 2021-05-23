/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

struct AlgorithmIdentifier {
    struct heim_oid _field1;
    struct heim_base_data *_field2;
};

struct Attribute {
    struct heim_oid _field1;
    struct Attribute_value _field2;
};

struct Attribute_value {
    unsigned int _field1;
    struct heim_base_data *_field2;
};

struct CMSIdentifier {
    int _field1;
    union {
        struct IssuerAndSerialNumber _field1;
        struct heim_base_data _field2;
    } _field2;
};

struct IssuerAndSerialNumber {
    struct heim_base_data _field1;
    struct heim_integer _field2;
};

struct SignerInfo {
    int _field1;
    struct CMSIdentifier _field2;
    struct AlgorithmIdentifier _field3;
    struct SignerInfo_signedAttrs *_field4;
    struct AlgorithmIdentifier _field5;
    struct heim_base_data _field6;
    struct SignerInfo_unsignedAttrs *_field7;
};

struct SignerInfo_signedAttrs {
    unsigned int len;
    struct Attribute *val;
};

struct SignerInfo_unsignedAttrs {
    unsigned int len;
    struct Attribute *val;
};

struct __SecKey {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __SecKeyDescriptor *_field2;
    void *_field3;
};

struct ccdigest_info {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    char *_field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
};

struct heim_base_data {
    unsigned long long _field1;
    void *_field2;
};

struct heim_integer {
    unsigned long long _field1;
    void *_field2;
    int _field3;
};

struct heim_oid {
    unsigned long long length;
    unsigned int *components;
};
