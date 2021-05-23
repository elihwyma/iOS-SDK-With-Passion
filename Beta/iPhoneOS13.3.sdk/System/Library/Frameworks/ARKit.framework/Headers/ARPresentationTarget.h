/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MTLRenderPassDescriptor;

@protocol MTLTexture;

@interface ARPresentationTarget : NSObject

{
    long long _eyeLocation;
    id <MTLTexture> _colorTexture;
    id <MTLTexture> _depthTexture;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    double _warpCameraMatrixTimestamp;
    double _warpCameraMatrixEndTimestamp;
    CDStruct_4b2885c7 _viewport;
    CDStruct_14d5dc5e _eyeTransform;
    CDStruct_14d5dc5e _projectionMatrix;
    CDStruct_14d5dc5e _viewMatrix;
    CDStruct_14d5dc5e _warpCameraMatrix;
    CDStruct_14d5dc5e _warpCameraMatrixEnd;
}

@property (nonatomic) CDStruct_14d5dc5e eyeTransform;
@property (retain, nonatomic) id <MTLTexture> colorTexture;
@property (retain, nonatomic) id <MTLTexture> depthTexture;
@property (nonatomic) CDStruct_4b2885c7 viewport;
@property (nonatomic) CDStruct_14d5dc5e projectionMatrix;
@property (nonatomic) CDStruct_14d5dc5e viewMatrix;
@property (nonatomic) CDStruct_14d5dc5e warpCameraMatrix;
@property (nonatomic) double warpCameraMatrixTimestamp;
@property (nonatomic) CDStruct_14d5dc5e warpCameraMatrixEnd;
@property (nonatomic) double warpCameraMatrixEndTimestamp;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (nonatomic, readonly) long long eyeLocation;

- (id)description;
- (id)initWithEyeLocation:(long long)arg1 colorTexture:(id)arg2 depthTexture:(id)arg3;
- (CDStruct_14d5dc5e)_forwardNewMatrix:(CDStruct_14d5dc5e)arg1;
- (CDStruct_14d5dc5e)_inverseOldMatrix:(CDStruct_14d5dc5e)arg1;
- (CDStruct_14d5dc5e)_warpMatrixFromOldToNew:(CDStruct_14d5dc5e)arg1 oldEyeTransform:(CDStruct_14d5dc5e)arg2;
- (id)viewportDescription:(CDStruct_4b2885c7)arg1 debugName:(id)arg2;
- (void)positionalWarpTransforms:(CDStruct_14d5dc5e)arg1 warpStart:(CDStruct_14d5dc5e *)arg2 warpEnd:(CDStruct_14d5dc5e *)arg3 warpStartForward:(CDStruct_14d5dc5e *)arg4 warpStartInverse:(CDStruct_14d5dc5e *)arg5;
- (void)positionalWarpTransforms:(CDStruct_14d5dc5e)arg1 warpStart:(CDStruct_14d5dc5e *)arg2 warpEnd:(CDStruct_14d5dc5e *)arg3;
- (void)positionalWarpTransforms:(CDStruct_14d5dc5e)arg1 warpStartInverse:(CDStruct_14d5dc5e *)arg2 warpEndInverse:(CDStruct_14d5dc5e *)arg3;
- (void)rotationalWarpTransforms:(CDStruct_14d5dc5e)arg1 warpStart:(CDStruct_14d5dc5e *)arg2 warpEnd:(CDStruct_14d5dc5e *)arg3;

@end
