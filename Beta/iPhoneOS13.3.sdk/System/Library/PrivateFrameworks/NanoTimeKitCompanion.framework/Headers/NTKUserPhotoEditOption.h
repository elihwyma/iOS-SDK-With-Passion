/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKEditOption.h>

@interface NTKUserPhotoEditOption : NTKEditOption

{
    _Bool _usesDefaultPhoto;
}

@property (nonatomic) _Bool usesDefaultPhoto;

+ (_Bool)supportsSecureCoding;
+ (id)optionUsingDefaultPhoto:(_Bool)arg1 forDevice:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (_Bool)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;

@end
