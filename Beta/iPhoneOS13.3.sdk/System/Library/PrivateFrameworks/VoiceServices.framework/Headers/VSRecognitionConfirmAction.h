/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction

{
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct {
        unsigned int initializing:1;
        unsigned int confirmed:1;
    } _confirmFlags;
}

- (id)init;
- (void)dealloc;
- (int)completionType;
- (id)initWithModelIdentifier:(id)arg1;
- (void)_setConfirmed:(_Bool)arg1;
- (void)setConfirmedAction:(id)arg1;
- (id)confirmedAction;
- (void)setDeniedAction:(id)arg1;
- (id)deniedAction;

@end
