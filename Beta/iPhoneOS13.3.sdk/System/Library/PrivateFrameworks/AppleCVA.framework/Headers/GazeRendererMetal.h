/*
 Image: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
 */

#import <AppleCVA/GazeRendererBase.h>

@class GazeMesh, NSDictionary;

@protocol MTLBuffer, MTLComputePipelineState, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface GazeRendererMetal : GazeRendererBase

{
    id <MTLDevice> _device;
    id <MTLRenderPipelineState> _gazePipelineState;
    id <MTLComputePipelineState> _gazeLandmarksState;
    id <MTLDepthStencilState> _gazeDepthStencilState;
    id <MTLDepthStencilState> _gazeWFDepthStencilState;
    id <MTLRenderPipelineState> _imagePipelineState;
    id <MTLBuffer> _triangleIndexBuffer;
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _gazeUniformBuffer;
    id <MTLBuffer> _vertexWeightsEyesBuffer;
    id <MTLBuffer> _vertexWeightsFaceBuffer;
    id <MTLBuffer> _eyeOffsetsBuffer;
    id <MTLBuffer> _landmarkWeightsBuffer;
    id <MTLBuffer> _landmarkIdsBuffer;
    id <MTLBuffer> _landmarkPositionsBuffer;
    id <MTLBuffer> _imagePlaneVertexBuffer;
    id <MTLTexture> _depthTexture;
    id <MTLBuffer> _renderModeAuxBuffer;
    quad_mesh_a92d3cab _qmesh;
    GazeMesh *_gazeMesh;
    _Bool _landmarkPositionOutputEnabled;
    float _toMMExtrinsicsMultiplier;
    long long _renderMode;
    NSDictionary *_landmarkPositions;
    unsigned long long _outputPixelFormat;
}

@property float toMMExtrinsicsMultiplier;
@property _Bool landmarkPositionOutputEnabled;
@property (nonatomic) long long renderMode;
@property (readonly) NSDictionary *landmarkPositions;
@property (readonly) unsigned long long outputPixelFormat;

- (void)dealloc;
- (id).cxx_construct;
- (void)resetToDefaults;
- (void)storeSettings;
- (_Bool)renderToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 virtualCameraPosition:(_Bool)arg5 correctionEnabled:(id *)arg6 error: /* Error: Ran out of types for this method. */;
- (id)initWithDevice:(id)arg1 PixelFormat:(unsigned long long)arg2;
- (void)resetToStored;
- (void)initBuffers;
- (_Bool)updateFaceMeshWithfaceKitData:(id)arg1 screenProjectionMatrix:(CDStruct_14d5dc5e)arg2 inputImageSize:(CDStruct_1ef3fb1f)arg3 outputImageSize:(CDStruct_1ef3fb1f)arg4 inputIntrinsics:(CDStruct_d80e62f2)arg5 outputIntrinsics:(CDStruct_d80e62f2)arg6 extrinsics:(CDStruct_14d5dc5e)arg7 correctionEnabled:(_Bool)arg8 groundTruthMode:(_Bool)arg9;
- (_Bool)renderToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 virtualCameraPosition:(_Bool)arg5 correctionEnabled:(CDStruct_d80e62f2)arg6 screenTransformationMatrix:(id *)arg7 error: /* Error: Ran out of types for this method. */;
- (_Bool)renderGroundTruthToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 faceKitData:(id)arg4 outputIntrinsics:(CDStruct_d80e62f2)arg5 extrinsics:(CDStruct_14d5dc5e)arg6 correctionEnabled:(_Bool)arg7 error:(id *)arg8;
- (void)updateDepthTexture:(CDStruct_1ef3fb1f)arg1;
- (_Bool)drawLandmarksWithCommandBuffer:(id)arg1 imageSize:(CDStruct_1ef3fb1f)arg2;
- (void)drawImageWithCommandEncoder:(id)arg1 sourceTexture:(id)arg2 transformation:(CDStruct_d80e62f2)arg3;
- (void)drawMeshWithCommandEncoder:(id)arg1 sourceTexture:(id)arg2;

@end
