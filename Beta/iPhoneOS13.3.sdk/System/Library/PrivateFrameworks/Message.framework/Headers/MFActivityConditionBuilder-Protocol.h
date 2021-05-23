/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol MFActivityConditionBuilder <Swift>

@property (nonatomic) _Bool requireExternalPower;
@property (nonatomic) _Bool requireWiFi;
@property (nonatomic) _Bool requireScreenLocked;
@property (nonatomic) _Bool requireLowPowerModeDisabled;
@property (nonatomic) float minBatteryLevel;
@property (nonatomic) long long maxThermalPressureLevel;

@end
