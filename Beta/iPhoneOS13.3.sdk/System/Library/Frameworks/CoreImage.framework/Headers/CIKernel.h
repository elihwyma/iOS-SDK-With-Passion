/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CIKernel : NSObject

{
    void *_priv;
}

@property (nonatomic) _Bool perservesAlpha;
@property (nonatomic) _Bool canReduceOutputChannels;
@property (nonatomic) _Bool preservesRange;
@property (nonatomic) struct CGSize outputGroupSize;
@property (readonly) NSString *name;

+ (id)kernelWithString:(id)arg1;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 outputPixelFormat:(int)arg2 error:(id *)arg3;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 error:(id *)arg2;
+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)allocForType:(int)arg1;
+ (id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id *)arg3;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(struct CGSize)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id *)arg4;
+ (id)colorMatrixBiasKernel;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 error:(id *)arg3;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)initWithString:(id)arg1;
- (id)parameters;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (void *)_internalRepresentation;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (SEL)ROISelector;
- (id)_initWithReflection:(struct CIKernelReflection)arg1;
- (id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(_Bool)arg3;
- (id)_initWithReflection:(struct CIKernelReflection)arg1 constants:(id)arg2;
- (id)_initWithString:(id)arg1 usingCruftCompatibility:(_Bool)arg2;
- (_Bool)_isValidOutputPixelFormat:(int)arg1;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel *)arg2;
- (void)setROISelector:(SEL)arg1;

@end
