/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@class WorldClockCity;

@interface NTKWorldClockComplication : NTKComplication

{
    WorldClockCity *_city;
}

@property (nonatomic, readonly) WorldClockCity *city;

+ (_Bool)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)_allCities;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)customDailySnapshotKey;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
