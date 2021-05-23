/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARCustomLMBuilder : NSObject

{
    struct unique_ptr<quasar::CustomLMBuilder, std::__1::default_delete<quasar::CustomLMBuilder>> _customLMBuilder;
    struct unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer>> _tokenizer;
}

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)getFstGrammar:(id)arg1 overrideFolder:(id)arg2 weight:(float)arg3 errorOut:(id *)arg4;

@end
