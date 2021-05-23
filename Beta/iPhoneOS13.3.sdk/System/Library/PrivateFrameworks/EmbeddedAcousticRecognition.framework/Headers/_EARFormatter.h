/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSString;

@interface _EARFormatter : NSObject

{
    struct unique_ptr<SpeechITN, std::__1::default_delete<SpeechITN>> _itn;
    NSString *_language;
}

@property (copy, nonatomic) NSString *language;

+ (void)initialize;
+ (_Bool)supportedByQuasarConfig:(id)arg1;
+ (vector_2f7ba0dc)convertStringsToQuasarTokens:(id)arg1;

- (id).cxx_construct;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc *)arg1 task:(id)arg2;
- (id)initWithLanguage:(id)arg1 withSdapiConfig:(id)arg2 quasarConfig:(id)arg3;
- (id)initWithQuasarConfig:(id)arg1;
- (id)initWithGeneralVoc:(id)arg1 withLexiconEnh:(id)arg2 withItnEnh:(id)arg3;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2;
- (id)formattedStringWithStrings:(id)arg1;
- (id)formattedStringWithStrings:(id)arg1 task:(id)arg2;
- (basic_string_90719d97)getOrthography:(const vector_2f7ba0dc *)arg1;
- (id)formattedStringWithStrings:(id)arg1 preToPostItnArray:(id)arg2 task:(id)arg3;
- (vector_2f7ba0dc)formatWords:(const vector_2f7ba0dc *)arg1;
- (id)initWithQuasarConfig:(id)arg1 language:(id)arg2;
- (id)formattedRecognitionWithNBestList:(id)arg1;

@end
