/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@interface PUPhotoEditEffectsSupport : NSObject

+ (void)updateCompositionController:(id)arg1 withDepthEnabled:(_Bool)arg2;
+ (void)updateCompositionController:(id)arg1 withEffect:(id)arg2 updateVersion:(_Bool)arg3;
+ (void)updateCompositionController:(id)arg1 withEffect:(id)arg2 intensity:(double)arg3 updateVersion:(_Bool)arg4;
+ (void)updateCompositionController:(id)arg1 withLightingIdentifier:(id)arg2 portraitInfo:(id)arg3;
+ (id)lightingEffectTypesByIdentifier;
+ (long long)lightingEffectTypeForIdentifier:(id)arg1;
+ (id)identifierForLightingType:(long long)arg1 lightingVersion:(long long)arg2;
+ (void)_setEffectFilterName:(id)arg1 withIntensity:(double)arg2 withVersion:(unsigned long long)arg3 forCompositionController:(id)arg4;
+ (void)_setPortraitEffectFilterName:(id)arg1 withVersion:(unsigned long long)arg2 forCompositionController:(id)arg3 portraitInfo:(id)arg4;
+ (void)_setPortraitEffectEnabled:(_Bool)arg1 forCompositionController:(id)arg2;
+ (void)_clearStandardEffectsWithCompositionController:(id)arg1;
+ (void)_clearPortraitEffectsWithCompositionController:(id)arg1;

@end
