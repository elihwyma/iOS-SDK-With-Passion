/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <QuartzCore/CABackdropLayer.h>

@interface CABackdropLayer (CoreMaterial)

@property (nonatomic, readonly) double mt_colorMatrixDrivenOpacity;

+ (id)mt_orderedFilterTypesBlurAtEnd;
+ (id)mt_orderedFilterTypes;
+ (id)mt_keyPathForColorMatrixDrivenOpacity;
+ (struct CAColorMatrix)mt_colorMatrixForOpacity:(double)arg1;

- (void)mt_applyMaterialDescription:(id)arg1 removingIfIdentity:(_Bool)arg2;
- (void)mt_setColorMatrixDrivenOpacity:(double)arg1 removingIfIdentity:(_Bool)arg2;
- (void)_mt_setValue:(id)arg1 forFilterOfType:(id)arg2 valueKey:(id)arg3 filterOrder:(id)arg4 removingIfIdentity:(_Bool)arg5;
- (void)_mt_removeFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2;
- (void)_mt_setColorMatrix:(struct CAColorMatrix)arg1 withName:(id)arg2 filterOrder:(id)arg3 removingIfIdentity:(_Bool)arg4;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithName:(id)arg2 andFilterOrder:(id)arg3;
- (void)_mt_configureFilterOfType:(id)arg1 ifNecessaryWithFilterOrder:(id)arg2;
- (void)_mt_removeFilterOfTypeIfNecessary:(id)arg1;

@end
