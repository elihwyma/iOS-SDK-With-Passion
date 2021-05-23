/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKDateComplication : NTKComplication

{
    unsigned long long _dateStyle;
}

@property (nonatomic, readonly) unsigned long long dateStyle;

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithDateStyle:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)customDailySnapshotKey;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;

@end
