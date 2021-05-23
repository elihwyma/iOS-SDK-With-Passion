/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <SAObjects/SASSpeechPartialResult.h>

@interface SASSpeechPartialResult (AFUserUtteranceAdditions)

+ (id)createUsingPhrases:(id)arg1 andUtterances:(id)arg2;

- (id)af_tokens;
- (id)af_correctionContext;
- (id)af_userUtteranceValue;
- (id)af_bestTextInterpretation;
- (id)af_speechModel;

@end
