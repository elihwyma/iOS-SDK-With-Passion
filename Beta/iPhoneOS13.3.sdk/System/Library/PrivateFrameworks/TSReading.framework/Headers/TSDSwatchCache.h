/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface TSDSwatchCache : NSObject

{
    NSOperationQueue *mOperationQueue;
}

+ (id)swatchCache;

- (id)init;
- (void)dealloc;
- (struct CGSize)shapeSwatchInset;
- (void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg1 documentRoot:(id)arg2;
- (struct CGImage *)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(struct CGSize)arg3 overImage:(struct CGImage *)arg4;
- (id)p_thumbnailImageDataForImageData:(id)arg1;
- (id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2;
- (void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 shapeType:(int)arg4 angle:(double)arg5 documentRoot:(id)arg6;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(_Bool)arg5 documentRoot:(id)arg6;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 imageInfo:(id)arg5 shouldClipVertically:(_Bool)arg6 documentRoot:(id)arg7;
- (struct CGSize)imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize)arg2;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 movieInfo:(id)arg5 shouldClipVertically:(_Bool)arg6 documentRoot:(id)arg7;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(_Bool)arg5 documentRoot:(id)arg6;

@end
