/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSNumber;

@protocol INSetSeatSettingsInCarIntentExport <Swift>

@property (copy, nonatomic) NSNumber *enableHeating;
@property (copy, nonatomic) NSNumber *enableCooling;
@property (copy, nonatomic) NSNumber *enableMassage;
@property (nonatomic) long long seat;
@property (copy, nonatomic) NSNumber *level;
@property (nonatomic) long long relativeLevelSetting;
@property (copy, nonatomic) INSpeakableString *carName;

- (unsigned short)init;

@end
