/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBBiometricKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) _Bool coachingHintsEnabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
