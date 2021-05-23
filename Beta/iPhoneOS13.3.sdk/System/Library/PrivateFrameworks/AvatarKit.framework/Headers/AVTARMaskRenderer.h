/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class MTLRenderPassDescriptor, SCNNode;

@protocol MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface AVTARMaskRenderer : NSObject

{
    id <MTLLibrary> _library;
    id <MTLDevice> _device;
    id <MTLTexture> _capturedDepth;
    id <MTLTexture> _lastRawDepthTexture;
    _Bool _writeID;
    id <MTLTexture> _rawMaskTexture[2];
    id <MTLTexture> _tmpMaskBlurTexture;
    id <MTLRenderPipelineState> _dbgCamDepthPipeline;
    id <MTLRenderPipelineState> _maskPipeline;
    id <MTLRenderPipelineState> _blurMaskPipeline[2];
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGSize _renderSize;
    _Bool _debugMode;
    _Bool _flipDepth;
    float _headZ;
    float _smoothDepth;
    long long _orientation;
    SCNNode *_pointOfView;
}

@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) float headZ;
@property (nonatomic) _Bool flipDepth;
@property (nonatomic) long long orientation;
@property (nonatomic) float smoothDepth;
@property (retain) id <MTLTexture> capturedDepth;

+ (id)renderer;

- (id)init;
- (void)render:(id)arg1;
- (void)reloadDepthShaders;
- (void)setup:(struct CGSize)arg1 context:(id)arg2 colorPixelFormat:(unsigned long long)arg3;

@end
