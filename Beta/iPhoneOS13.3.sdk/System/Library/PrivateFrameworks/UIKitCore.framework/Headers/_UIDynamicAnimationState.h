/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSTimer, UIScreen;

__attribute__((visibility("hidden")))
@interface _UIDynamicAnimationState : NSObject

{
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    NSMutableArray *_activeAnimations;
    double _lastUpdateTime;
    _Bool _shouldSchedYield;
}

@end
