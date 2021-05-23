/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

#import <Foundation/NSObject.h>

@interface CMDPResult : NSObject

{
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _resultFst;
    struct unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _resultEditFst;
    struct unique_ptr<CMDPNormalizer, std::__1::default_delete<CMDPNormalizer>> _normalizer;
    struct vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken>>>> _resultNodes;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _symbol_set;
}

+ (vector_55c0f9b1)CMDPTokenSausageFromCFTokenSausage:(struct __CFArray *)arg1;
+ (vector_55c0f9b1)CMDPTokenSausageFromAFSpeechPhraseArray:(id)arg1;

- (id).cxx_construct;
- (id)initWithTokenSausageVec:(vector_55c0f9b1 *)arg1 forLocaleIdentifier:(id)arg2;
- (id)createArrayFromNBestResults:(const vector_333085d9 *)arg1 withGrammarData:(id)arg2;
- (id)initWithTokenSausage:(struct __CFArray *)arg1 forLocaleIdentifier:(id)arg2;
- (id)initWithAFSpeechPhraseArray:(id)arg1 forLocaleIdentifier:(id)arg2;
- (id)matchWithGrammars:(id)arg1 winningIndex:(int *)arg2 winningDistance:(float *)arg3;

@end
