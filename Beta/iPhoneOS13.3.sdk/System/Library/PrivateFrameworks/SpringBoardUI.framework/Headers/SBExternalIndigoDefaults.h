/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <FrontBoard/BSAbstractDefaultDomain.h>

@interface SBExternalIndigoDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) long long indigoConfigurationFlagsBitmask;

+ (id)defaults;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (_Bool)indigoConfigurationFlagOne;
- (_Bool)indigoConfigurationFlagTwo;
- (_Bool)indigoConfigurationFlagThree;

@end
