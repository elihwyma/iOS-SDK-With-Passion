/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface HKPropertyAnimationApplier : NSObject

{
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}

- (id)init;
- (void)_displayLinkFired:(id)arg1;
- (void)cancelAnimationsForProperty:(id)arg1;
- (void)applyAnimation:(id)arg1;
- (void)_startDisplayLinkIfNecessary;
- (void)_stopDisplayLinkIfNecessary;
- (void)_applyAnimations;
- (void)_cleanupCompletedAnimations;

@end
