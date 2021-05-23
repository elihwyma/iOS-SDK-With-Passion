/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool wasConnectedToWiFiWhenBrickedForThermalConditions;

- (void)_bindAndRegisterDefaults;

@end
