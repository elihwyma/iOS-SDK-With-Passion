/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIFeedbackCoreHapticsEngine;

@protocol CHHapticPatternPlayer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIFeedbackCoreHapticsPlayer : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    CDUnknownBlockType _invalidationBlock;
    _UIFeedbackCoreHapticsEngine *_hapticEngine;
    id <CHHapticPatternPlayer> _coreHapticsPlayer;
}

@property (weak, nonatomic) _UIFeedbackCoreHapticsEngine *hapticEngine;
@property (retain, nonatomic) id <CHHapticPatternPlayer> coreHapticsPlayer;
@property (copy, nonatomic) CDUnknownBlockType invalidationBlock;

- (id)initWithEngine:(id)arg1;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id)_internal_createFixedParameterForParameters:(id)arg1 withKey:(id)arg2 forEventType:(id)arg3;
- (id)_internal_createEventForFeedbackData:(id)arg1;
- (void)_internal_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (id)_internal_createPatternForFeedbackData:(id)arg1 feedback:(id)arg2;
- (id)_internal_createPlayerWithPattern:(id)arg1;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;

@end
