/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

typedef void (^CDUnknownBlockType)(void);

struct CGPoint {
    double _field1;
    double _field2;
};

struct ConfidenceModel {
    struct Params _field1;
};

struct ContinuousPathDetector {
    struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath>>> _field1;
    struct Parameters _field2;
    double _field3;
    float _field4;
    float _field5;
};

struct DictionaryContainer;

struct Input;

struct InputManagerSpecialization;

struct KeyboardLayout;

struct LanguageModel;

struct LanguageModelContext {
    struct vector<TITokenID, std::__1::allocator<TITokenID>> _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct LockedInput {
    unsigned int _field1;
    unsigned int _field2;
};

struct Parameters {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct Params {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
};

struct RefPtr<KB::DictionaryContainer> {
    struct DictionaryContainer *_field1;
};

struct RefPtr<TI::Favonius::KeyboardLayout> {
    struct KeyboardLayout *_field1;
};

struct RefPtr<TI::Favonius::LayoutKey>;

struct String {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned char _field4;
    char *_field5;
    char _field6[16];
};

struct StrokeBuildManager;

struct TIInputManager {
    CDUnknownFunctionPointerType *_field1;
    struct vector<KB::Input, std::__1::allocator<KB::Input>> _field2;
    struct String _field3;
    struct String _field4;
    unsigned int _field5;
    struct String _field6;
    struct retain_ptr<const __CFLocale *> _field7;
    struct ConfidenceModel _field8;
    struct LockedInput _field9;
    struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> _field10;
    struct String _field11;
    struct RefPtr<KB::DictionaryContainer> _field12;
    struct shared_ptr<KB::LanguageModel> _field13;
    unsigned int _field14;
    struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field15;
    _Bool _field16;
    struct String _field17;
    struct RefPtr<TI::Favonius::KeyboardLayout> _field18;
    struct ContinuousPathDetector _field19;
    int _field20;
    _Bool _field21;
    struct String _field22;
    struct LanguageModelContext _field23;
    struct shared_ptr<KB::InputManagerSpecialization> _field24;
    CDUnknownBlockType _field25;
    struct shared_ptr<KB::TypologyLogger> _field26;
    _Bool _field27;
    _Bool _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
    _Bool _field35;
};

struct TITokenID;

struct TypologyLogger;

struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    unsigned long long _field1;
    struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> _field2;
};

struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> {
    struct RefPtr<TI::Favonius::LayoutKey> *_field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct map<int, KB::ContinuousPathDetector::AnnotatedPath, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, KB::ContinuousPathDetector::AnnotatedPath>>> {
    struct __tree<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, KB::ContinuousPathDetector::AnnotatedPath>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct retain_ptr<const __CFLocale *> {
    struct __CFLocale *_field1;
};

struct shared_ptr<KB::InputManagerSpecialization> {
    struct InputManagerSpecialization *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<KB::LanguageModel> {
    struct LanguageModel *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<KB::TypologyLogger> {
    struct TypologyLogger *_field1;
    struct __shared_weak_count *_field2;
};

struct unique_ptr<TI::Favonius::StrokeBuildManager, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> {
    struct __compressed_pair<TI::Favonius::StrokeBuildManager *, std::__1::default_delete<TI::Favonius::StrokeBuildManager>> {
        struct StrokeBuildManager *_field1;
    } _field1;
};

struct vector<KB::Input, std::__1::allocator<KB::Input>> {
    struct Input *_field1;
    struct Input *_field2;
    struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input>> {
        struct Input *_field1;
    } _field3;
};

struct vector<TITokenID, std::__1::allocator<TITokenID>> {
    struct TITokenID *_field1;
    struct TITokenID *_field2;
    struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID>> {
        struct TITokenID *_field1;
    } _field3;
};
