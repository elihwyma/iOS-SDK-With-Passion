/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isDeviceSetup) _Bool deviceSetup;
@property (nonatomic, readonly) NSString *setupState;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
