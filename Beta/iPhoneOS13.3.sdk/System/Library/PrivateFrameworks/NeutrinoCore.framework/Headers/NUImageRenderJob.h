/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class CIRenderTask, NUImageAccumulationNode, NUPurgeableImageAccessGuard, NUPurgeableStoragePool, NURegion;

@protocol NUMutablePurgeableImage, NUPurgeableImage, NUPurgeableStorage;

@interface NUImageRenderJob : NURenderJob

{
    NUPurgeableImageAccessGuard *_accessRegionGuard;
    NUPurgeableStoragePool *_storagePool;
    id <NUPurgeableStorage> _renderDestination;
    NURegion *_regionToRender;
    id <NUMutablePurgeableImage> _targetImage;
    NURegion *_renderedRegion;
    id <NUPurgeableImage> _renderedImage;
    CIRenderTask *_renderTask;
}

@property (nonatomic, readonly) NURegion *regionToRender;
@property (nonatomic, readonly) id <NUMutablePurgeableImage> targetImage;
@property (nonatomic, readonly) NURegion *renderedRegion;
@property (nonatomic, readonly) id <NUPurgeableImage> renderedImage;
@property (nonatomic, readonly) NUImageAccumulationNode *imageAccumulationNode;
@property (retain, nonatomic) CIRenderTask *renderTask;

- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)complete:(out id *)arg1;
- (id)imageRequest;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithImageRequest:(id)arg1;
- (id)imageAccumulationNodeWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3 format:(id)arg4 colorSpace:(id)arg5;
- (id)extentPolicy;
- (_Bool)copyStorage:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toImage:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;

@end
