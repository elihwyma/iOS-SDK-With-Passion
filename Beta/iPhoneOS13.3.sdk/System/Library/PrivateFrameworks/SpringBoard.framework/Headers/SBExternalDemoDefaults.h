/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalDemoDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) _Bool shouldLockIconsInStoreDemoMode;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
