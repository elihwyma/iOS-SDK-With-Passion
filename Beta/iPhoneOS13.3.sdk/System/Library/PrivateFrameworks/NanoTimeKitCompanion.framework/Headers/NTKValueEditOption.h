/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKValueEditOption : NTKEditOption

{
    unsigned long long _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameForActionForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (_Bool)_valueIsValid:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_optionWithValue:(unsigned long long)arg1 forDevice:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_value;
- (id)localizedName;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)localizedNameForAction;
- (_Bool)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (id)_faceBundleStringToValueDict;

@end
