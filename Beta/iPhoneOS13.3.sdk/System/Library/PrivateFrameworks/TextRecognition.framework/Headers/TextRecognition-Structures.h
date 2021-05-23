/*
 Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CRCHNetwork {
    struct *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned long long _field3;
    struct vector<CRCHNetworkNode, std::__1::allocator<CRCHNetworkNode>> _field4;
    struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> _field5;
    struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> _field6;
    struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> _field7;
    struct CRCHSymbolMap _field8;
    _Bool _field9;
    struct map<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> _field10;
    struct set<CRCHuint128, std::__1::less<CRCHuint128>, std::__1::allocator<CRCHuint128>> _field11;
    unsigned int *_field12;
    unsigned long long _field13;
};

struct CRCHNetworkNode;

struct CRCHSymbolMap {
    CDUnknownFunctionPointerType *_field1;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> _field2;
    struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> _field3;
};

struct CRCTCPriorityQueue {
    struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>, CRCTCPriorityQueue::QueueComparison> _field1;
    _Bool _field2;
    vector_cdb6db61 _field3;
};

struct CRCtcCandidate {
    int symbol;
    float prob;
};

struct NetworkEdge;

struct QueueComparison;

struct Segmenter {
    struct vector<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>>> _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    struct vector<double, std::__1::allocator<double>> _field7;
    struct vector<double, std::__1::allocator<double>> _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    int _field14;
};

struct _NSRange;

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

struct map<std::__1::basic_string<char>, unsigned long, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned long>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned long>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> {
    struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> {
    struct __tree<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>>>, std::__1::less<unsigned long>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>>, CRCTCPriorityQueue::QueueComparison> {
    vector_cdb6db61 _field1;
    struct QueueComparison _field2;
};

struct set<CRCHuint128, std::__1::less<CRCHuint128>, std::__1::allocator<CRCHuint128>> {
    struct __tree<CRCHuint128, std::__1::less<CRCHuint128>, std::__1::allocator<CRCHuint128>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<CRCHuint128, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<CRCHuint128>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
    struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<unsigned long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vector<BreakPoint, std::__1::allocator<BreakPoint>>;

struct vector<CRCHNetworkNode, std::__1::allocator<CRCHNetworkNode>> {
    struct CRCHNetworkNode *_field1;
    struct CRCHNetworkNode *_field2;
    struct __compressed_pair<CRCHNetworkNode *, std::__1::allocator<CRCHNetworkNode>> {
        struct CRCHNetworkNode *_field1;
    } _field3;
};

struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>> {
    struct CRCtcCandidate *_field1;
    struct CRCtcCandidate *_field2;
    struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate>> {
        struct CRCtcCandidate *_field1;
    } _field3;
};

struct vector<NetworkEdge, std::__1::allocator<NetworkEdge>> {
    struct NetworkEdge *_field1;
    struct NetworkEdge *_field2;
    struct __compressed_pair<NetworkEdge *, std::__1::allocator<NetworkEdge>> {
        struct NetworkEdge *_field1;
    } _field3;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *__begin_;
    struct _NSRange *__end_;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *__value_;
    } __end_cap_;
};

struct vector<const NetworkEdge *, std::__1::allocator<const NetworkEdge *>> {
    struct NetworkEdge **_field1;
    struct NetworkEdge **_field2;
    struct __compressed_pair<const NetworkEdge **, std::__1::allocator<const NetworkEdge *>> {
        struct NetworkEdge **_field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field2;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>> {
    struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field1;
    struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field2;
    struct __compressed_pair<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>*, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>> {
        struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>>> {
    vector_e5f6796a *_field1;
    vector_e5f6796a *_field2;
    struct __compressed_pair<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>*, std::__1::allocator<std::__1::vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>>>> {
        vector_e5f6796a *_field1;
    } _field3;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

// Template types
typedef struct map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int>>> {
    struct __tree<std::__1::__value_type<unsigned int, int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, int>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_fc1db4e5;

typedef struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
} map_0512c6b1;

typedef struct vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate>> {
    struct CRCtcCandidate *_field1;
    struct CRCtcCandidate *_field2;
    struct __compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate>> {
        struct CRCtcCandidate *_field1;
    } _field3;
} vector_cdb6db61;

typedef struct vector<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>> {
    struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field1;
    struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field2;
    struct __compressed_pair<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>*, std::__1::allocator<std::__1::vector<BreakPoint, std::__1::allocator<BreakPoint>>>> {
        struct vector<BreakPoint, std::__1::allocator<BreakPoint>> *_field1;
    } _field3;
} vector_e5f6796a;
