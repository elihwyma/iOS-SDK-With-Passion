/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSMeasurement, NSNumber;

@protocol INSetClimateSettingsInCarIntentExport <Swift>

@property (copy, nonatomic) NSNumber *enableFan;
@property (copy, nonatomic) NSNumber *enableAirConditioner;
@property (copy, nonatomic) NSNumber *enableClimateControl;
@property (copy, nonatomic) NSNumber *enableAutoMode;
@property (nonatomic) long long airCirculationMode;
@property (copy, nonatomic) NSNumber *fanSpeedIndex;
@property (copy, nonatomic) NSNumber *fanSpeedPercentage;
@property (nonatomic) long long relativeFanSpeedSetting;
@property (copy, nonatomic) NSMeasurement *temperature;
@property (nonatomic) long long relativeTemperatureSetting;
@property (nonatomic) long long climateZone;
@property (copy, nonatomic) INSpeakableString *carName;

- (unsigned short)init;

@end
