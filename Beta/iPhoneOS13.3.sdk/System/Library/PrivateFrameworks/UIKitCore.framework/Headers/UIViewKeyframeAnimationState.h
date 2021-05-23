/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewAnimationState.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIViewKeyframeAnimationState : UIViewAnimationState

{
    double _frameDuration;
    double _frameStartTime;
    long long _calculationMode;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
    _Bool _inFrame;
}

- (id)init;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;
- (void)pop;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (id)_createDeferredAnimationForKey:(id)arg1;
- (_Bool)_isKeyframeAnimation;
- (id)_updateAnimationFrameWithAnimationProperties:(id)arg1;
- (void)cleanupTrackedLayers;

@end
