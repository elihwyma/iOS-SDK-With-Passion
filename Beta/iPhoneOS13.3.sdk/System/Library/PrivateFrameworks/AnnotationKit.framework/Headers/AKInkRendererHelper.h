/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@interface AKInkRendererHelper : NSObject

+ (id)_sharedOfflineInkRendererSmallSize;
+ (id)_sharedOfflineInkRendererFullSize;
+ (double)_calculateMaxRenderingSize;
+ (double)maxRenderingSize;
+ (id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3;
+ (void)purgeSharedRenderer;

@end
