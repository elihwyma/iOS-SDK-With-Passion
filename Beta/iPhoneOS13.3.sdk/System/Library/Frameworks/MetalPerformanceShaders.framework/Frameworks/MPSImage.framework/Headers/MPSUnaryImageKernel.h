/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel

{
    CDStruct_d6af7fc0 _offset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _edgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    CDUnknownFunctionPointerType _getPreferredTileSize;
}

@property (nonatomic) CDStruct_d6af7fc0 offset;
@property (nonatomic) CDStruct_1e3be3a8 clipRect;
@property (nonatomic) unsigned long long edgeMode;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (_Bool)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id *)arg2 fallbackCopyAllocator:(CDUnknownBlockType)arg3;

@end
