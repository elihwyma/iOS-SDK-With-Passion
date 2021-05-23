/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIWindow.h>

@interface UIWindow (SelfHosting)

- (void)sb_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (id)sb_hostWrapperForUseInOrientation:(long long)arg1 hostRequester:(id)arg2;
- (id)sb_hostWrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2;
- (void)sb_updateInterfaceOrientationFromActiveInterfaceOrientation:(_Bool)arg1;

@end
