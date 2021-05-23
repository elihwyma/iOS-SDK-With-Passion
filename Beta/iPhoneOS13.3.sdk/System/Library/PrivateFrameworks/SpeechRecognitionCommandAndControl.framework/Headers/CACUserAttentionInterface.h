/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <Foundation/NSObject.h>

@class CACUserAttentionController;

@interface CACUserAttentionInterface : NSObject

{
    _Bool _isAttentionAwarenessInterrupted;
    CACUserAttentionController *_userAttentionController;
}

@property (retain, nonatomic, getter=_userAttentionController, setter=_setUserAttentionController:) CACUserAttentionController *userAttentionController;
@property (nonatomic) _Bool isAttentionAwarenessInterrupted;

+ (id)sharedManager;

- (void)stopUserAttentionControllerIfNeeded;
- (void)startUserAttentionControllerIfNeededForTypes:(unsigned long long)arg1;
- (void)userAttentionController:(id)arg1 didLoseAttentionWithEvent:(long long)arg2;
- (void)userAttentionController:(id)arg1 didGainAttentionWithEvent:(long long)arg2;
- (void)userAttentionControllerAttentionAwarenessInterrupted:(id)arg1;
- (void)userAttentionControllerAttentionAwarenessInterruptionEnded:(id)arg1;
- (void)cancelDelayedUserAttentionControllerStop;
- (void)startUserAttentionControllerIfNeeded;
- (void)stopUserAttentionControllerIfNeededAfterDelay:(double)arg1;

@end
