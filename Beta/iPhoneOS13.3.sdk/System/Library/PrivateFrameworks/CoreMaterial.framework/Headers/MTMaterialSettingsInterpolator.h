/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@class MTColor, NSArray, NSString;

@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialSettingsInterpolator : NSObject

{
    double _previousWeighting;
    double _weighting;
    id <MTRecipeMaterialSettingsProviding> _finalSettings;
    NSString *_finalConfiguration;
    id <MTRecipeMaterialSettingsProviding> _initialSettings;
    NSString *_initialConfiguration;
    CDUnknownBlockType _blurRadiusTransformer;
}

@property (nonatomic) double weighting;
@property (nonatomic, readonly, getter=isWeightingChanging) _Bool weightingChanging;
@property (retain, nonatomic) id <MTRecipeMaterialSettingsProviding> finalSettings;
@property (copy, nonatomic) NSString *finalConfiguration;
@property (retain, nonatomic) id <MTRecipeMaterialSettingsProviding> initialSettings;
@property (copy, nonatomic) NSString *initialConfiguration;
@property (nonatomic, readonly, getter=isBackdropRequiredEver) _Bool backdropRequiredEver;
@property (nonatomic, readonly, getter=isBackdropRequiredInitially) _Bool backdropRequiredInitially;
@property (nonatomic, readonly, getter=isBackdropRequiredFinally) _Bool backdropRequiredFinally;
@property (nonatomic, readonly, getter=isOverlay) _Bool overlay;
@property (nonatomic, readonly, getter=isBlurEnabled) _Bool blurEnabled;
@property (nonatomic, readonly, getter=isLuminanceEnabled) _Bool luminanceEnabled;
@property (nonatomic, readonly, getter=isSaturationEnabled) _Bool saturationEnabled;
@property (nonatomic, readonly, getter=isBrightnessEnabled) _Bool brightnessEnabled;
@property (nonatomic, readonly, getter=isColorMatrixEnabled) _Bool colorMatrixEnabled;
@property (nonatomic, readonly, getter=isTintEnabled) _Bool tintEnabled;
@property (nonatomic, readonly, getter=isZoomEnabled) _Bool zoomEnabled;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) double luminanceAmount;
@property (copy, nonatomic, readonly) NSArray *luminanceValues;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) struct CAColorMatrix colorMatrix;
@property (nonatomic, readonly) double tintAlpha;
@property (nonatomic, readonly) double zoom;
@property (nonatomic, readonly) double backdropScale;
@property (copy, nonatomic, readonly) NSString *blurInputQuality;
@property (nonatomic, readonly, getter=isBlurAtEnd) _Bool blurAtEnd;
@property (copy, nonatomic, readonly) MTColor *tintColor;
@property (copy, nonatomic) CDUnknownBlockType blurRadiusTransformer;

+ (id)_filteringProtocolGetterNames;

- (id)description;
- (void)finalizeWeighting;
- (id)initWithSettings:(id)arg1 configuration:(id)arg2;
- (_Bool)_isBackdropRequiredWithSettings:(id)arg1 configuration:(id)arg2;
- (_Bool)_isPropertyEnabled:(id)arg1 consideringWeighting:(_Bool)arg2;
- (_Bool)_isTintEnabledWithSettings:(id)arg1 configuration:(id)arg2;
- (double)_floatPropertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;
- (double)_floatPropertyValueForProperty:(id)arg1;
- (id)_luminanceInputValues;
- (id)_propertyValueForProperty:(id)arg1 withTransformer:(CDUnknownBlockType)arg2;
- (id)_subSettingsForRecipeSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixColorWithSettings:(id)arg1 configuration:(id)arg2 alpha:(double)arg3;
- (id)_colorWithGetterBlock:(CDUnknownBlockType)arg1;
- (id)_tintAlphaWithSettings:(id)arg1 configuration:(id)arg2;
- (_Bool)_isBackdropRequiredWithSubSettings:(id)arg1;
- (id)_filteringProperty:(id)arg1 withSettings:(id)arg2 configuration:(id)arg3;
- (id)_blurRadiusWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_luminanceAmountWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_saturationWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_brightnessWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_colorMatrixWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_zoomWithSettings:(id)arg1 configuration:(id)arg2;
- (id)_backdropScaleWithSettings:(id)arg1 configuration:(id)arg2;

@end
