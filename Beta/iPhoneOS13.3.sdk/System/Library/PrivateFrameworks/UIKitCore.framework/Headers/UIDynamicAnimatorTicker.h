/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface UIDynamicAnimatorTicker : NSObject

{
    UIDynamicAnimator *_animator;
}

@property (weak) UIDynamicAnimator *animator;

- (void)_displayLinkTick:(id)arg1;

@end
