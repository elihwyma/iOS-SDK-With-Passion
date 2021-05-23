/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SURotationController.h>

@class UIViewController;

@interface SUSplitViewRotationController : SURotationController

{
    SURotationController *_firstRotationController;
    UIViewController *_firstViewController;
    SURotationController *_secondRotationController;
    UIViewController *_secondViewController;
}

- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (id)_firstRotationController;
- (id)_secondRotationController;

@end
