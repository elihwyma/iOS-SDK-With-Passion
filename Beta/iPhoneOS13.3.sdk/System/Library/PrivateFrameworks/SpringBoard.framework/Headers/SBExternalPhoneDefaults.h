/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalPhoneDefaults : BSAbstractDefaultDomain

@property (nonatomic) _Bool hideMyPhoneNumber;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
