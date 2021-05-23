/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <Foundation/NSObject.h>

@class ACHTemplate, HKQuantity, NSArray, NSDictionary, NSString, NSURL;

@interface ACHAchievement : NSObject

{
    _Bool _badgeUsesFullColorEnamel;
    _Bool _unearnedUsesTwoToneEnamel;
    _Bool _faceHasMetalInlay;
    _Bool _badgeUsesTriColorEnamel;
    ACHTemplate *_template;
    NSArray *_earnedInstances;
    NSString *_section;
    NSURL *_localizationBundleURL;
    NSURL *_resourceBundleURL;
    NSURL *_propertyListBundleURL;
    NSURL *_stickerBundleURL;
    NSString *_textureFilename;
    NSString *_badgeShapeName;
    long long _badgeModelVersion;
    HKQuantity *_progress;
    HKQuantity *_goal;
    NSDictionary *_customPlaceholderValues;
    CDStruct_7e4c1c81 _badgeMetalColor;
    CDStruct_7e4c1c81 _badgeEnamelColor;
    CDStruct_7e4c1c81 _enamelTriColor1;
    CDStruct_7e4c1c81 _enamelTriColor2;
    CDStruct_7e4c1c81 _enamelTriColor3;
}

@property (retain) NSURL *localizationBundleURL;
@property (retain) NSURL *resourceBundleURL;
@property (retain) NSURL *propertyListBundleURL;
@property (retain) NSURL *stickerBundleURL;
@property (retain) NSString *textureFilename;
@property (retain) NSString *badgeShapeName;
@property _Bool badgeUsesFullColorEnamel;
@property _Bool unearnedUsesTwoToneEnamel;
@property _Bool faceHasMetalInlay;
@property CDStruct_7e4c1c81 badgeEnamelColor;
@property CDStruct_7e4c1c81 badgeMetalColor;
@property long long badgeModelVersion;
@property _Bool badgeUsesTriColorEnamel;
@property CDStruct_7e4c1c81 enamelTriColor1;
@property CDStruct_7e4c1c81 enamelTriColor2;
@property CDStruct_7e4c1c81 enamelTriColor3;
@property (copy) NSString *section;
@property (retain) HKQuantity *progress;
@property (retain) HKQuantity *goal;
@property (retain) NSDictionary *customPlaceholderValues;
@property (readonly) _Bool hasClientRequiredURLs;
@property (readonly) ACHTemplate *template;
@property (readonly) NSArray *earnedInstances;
@property (readonly) _Bool unearned;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodable:(id)arg1;
- (id)initWithTemplate:(id)arg1 earnedInstances:(id)arg2;
- (id)shallowCopyReplacingEarnedInstances:(id)arg1;

@end
