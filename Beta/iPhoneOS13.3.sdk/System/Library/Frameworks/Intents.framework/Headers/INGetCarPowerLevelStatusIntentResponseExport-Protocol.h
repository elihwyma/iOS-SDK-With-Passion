/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSMeasurement, NSNumber;

@protocol INGetCarPowerLevelStatusIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSNumber *fuelPercentRemaining;
@property (copy, nonatomic) NSNumber *chargePercentRemaining;
@property (copy, nonatomic) NSMeasurement *distanceRemaining;
@property (copy, nonatomic) NSNumber *charging;
@property (copy, nonatomic) NSNumber *minutesToFull;

@end
