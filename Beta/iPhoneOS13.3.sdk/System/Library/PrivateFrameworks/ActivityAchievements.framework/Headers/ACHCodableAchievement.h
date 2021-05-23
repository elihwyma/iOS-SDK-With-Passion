/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ProtocolBuffer/PBCodable.h>

@class ACHCodableColor, ACHCodableTemplate, NSMutableArray, NSString;

@interface ACHCodableAchievement : PBCodable

{
    long long _badgeModelVersion;
    double _goalValue;
    double _progressValue;
    ACHCodableTemplate *_achievementTemplate;
    ACHCodableColor *_badgeEnamelColor;
    ACHCodableColor *_badgeMetalColor;
    NSString *_badgeShapeName;
    NSMutableArray *_customPlaceholderValues;
    NSMutableArray *_earnedInstances;
    ACHCodableColor *_enamelTriColor1;
    ACHCodableColor *_enamelTriColor2;
    ACHCodableColor *_enamelTriColor3;
    NSString *_goalUnitString;
    NSString *_localizationBundleURL;
    NSString *_progressUnitString;
    NSString *_propertyListBundleURL;
    NSString *_resourceBundleURL;
    NSString *_section;
    NSString *_stickerBundleURL;
    NSString *_textureFilename;
    _Bool _badgeUsesFullColorEnamel;
    _Bool _badgeUsesTriColorEnamel;
    _Bool _faceHasMetalInlay;
    _Bool _unearnedUsesTwoToneEnamel;
    struct {
        unsigned int badgeModelVersion:1;
        unsigned int goalValue:1;
        unsigned int progressValue:1;
        unsigned int badgeUsesFullColorEnamel:1;
        unsigned int badgeUsesTriColorEnamel:1;
        unsigned int faceHasMetalInlay:1;
        unsigned int unearnedUsesTwoToneEnamel:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAchievementTemplate;
@property (retain, nonatomic) ACHCodableTemplate *achievementTemplate;
@property (retain, nonatomic) NSMutableArray *earnedInstances;
@property (nonatomic, readonly) _Bool hasLocalizationBundleURL;
@property (retain, nonatomic) NSString *localizationBundleURL;
@property (nonatomic, readonly) _Bool hasResourceBundleURL;
@property (retain, nonatomic) NSString *resourceBundleURL;
@property (nonatomic, readonly) _Bool hasStickerBundleURL;
@property (retain, nonatomic) NSString *stickerBundleURL;
@property (nonatomic, readonly) _Bool hasBadgeShapeName;
@property (retain, nonatomic) NSString *badgeShapeName;
@property (nonatomic, readonly) _Bool hasBadgeMetalColor;
@property (retain, nonatomic) ACHCodableColor *badgeMetalColor;
@property (nonatomic) _Bool hasBadgeUsesFullColorEnamel;
@property (nonatomic) _Bool badgeUsesFullColorEnamel;
@property (nonatomic, readonly) _Bool hasBadgeEnamelColor;
@property (retain, nonatomic) ACHCodableColor *badgeEnamelColor;
@property (nonatomic, readonly) _Bool hasPropertyListBundleURL;
@property (retain, nonatomic) NSString *propertyListBundleURL;
@property (nonatomic) _Bool hasProgressValue;
@property (nonatomic) double progressValue;
@property (nonatomic, readonly) _Bool hasProgressUnitString;
@property (retain, nonatomic) NSString *progressUnitString;
@property (nonatomic) _Bool hasGoalValue;
@property (nonatomic) double goalValue;
@property (nonatomic, readonly) _Bool hasGoalUnitString;
@property (retain, nonatomic) NSString *goalUnitString;
@property (retain, nonatomic) NSMutableArray *customPlaceholderValues;
@property (nonatomic, readonly) _Bool hasTextureFilename;
@property (retain, nonatomic) NSString *textureFilename;
@property (nonatomic) _Bool hasUnearnedUsesTwoToneEnamel;
@property (nonatomic) _Bool unearnedUsesTwoToneEnamel;
@property (nonatomic, readonly) _Bool hasSection;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) _Bool hasFaceHasMetalInlay;
@property (nonatomic) _Bool faceHasMetalInlay;
@property (nonatomic) _Bool hasBadgeUsesTriColorEnamel;
@property (nonatomic) _Bool badgeUsesTriColorEnamel;
@property (nonatomic, readonly) _Bool hasEnamelTriColor1;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor1;
@property (nonatomic, readonly) _Bool hasEnamelTriColor2;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor2;
@property (nonatomic, readonly) _Bool hasEnamelTriColor3;
@property (retain, nonatomic) ACHCodableColor *enamelTriColor3;
@property (nonatomic) _Bool hasBadgeModelVersion;
@property (nonatomic) long long badgeModelVersion;

+ (Class)earnedInstancesType;
+ (Class)customPlaceholderValuesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEarnedInstances:(id)arg1;
- (void)addCustomPlaceholderValues:(id)arg1;
- (unsigned long long)earnedInstancesCount;
- (void)clearEarnedInstances;
- (id)earnedInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)customPlaceholderValuesCount;
- (void)clearCustomPlaceholderValues;
- (id)customPlaceholderValuesAtIndex:(unsigned long long)arg1;

@end
