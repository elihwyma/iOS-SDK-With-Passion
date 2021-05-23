/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, SCNNode, SCNRenderer;

@protocol CFXFaceTrackingRendererDelegate;

@interface CFXFaceTrackingRenderer : NSObject

{
    _Bool _logged_render_failed;
    _Bool _clearGeometryPerFrame;
    _Bool _usingARFaceAnchor;
    id <CFXFaceTrackingRendererDelegate> _delegate;
    NSLock *_renderLock;
    SCNRenderer *_renderer;
    SCNNode *_cameraNode;
    struct __CVMetalTextureCache *_metalTextureCache;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct OpaqueVTImageRotationSession *_rotationSession;
    struct __CVPixelBufferPool *_inputBufferPool;
    SCNNode *_faceAnchorNode;
    SCNNode *_faceRectNode;
    SCNNode *_billboardTransformPlaneNode;
    SCNNode *_transform3DPlaneNode;
    struct CGSize _workingSize;
    struct CGSize _outputSize;
}

@property (retain, nonatomic) NSLock *renderLock;
@property (retain, nonatomic) SCNRenderer *renderer;
@property (retain, nonatomic) SCNNode *cameraNode;
@property (nonatomic) struct __CVMetalTextureCache *metalTextureCache;
@property (nonatomic) struct OpaqueVTPixelTransferSession *transferSession;
@property (nonatomic) struct OpaqueVTImageRotationSession *rotationSession;
@property (nonatomic) struct CGSize workingSize;
@property (nonatomic) struct CGSize outputSize;
@property (nonatomic) struct __CVPixelBufferPool *inputBufferPool;
@property (retain, nonatomic) SCNNode *faceAnchorNode;
@property (retain, nonatomic) SCNNode *faceRectNode;
@property (retain, nonatomic) SCNNode *billboardTransformPlaneNode;
@property (retain, nonatomic) SCNNode *transform3DPlaneNode;
@property (nonatomic) _Bool usingARFaceAnchor;
@property (weak, nonatomic) id <CFXFaceTrackingRendererDelegate> delegate;
@property (nonatomic) _Bool clearGeometryPerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)billboardCompositionScaleForBufferSize:(struct CGSize)arg1;

- (id)init;
- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)setInputBufferSize:(struct CGSize)arg1;
- (struct __CVBuffer *)newPixelBufferRenderedFromARFrame:(id)arg1 withInputs:(id)arg2 renderSize:(struct CGSize)arg3 interfaceOrientation:(long long)arg4 withFaceRectScaleFactor:(struct CGSize)arg5;
- (struct __CVBuffer *)newPixelBufferRenderedWithFaceAnchor:(id)arg1 withInputs:(id)arg2 renderSize:(struct CGSize)arg3;
- (id)renderWithInputs:(id)arg1 time:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3;
- (void)resetCameraTransform;
- (void)setupSCNRenderer;
- (id)CFX_inputsOfTrackingType:(int)arg1 fromInputs:(id)arg2;
- (void)updateSceneForFaceAnchor:(id)arg1 withInputs:(id)arg2;
- (void)renderFrameWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)CFX_ClearGeometry;
- (void)updateFaceTrackedNodesForParentNode:(id)arg1 usingFaceAnchor:(id)arg2 withInputs:(id)arg3;
- (void)CFX_ClearUnusedNodesWithInputs:(id)arg1;
- (id)CFX_billboardNodeWithWidth:(double)arg1 height:(double)arg2;
- (id)CFX_DEBUG_PlaneOutlineNodeWithWidth:(double)arg1 height:(double)arg2 thickness:(double)arg3 color:(id)arg4;
- (id)CFX_pitchYawNodeWithWidth:(double)arg1 height:(double)arg2;
- (struct SCNMatrix4)CFX_translationFromPlaneToPointOnFaceMesh;
- (id)CFX_DEBUG_3DAxesNodeWithWidth:(double)arg1;
- (void)CFX_updateNode:(id)arg1 withImageBuffer:(id)arg2;
- (void)CFX_ClearGeometryOfPlaneNode:(id)arg1;
- (void)CFX_updateWithExplicitTransaction:(CDUnknownBlockType)arg1;
- (void)resetSceneNodes;
- (void)setupInputBufferPoolForSize:(struct CGSize)arg1;
- (struct CGPoint)pointTranslatedToSceneKitForHitTest:(struct CGPoint)arg1;
- (struct CGPoint)normalizedTopLeftFacePlanePointFromNormalizedUIKitPoint:(struct CGPoint)arg1 onFacePlane:(_Bool)arg2;
- (struct SCNVector3)CFX_LocalCoordinatesOfBillboardAtPoint:(struct CGPoint)arg1;
- (struct CGRect)compositionSubRectOfBillboardWithFaceAnchor:(id)arg1 bufferSize:(struct CGSize)arg2;
- (double)relativeScaleBetweenTrackingModesWithFaceAnchor:(id)arg1;
- (void)resetRenderer;

@end
