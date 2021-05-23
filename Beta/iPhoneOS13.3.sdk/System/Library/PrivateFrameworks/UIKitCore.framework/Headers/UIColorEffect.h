/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class NSDictionary, NSString;

@interface UIColorEffect : UIVisualEffect

{
    NSString *_filterType;
    NSDictionary *_configurationValues;
    NSDictionary *_identityValues;
    NSDictionary *_requestedValues;
    _Bool _disableInPlaceFiltering;
}

+ (_Bool)supportsSecureCoding;
+ (id)colorEffectSaturate:(double)arg1;
+ (id)colorEffectMatrix:(CDStruct_10115da1)arg1;
+ (id)_colorEffectCAMatrix:(struct CAColorMatrix)arg1;
+ (id)colorEffectColor:(id)arg1;
+ (id)colorEffectMultiply:(id)arg1;
+ (id)colorEffectAdd:(id)arg1;
+ (id)colorEffectSubtract:(id)arg1;
+ (id)_colorEffectSourceOver:(CDStruct_d2b197d1)arg1;
+ (id)colorEffectBrightness:(double)arg1;
+ (id)colorEffectContrast:(double)arg1;
+ (id)colorEffectInvert;
+ (id)colorEffectMonochromeTint:(id)arg1 blendingAmount:(double)arg2 brightnessAdjustment:(double)arg3;
+ (id)colorEffectLuminanceMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectLuminanceCurveMap:(id)arg1 blendingAmount:(double)arg2;
+ (id)colorEffectCurvesRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
+ (id)colorEffectAverageColor;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (long long)_expectedUsage;
- (id)_filterEntry;

@end
