/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SURotationController.h>

@class SUViewController;

@interface SUStorePageRotationController : SURotationController

{
    SURotationController *_childRotationController;
    SUViewController *_childViewController;
}

- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (id)_childRotationController;

@end
