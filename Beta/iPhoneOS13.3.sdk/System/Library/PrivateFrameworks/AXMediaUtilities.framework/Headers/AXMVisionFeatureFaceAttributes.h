/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceAttributes : NSObject

{
    long long _ageCategory;
    long long _genderCategory;
    long long _eyesCategory;
    long long _smilingCategory;
    long long _faceHairCategory;
    long long _hairColorCategory;
    long long _baldCategory;
    long long _glassesCategory;
    NSDictionary *_results;
}

@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic, readonly) long long ageCategory;
@property (nonatomic, readonly) long long genderCategory;
@property (nonatomic, readonly) long long eyesCategory;
@property (nonatomic, readonly) long long smilingCategory;
@property (nonatomic, readonly) long long faceHairCategory;
@property (nonatomic, readonly) long long hairColorCategory;
@property (nonatomic, readonly) long long baldCategory;
@property (nonatomic, readonly) long long glassesCategory;

+ (_Bool)supportsSecureCoding;
+ (id)unitTestingFaceAttributes;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_AXMAgeCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMGenderCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMEyesCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMSmilingCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMFaceHairCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMHairColorCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMBaldCategoryForVisionCategoryIdentifier:(id)arg1;
- (long long)_AXMGlassesCategoryForVisionCategoryIdentifier:(id)arg1;
- (id)_accessibilityLabelForAgeCategory;
- (id)_accessibilityLabelForSmilingCategory;
- (id)_accessibilityLabelForFaceHairCategory;
- (id)_accessibilityLabelForHairColorCategory;
- (id)_accessibilityLabelForBaldCategory;
- (id)_accessibilityLabelForGlassesCategory;
- (id)initWithVisionFaceAttributes:(id)arg1;
- (id)initWithAVMetadataFaceObject:(id)arg1;
- (id)_accessibilityLabelForEyesCategory;
- (id)accessibilityLabelForAttributes;

@end
