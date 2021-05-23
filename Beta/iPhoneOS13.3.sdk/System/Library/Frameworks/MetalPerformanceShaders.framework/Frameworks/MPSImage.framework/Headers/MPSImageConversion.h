/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSImage/MPSUnaryImageKernel.h>

@class MISSING_TYPE, MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel

{
    MPSImageTransformSequence *transform;
    MISSING_TYPE *srcDecode[2];
    MISSING_TYPE *destDecode[2];
    struct ConversionInfo_s convertInfo;
    struct ConversionInfoPtrs_s convertInfoPtrs;
    CDUnknownFunctionPointerType matFun;
    CDUnknownFunctionPointerType trcFun;
    CDUnknownFunctionPointerType lutFun;
    CDUnknownFunctionPointerType optionsFun;
    unsigned long long sourceAlpha;
    unsigned long long destinationAlpha;
}

@property (nonatomic, readonly) unsigned long long sourceAlpha;
@property (nonatomic, readonly) unsigned long long destinationAlpha;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 srcAlpha:(unsigned long long)arg2 destAlpha:(unsigned long long)arg3 backgroundColor:(double *)arg4 conversionInfo:(const struct CGColorConversionInfo *)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 transform:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float *)arg3 destinationTexture:(id)arg4 destinationDecode:(const float *)arg5;

@end
