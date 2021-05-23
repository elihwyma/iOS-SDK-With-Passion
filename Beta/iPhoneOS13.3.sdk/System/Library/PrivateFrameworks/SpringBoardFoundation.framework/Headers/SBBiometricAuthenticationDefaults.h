/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBBiometricAuthenticationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly, getter=isLogTimestampsEnabled) _Bool logTimestampsEnabled;

- (void)_bindAndRegisterDefaults;

@end
