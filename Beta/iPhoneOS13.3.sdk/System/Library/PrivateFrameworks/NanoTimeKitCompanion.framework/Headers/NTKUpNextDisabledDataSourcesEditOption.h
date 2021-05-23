/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

{
    NSSet *_disabledBundleIdentifiers;
}

@property (nonatomic, readonly) NSSet *disabledBundleIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (_Bool)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;
- (id)_alphabeticallySortedIdentifiers;

@end
