/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct EncoderConfig {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    double _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    int _field11;
};

struct HEVCLosslessEncoder {
    int _field1;
    int _field2;
    double _field3;
    struct OpaqueVTCompressionSession *_field4;
    struct EncoderConfig _field5;
    CDStruct_198678f7 _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct OpaqueVTCompressionSession;

struct StreamRecordingData {
    struct opaqueCMFormatDescription *_field1;
    _Bool _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    CDUnknownBlockType _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __CVPixelBufferPool *_field13;
    id _field14;
    id _field15;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
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

struct map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamReadingData>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, CMTime, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CMTime>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, CMTime>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, CMTime>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>>>>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct opaqueCMFormatDescription;

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    basic_string_7c0a1c0b *__begin_;
    basic_string_7c0a1c0b *__end_;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        basic_string_7c0a1c0b *__value_;
    } __end_cap_;
};

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    CDStruct_198678f7 _field1;
    CDStruct_198678f7 _field2;
} CDStruct_3c1748cc;

// Template types
typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
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
} basic_string_7c0a1c0b;

typedef struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_d85c7ab5;
