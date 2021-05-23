/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLCompositionHelper : NSObject

+ (id)validatedCompositionCopyFor:(id)arg1;
+ (id)validatedCompositionCopyFor:(id)arg1 mediaType:(long long)arg2;
+ (id)photosSchema;
+ (id)adjustmentConstants;
+ (_Bool)isIdentityCompositionController:(id)arg1;
+ (_Bool)isIdentityCompositionController:(id)arg1 forKeys:(id)arg2;
+ (id)newIdentityCompositionController;
+ (id)defaultValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)identityValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)minMaxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)minValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)maxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)valueForType:(long long)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3;
+ (id)valueForCompositionController:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3;
+ (_Bool)compositionControllerHasAnyAutoEnhancement:(id)arg1;
+ (id)activeEffectAdjustmentForCompositionController:(id)arg1;
+ (_Bool)compositionController:(id)arg1 isCropConstraintEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isEffectFilterEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isEffectFilterIntensityEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isPortraitEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isPortraitIntensityEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isDepthIntensityEqualToCompositionController:(id)arg2;
+ (_Bool)compositionController:(id)arg1 isGeometryEqualToCompositionController:(id)arg2;
+ (struct CGSize)synchronousInputSizeForCompositionController:(id)arg1;
+ (void)compositionController:(id)arg1 setEffectFilterName:(id)arg2 version:(long long)arg3;
+ (_Bool)compositionHasOvercaptureSourceSelection:(id)arg1;
+ (id)updateReframeStateForAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 outFormatIdentifier:(id *)arg4 outFormatVersion:(id *)arg5 isReframed:(_Bool)arg6;

@end
