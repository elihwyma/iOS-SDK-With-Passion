/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject

{
    vector_2f7ba0dc _quasarTokens;
    vector_2f7ba0dc _quasarPreItnTokens;
}

@property (nonatomic, readonly) vector_2f7ba0dc quasarTokens;
@property (nonatomic, readonly) vector_2f7ba0dc quasarPreItnTokens;
@property (copy, nonatomic, readonly) NSArray *tokens;
@property (copy, nonatomic, readonly) NSArray *preITNTokens;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)_initWithTokens:(vector_2f7ba0dc)arg1 preITNTokens:(vector_2f7ba0dc)arg2;

@end
