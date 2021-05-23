/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <SAObjects/SASSpeechRecognized.h>

@interface SASSpeechRecognized (AFUserUtteranceAdditions)

- (id)af_correctionContext;
- (id)af_userUtteranceValue;
- (id)af_bestTextInterpretation;
- (_Bool)af_isUtterance;
- (_Bool)af_isUserUtterance;
- (_Bool)af_waitsForConfirmation;

@end
