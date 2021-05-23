/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockComplications/CLKCComplication.h>

@interface NTKComplication : CLKCComplication

{
    unsigned long long _complicationType;
}

@property (nonatomic, readonly) unsigned long long complicationType;

+ (_Bool)supportsSecureCoding;
+ (id)anyComplicationOfType:(unsigned long long)arg1;
+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (id)nullComplication;
+ (id)allComplicationsOfType:(unsigned long long)arg1;
+ (Class)_complicationClassForType:(unsigned long long)arg1;
+ (id)complicationWithJSONObjectRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)JSONObjectRepresentation;
- (id)localizedRichDetailText;
- (id)localizedDetailText;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1 subclassesAllowed:(_Bool)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (id)localizedKeylineLabelText;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)customDailySnapshotKey;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)localizedRichKeylineLabelText;
- (void)_setComplicationType:(unsigned long long)arg1;

@end
