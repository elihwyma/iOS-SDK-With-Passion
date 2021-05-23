/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class CADisplayLink, NSMutableSet;

__attribute__((visibility("hidden")))
@interface QLImageAnimationTimer : NSObject

{
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) CADisplayLink *displayLink;

+ (id)sharedTimer;

- (id)init;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired:(id)arg1;

@end
