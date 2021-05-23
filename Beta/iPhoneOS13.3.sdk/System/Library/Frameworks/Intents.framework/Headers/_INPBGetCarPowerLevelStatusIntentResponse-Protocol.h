/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDistance, _INPBDouble, _INPBInteger;

@protocol _INPBGetCarPowerLevelStatusIntentResponse <Swift>

@property (retain, nonatomic) _INPBDouble *chargePercentRemaining;
@property (nonatomic, readonly) _Bool hasChargePercentRemaining;
@property (nonatomic) _Bool charging;
@property (nonatomic) _Bool hasCharging;
@property (retain, nonatomic) _INPBDistance *distanceRemaining;
@property (nonatomic, readonly) _Bool hasDistanceRemaining;
@property (retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property (nonatomic, readonly) _Bool hasFuelPercentRemaining;
@property (retain, nonatomic) _INPBInteger *minutesToFull;
@property (nonatomic, readonly) _Bool hasMinutesToFull;

@end
