/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class CIContext, CIImage, NSDictionary, VNImageSourceManager;

@interface VNImageBuffer : NSObject

{
    struct __CVBuffer *_origPixelBuffer;
    struct __CFArray *_pixelBufferReps;
    struct os_unfair_lock_s _pixelBufferRepsLock;
    CIImage *_origCIImage;
    CIContext *_passedInCIContext;
    VNImageSourceManager *_imageSourceManager;
    int _orientation;
    unsigned long long _origImageWidth;
    unsigned long long _origImageHeight;
    NSDictionary *_options;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;

+ (const struct __CFDictionary *)ioSurfaceBackedPixelBufferAttributes;
+ (struct CGColorSpace *)copyColorspaceForFormat:(unsigned int)arg1 bitmapInfo:(unsigned int *)arg2;
+ (struct CGRect)computeCenterCropRectFromCropRect:(struct CGRect)arg1 inImageSize:(struct CGSize)arg2 calculatedScaleX:(double *)arg3 calculatedScaleY:(double *)arg4;
+ (int)_helpReadOrientationFromOptionsDictionary:(id)arg1;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (int)orientation;
- (id)fileURL;
- (id)imageProperties;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (struct __CVBuffer *)cropAndScaleBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 cropRect:(struct CGRect)arg3 format:(unsigned int)arg4 imageCropAndScaleOption:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7 calculatedNormalizedOriginOffset:(struct CGPoint *)arg8 calculatedScaleX:(double *)arg9 calculatedScaleY:(double *)arg10;
- (void)purgeCachedRepresentations;
- (struct __CVBuffer *)originalPixelBuffer;
- (struct __CVBuffer *)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)_cropCVPixelBuffer:(struct __CVBuffer *)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(_Bool)arg7 options:(id)arg8 error:(id *)arg9;
- (struct CGRect)_calculateTargetRectFromCropRect:(struct CGRect)arg1;
- (_Bool)_isRectOutOfBounds:(struct CGRect)arg1;
- (_Bool)_cropCIImage:(id)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(_Bool)arg7 options:(id)arg8 error:(id *)arg9;
- (_Bool)_cropImageSourceManager:(id)arg1 outBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect)arg6 performCrop:(_Bool)arg7 options:(id)arg8 error:(id *)arg9;
- (struct __CVBuffer *)_retrieveBufferFromCacheIfFoundWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3;
- (struct __CVBuffer *)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 error:(id *)arg6;
- (void)calculateOrientationCorrectedImageDimensions;
- (_Bool)getPixelFocalLengthIfAvailable:(float *)arg1;
- (_Bool)getCameraOpticalCenterIfAvailable:(struct CGPoint *)arg1;
- (_Bool)getCameraIntrinsicsAvailable:(CDStruct_8e0628e6 *)arg1;
- (_Bool)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(struct CGRect)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (struct CGRect)makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect)arg1;
- (struct __CVBuffer *)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(id *)arg4;
- (struct __CVBuffer *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(struct CGRect)arg2 andPixelFormat:(unsigned int)arg3 andOptions:(id)arg4 error:(id *)arg5;
- (id)_baseCIImage;
- (struct __CVBuffer *)_baseCVPixelBuffer;
- (id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id *)arg6;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect)arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id *)arg7;
- (id)_optionsWithOverridingOptions:(id)arg1;
- (_Bool)_useCoreImageForFormat:(unsigned int)arg1;
- (void)_dumpIntermediateImage:(struct __CVBuffer *)arg1 withOptions:(id)arg2;

@end
