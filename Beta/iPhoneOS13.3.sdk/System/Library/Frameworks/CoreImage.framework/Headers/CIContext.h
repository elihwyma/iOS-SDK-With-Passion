/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIContext : NSObject

{
    void *_priv;
}

@property (readonly) struct Context *_internalContext;
@property (readonly) unsigned long long identifier;
@property (nonatomic, readonly) struct CGColorSpace *workingColorSpace;
@property (nonatomic, readonly) int workingFormat;

+ (id)context;
+ (struct CGColorSpace *)defaultWorkingColorSpace;
+ (id)_singletonContext;
+ (struct CGColorSpace *)defaultGrayColorSpace;
+ (struct CGColorSpace *)defaultRGBColorSpace;
+ (id)contextWithOptions:(id)arg1;
+ (struct Context *)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (struct Context *)internalGLContextWithOptions:(id)arg1;
+ (struct Context *)internalContextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (struct Context *)internalContextWithMTLCommandQueue:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLCommandQueue:(id)arg1 options:(id)arg2;
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLCommandQueue:(id)arg1;
+ (struct Context *)internalCLContextWithOptions:(id)arg1 glContext:(void *)arg2;
+ (struct Context *)internalCLContextWithOptions:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)objectForKey:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)clearCaches;
- (id)device;
- (void)render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;
- (struct CGColorSpace *)_outputColorSpace;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (struct CGRect)bounds;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithMTLCommandQueue:(id)arg1 options:(id)arg2;
- (void)_gpuContextCheck;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;
- (_Bool)_isGLBackedContext;
- (_Bool)_isCGBackedContext;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (struct __IOSurface *)createIOSurface:(id)arg1 fromRect:(struct CGRect)arg2;
- (struct CGAffineTransform)CTM;
- (_Bool)_isMetalInternalContext;
- (void)abort;
- (_Bool)_isGLInternalContext;
- (void)_insertEventMarker:(const char *)arg1;
- (void)render:(id)arg1;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint)arg2 fromRect:(struct CGRect)arg3;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (struct __IOSurface *)createIOSurface:(id)arg1;
- (struct CGLayer *)createCGLayerWithSize:(struct CGSize)arg1 info:(struct __CFDictionary *)arg2;
- (unsigned long long)maximumInputImageSize;
- (unsigned long long)maximumOutputImageSize;
- (struct CGSize)inputImageMaximumSize;
- (struct CGSize)outputImageMaximumSize;
- (void)reclaimResources;
- (id)flatten:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (_Bool)measureRequirementsOf:(id)arg1 query:(int)arg2:(id *)arg3 results:(struct CGRect *)arg4;
- (void)setCTM:(struct CGAffineTransform)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (id)_pdfDataRepresentation;
- (struct CGImage *)_createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(struct Trilean)arg5;
- (id)_createClone;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(_Bool)arg5;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3;
- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (_Bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (_Bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;
- (_Bool)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 orientation:(unsigned int)arg5 options:(id)arg6;
- (void)_performFaceDetection:(id)arg1 image:(id)arg2 orientation:(int)arg3 filter:(id)arg4;
- (id)depthBlurEffectFilterForImageData:(id)arg1 options:(id)arg2;
- (id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2;
- (id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned int)arg4 options:(id)arg5;
- (_Bool)prepareRender:(id)arg1 fromRect:(struct CGRect)arg2 toDestination:(id)arg3 atPoint:(struct CGPoint)arg4 error:(id *)arg5;
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;
- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(_Bool)arg3 forClear:(_Bool)arg4 error:(id *)arg5;
- (id)startTaskToClear:(id)arg1 error:(id *)arg2;

@end
