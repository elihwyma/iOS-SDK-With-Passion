/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface CMDPGrammar : NSObject

{
    int _nextFstState;
    int _nextLabelIndex;
    _Bool _addOptionalFst;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _grammarStdfstUPtr;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _editGrammarStdfstUPtr;
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>>> _labelFstPairVector;
    struct unique_ptr<CMDPNormalizer, std::__1::default_delete<CMDPNormalizer>> _normalizer;
    NSString *_currentBuiltInLMString;
    NSString *_currentCommandIdentifier;
    NSMutableArray *_grammarDataArray;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _symbol_set;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _special_symbol_set;
}

- (id).cxx_construct;
- (void)buildGrammarFst:(struct CMDPFst *)arg1 forCommandTree:(id)arg2 withFstArcDictionary:(id)arg3;
- (void)buildEditGrammarFst;
- (void)addPhrase:(id)arg1 toFst:(struct CMDPFst *)arg2 withArc:(struct _FstArc)arg3;
- (void)addAdlibFstWithLabel:(const basic_string_7c0a1c0b *)arg1 outputIndex:(int)arg2;
- (void)addOptionalFstWithLabel;
- (id)initWithCommandTreeDictionary:(id)arg1 forLocaleIdentifier:(id)arg2;
- (struct VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> *)grammarFst;
- (struct VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> *)grammarEditFst;
- (id)grammarData;

@end
