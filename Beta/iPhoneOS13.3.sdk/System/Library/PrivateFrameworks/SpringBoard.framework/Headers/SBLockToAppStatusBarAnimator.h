/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBLockToAppStatusBarAnimator : NSObject

{
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
}

- (void)animateStatusBarFromLockToHome;

@end
