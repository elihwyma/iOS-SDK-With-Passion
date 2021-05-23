/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBDemoDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly, getter=isStoreDemoApplicationLockEnabled) _Bool storeDemoApplicationLockEnabled;

- (void)_bindAndRegisterDefaults;

@end
