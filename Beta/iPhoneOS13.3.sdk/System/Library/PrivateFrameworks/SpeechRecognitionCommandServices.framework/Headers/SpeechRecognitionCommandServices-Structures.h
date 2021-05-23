/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

typedef void (^CDUnknownBlockType)(void);

struct CMDPFst {
    _Bool _field1;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _field2;
    struct unique_ptr<fst::SymbolTable, std::__1::default_delete<fst::SymbolTable>> _field3;
    struct unique_ptr<fst::SymbolTable, std::__1::default_delete<fst::SymbolTable>> _field4;
    struct unique_ptr<fst::SymbolTable, std::__1::default_delete<fst::SymbolTable>> _field5;
};

struct CMDPNormalizer;

struct SymbolTable;

struct VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>;

struct _FstArc {
    int _field1;
    int _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
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

struct pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>;

struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct __tree<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::basic_string<char>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::less<std::__1::basic_string<char>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<CMDPNormalizer, std::__1::default_delete<CMDPNormalizer>> {
    struct __compressed_pair<CMDPNormalizer *, std::__1::default_delete<CMDPNormalizer>> {
        struct CMDPNormalizer *__value_;
    } __ptr_;
};

struct unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>;

struct unique_ptr<fst::SymbolTable, std::__1::default_delete<fst::SymbolTable>> {
    struct __compressed_pair<fst::SymbolTable *, std::__1::default_delete<fst::SymbolTable>> {
        struct SymbolTable *_field1;
    } _field1;
};

struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> {
    struct __compressed_pair<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>*, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> {
        struct VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> *__value_;
    } __ptr_;
};

struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>;

struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>>> {
    struct pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>> *__begin_;
    struct pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>> *__end_;
    struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>*, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>>> {
        struct pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>> *__value_;
    } __end_cap_;
};

struct vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>> {
    struct unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>> *__begin_;
    struct unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>> *__end_;
    struct __compressed_pair<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>*, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>> {
        struct unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>> *__value_;
    } __end_cap_;
};

struct vector<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>, std::__1::allocator<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>>> {
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field1;
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>*, std::__1::allocator<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>>> {
        struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>;

struct vector<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>>> {
    struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field1;
    struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>>> {
        struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field1;
    } _field3;
};

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

typedef struct vector<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>, std::__1::allocator<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>>> {
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field1;
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>*, std::__1::allocator<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>>>> {
        struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> *_field1;
    } _field3;
} vector_333085d9;

typedef struct vector<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>>> {
    struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field1;
    struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>>>> {
        struct vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>>>> *_field1;
    } _field3;
} vector_55c0f9b1;
