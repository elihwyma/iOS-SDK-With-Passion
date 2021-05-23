/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionAction.h>

@interface VSRecognitionSpeakAction : VSRecognitionAction

{
    _Bool _shouldTerminate;
}

- (id)perform;
- (int)completionType;
- (id)initWithSpokenFeedbackString:(id)arg1 willTerminate:(_Bool)arg2;

@end
