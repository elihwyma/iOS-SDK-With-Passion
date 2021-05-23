/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageConfiguration.h>

@class NSString;

@protocol UIImageSymbolConfigurationProvider;

@interface UIImageSymbolConfiguration : UIImageConfiguration

{
    double _pointSize;
    struct {
        unsigned int hasFixedPointSize:1;
        unsigned int providerUpdates:1;
        unsigned int ignoresDynamicType:1;
    } _configFlags;
    long long _scale;
    double _customFontPointSizeMultiplier;
    long long _weight;
    NSString *_textStyle;
    id <UIImageSymbolConfigurationProvider> _provider;
}

@property (nonatomic, setter=_setScale:) long long scale;
@property (nonatomic, setter=_setFixedPointSize:) double fixedPointSize;
@property (nonatomic, setter=_setPointSizeForScalingWithTextStyle:) double pointSizeForScalingWithTextStyle;
@property (nonatomic, setter=_setPointSizeScaleFactor:) double customFontPointSizeMultiplier;
@property (nonatomic, setter=_setWeight:) long long weight;
@property (copy, nonatomic, setter=_setTextStyle:) NSString *textStyle;
@property (weak, nonatomic, setter=_setProvider:) id <UIImageSymbolConfigurationProvider> provider;

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;
+ (id)configurationWithFont:(id)arg1;
+ (id)unspecifiedConfiguration;
+ (id)configurationWithTextStyle:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithScale:(long long)arg1;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2 scale:(long long)arg3;
+ (id)configurationWithTextStyle:(id)arg1;
+ (id)configurationWithFont:(id)arg1 scale:(long long)arg2;
+ (id)_defaultConfiguration;
+ (id)configurationWithWeight:(long long)arg1;
+ (id)configurationWithPointSize:(double)arg1 weight:(long long)arg2;
+ (id)configurationWithPointSize:(double)arg1;
+ (id)configurationFromProvider:(id)arg1;
+ (id)updatingConfigurationFromProvider:(id)arg1;
+ (id)configurationFromProvider:(id)arg1 scale:(long long)arg2;
+ (id)updatingConfigurationFromProvider:(id)arg1 scale:(long long)arg2;
+ (id)configurationWithConfiguration:(id)arg1 and:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isUnspecified;
- (_Bool)isEquivalentToConfiguration:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (id)_initWithTraitCollection:(id)arg1;
- (_Bool)_shouldApplyConfiguration:(id)arg1;
- (void)_applyConfigurationValuesTo:(id)arg1;
- (_Bool)_hasFixedPointSize;
- (_Bool)_hasSpecifiedTextStyle;
- (void)_deriveGlyphSize:(long long *)arg1 weight:(long long *)arg2 pointSize:(double *)arg3;
- (void)_setProvider:(id)arg1 updating:(_Bool)arg2;
- (void)_clearSpecificsExceptScale;
- (_Bool)_hasSpecifiedScale;
- (_Bool)_hasSpecifiedWeight;
- (_Bool)_hasSpecifiedProvider;
- (_Bool)_isUpdatingProvider;
- (id)configurationWithUnspecifiedTextStyle;
- (id)configurationWithUnspecifiedScale;
- (id)configurationWithUnspecifiedWeight;
- (id)configurationWithUnspecifiedPointSizeAndWeight;
- (id)configurationWithoutTextStyle;
- (id)configurationWithoutScale;
- (id)configurationWithoutWeight;
- (id)configurationWithoutPointSizeAndWeight;
- (_Bool)isSimilarToConfiguration:(id)arg1;

@end
