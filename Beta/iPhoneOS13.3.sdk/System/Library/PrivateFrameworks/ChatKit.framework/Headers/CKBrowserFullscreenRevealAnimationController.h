/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealAnimationController : NSObject

{
    _Bool _presenting;
    UIViewPropertyAnimator *_ascentDescentAnimator;
}

@property (retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithDirection:(_Bool)arg1;

@end
