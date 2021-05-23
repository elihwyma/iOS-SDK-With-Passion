/*
 Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

typedef void (^CDUnknownBlockType)(void);

struct AdditionalInfo {
    unsigned char _field1;
    unsigned short _field2;
    unsigned short _field3;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field4;
    unsigned short _field5;
    unsigned char _field6;
    unsigned int _field7;
};

struct GetPowerStatsResponse {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned short _field10;
    unsigned short _field11;
};

struct HelloResponse {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned short _field4;
    struct optional<Rose::HelloResponse::AdditionalInfo> _field5;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *_field1;
                    unsigned long long _field2;
                    unsigned long long _field3;
                } _field1;
                struct __short {
                    char _field1[23];
                    struct {
                        unsigned char _field1;
                    } _field2;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct optional<Rose::HelloResponse::AdditionalInfo> {
    union {
        char _field1;
        struct AdditionalInfo _field2;
    } _field1;
    _Bool _field2;
};
