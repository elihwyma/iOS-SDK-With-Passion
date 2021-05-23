/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) _Bool disableIdleSleep;
@property (nonatomic) _Bool hideACPower;
@property (nonatomic, readonly) _Bool hideLowPowerAlerts;
@property (nonatomic, readonly) long long lowBatteryLevel;
@property (nonatomic, readonly) _Bool trackPowerEvents;

- (void)_bindAndRegisterDefaults;

@end
