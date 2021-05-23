/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <SAObjects/SASRecognition.h>

@interface SASRecognition (AFUserUtteranceAdditions)

- (id)af_speechPhrases;
- (id)af_speechUtterances;
- (id)af_correctionContextWithRefId:(id)arg1 sessionId:(id)arg2;
- (id)af_userUtteranceValueWithRefId:(id)arg1 sessionId:(id)arg2;
- (id)af_bestTextInterpretationWithRefId:(id)arg1 sessionId:(id)arg2;

@end
