/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFCARendererImpl : NSObject

+ (id)luminanceTreatmentFilters;
+ (id)_actuallyRenderImage:(struct CGImage *)arg1 requiresBGRA:(_Bool)arg2 downsampleFactor:(double)arg3 layerCustomizer:(CDUnknownBlockType)arg4;
+ (id)renderTreatedWallpaperImage:(struct CGImage *)arg1 needsLuminanceTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;
+ (id)renderMaterialImage:(struct CGImage *)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;

@end
