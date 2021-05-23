/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@interface MPSBinaryImageKernel : MPSKernel

{
    CDStruct_1e3be3a8 _clipRect;
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    void *_encodeData;
    const CDStruct_14f26992 *_preferredTileSize;
}

@property (nonatomic) CDStruct_d6af7fc0 primaryOffset;
@property (nonatomic) CDStruct_d6af7fc0 secondaryOffset;
@property (nonatomic) unsigned long long primaryEdgeMode;
@property (nonatomic) unsigned long long secondaryEdgeMode;
@property (nonatomic) CDStruct_1e3be3a8 clipRect;

- (id)init;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (_Bool)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 inPlaceSecondaryTexture:(id *)arg3 fallbackCopyAllocator:(CDUnknownBlockType)arg4;
- (_Bool)encodeToCommandBuffer:(id)arg1 inPlacePrimaryTexture:(id *)arg2 secondaryTexture:(id)arg3 fallbackCopyAllocator:(CDUnknownBlockType)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4;
- (struct MPSRegion)primarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (struct MPSRegion)secondarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;

@end
