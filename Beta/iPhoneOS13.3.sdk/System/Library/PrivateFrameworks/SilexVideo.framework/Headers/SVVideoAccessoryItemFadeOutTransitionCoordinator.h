/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewPropertyAnimator;

@interface SVVideoAccessoryItemFadeOutTransitionCoordinator : NSObject

{
    UIViewPropertyAnimator *_animator;
}

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool animated;

- (void)cancelTransition;
- (void)animateWithContext:(id)arg1;

@end
