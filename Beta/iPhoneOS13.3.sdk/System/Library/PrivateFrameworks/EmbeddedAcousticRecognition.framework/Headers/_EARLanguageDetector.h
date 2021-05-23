/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@interface _EARLanguageDetector : NSObject

{
    struct unique_ptr<quasar::LanguageDetector, std::__1::default_delete<quasar::LanguageDetector>> languageDetector;
}

+ (void)initialize;
+ (vector_4ce8f3d5)quasarLocalesOfMessages:(id)arg1;
+ (shared_ptr_9fadee34)updateContext:(const struct LDContext *)arg1 withMessageLocales:(const vector_4ce8f3d5 *)arg2;
+ (id)localesOfMessages:(id)arg1;

- (id).cxx_construct;
- (id)initWithConfigFile:(id)arg1;
- (id)initWithConfigFile:(id)arg1 overrides:(id)arg2;
- (id)startRequestWith:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3;

@end
