/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SBFCARenderer : NSObject

{
    NSXPCConnection *_rendererServiceConnection;
}

+ (id)sharedInstance;
+ (_Bool)shouldUseXPCServiceForRendering;

- (id)_remoteObjectProxy;
- (void)_createConnection;
- (id)_coerceImageIntoData:(id)arg1;
- (id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;
- (id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 weighting:(double)arg3 downsampleFactor:(double)arg4;

@end
