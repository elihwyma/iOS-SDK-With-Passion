/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <SceneKit/SCNView.h>

@class ARFrame, ARPointCloud, ARPresentation, ARPresentationFrame, ARSCNCompositor, ARSession, ARSinglePassRenderer, CIWarpKernel, MISSING_TYPE, NSMutableArray, NSMutableDictionary, NSObject, NSString, SCNNode, SCNScene, UIView;

@protocol ARSCNViewDelegate, OS_dispatch_semaphore, SCNCaptureDeviceOutputConsumer;

@interface ARSCNView : SCNView

{
    ARSession *_session;
    double _lastFrameTimestamp;
    double _lastFrameInterval;
    id <SCNCaptureDeviceOutputConsumer> _captureDeviceOutputConsumer;
    SCNNode *_lightNode;
    SCNNode *_cameraNode;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSMutableDictionary *_occlusionGeometryNodesByAnchorIdentifier;
    NSObject<OS_dispatch_semaphore> *_nodesSemaphore;
    NSMutableArray *_addedAnchors;
    NSMutableArray *_updatedAnchors;
    NSMutableArray *_removedAnchors;
    NSObject<OS_dispatch_semaphore> *_anchorsSemaphore;
    SCNNode *_worldOriginNode;
    SCNNode *_featurePointNode;
    ARPointCloud *_currentlyVisibleDebugPointerCloud;
    id _originalBackgroundContents;
    unsigned long long _arDebugOptions;
    long long _interfaceOrientation;
    long long _lastInterfaceOrientation;
    struct CGSize _viewportSize;
    double _contentsScale;
    UIView *_rotationSnapshot;
    CIWarpKernel *_warpKernel;
    unsigned long long _warpKernelLensType;
    NSMutableArray *_environmentProbeNodes;
    NSMutableArray *_environmentProbeNodesToRemove;
    _Bool _lastRendersMotionBlur;
    _Bool _renderThreadFixed;
    _Bool _attemptRenderSynchronisationARFrame;
    ARSCNCompositor *_compositor;
    struct os_unfair_lock_s _occlusionLock;
    ARPresentation *_presentation;
    ARPresentationFrame *_currentPresentationFrame;
    ARSinglePassRenderer *_arSinglePassRenderer;
    CDStruct_14d5dc5e _currentReferenceTransform;
    _Bool _runningWithSegmentation;
    _Bool _automaticallyOccludesVirtualContent;
    _Bool _automaticallyUpdatesLighting;
    _Bool _rendersCameraGrain;
    _Bool _rendersMotionBlur;
    _Bool _providesOcclusionGeometry;
    _Bool _segmentationUseEstimatedDepthData;
    _Bool _shouldRestrictFrameRate;
    _Bool _drawsCameraImage;
    unsigned long long _occlusionExcludedBitMask;
    long long _compositorAlgorithm;
    long long _targetFramesPerSecond;
    long long _developerPreferredFramesPerSecond;
    long long _frameToRemoveRotationSnapshotOn;
    long long _rotationSnapshotState;
}

@property (nonatomic) _Bool providesOcclusionGeometry;
@property (nonatomic) _Bool segmentationUseEstimatedDepthData;
@property (nonatomic) _Bool automaticallyOccludesVirtualContent;
@property (nonatomic) unsigned long long occlusionExcludedBitMask;
@property (nonatomic) long long compositorAlgorithm;
@property (nonatomic) _Bool runningWithSegmentation;
@property _Bool shouldRestrictFrameRate;
@property long long targetFramesPerSecond;
@property long long developerPreferredFramesPerSecond;
@property _Bool drawsCameraImage;
@property long long frameToRemoveRotationSnapshotOn;
@property long long rotationSnapshotState;
@property (nonatomic) long long actualPreferredFramesPerSecond;
@property (nonatomic, readonly) ARFrame *currentRenderFrame;
@property (weak, nonatomic) id <ARSCNViewDelegate> delegate;
@property (retain, nonatomic) ARSession *session;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) _Bool automaticallyUpdatesLighting;
@property (nonatomic) _Bool rendersCameraGrain;
@property (nonatomic) _Bool rendersMotionBlur;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowDidRotateNotification:(id)arg1;
- (void)cleanupLingeringRotationState;
- (long long)preferredFramesPerSecond;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateAnchors:(id)arg2;
- (void)session:(id)arg1 didRemoveAnchors:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)sceneRenderer;
- (unsigned long long)debugOptions;
- (void)setDebugOptions:(unsigned long long)arg1;
- (void)setPointOfView:(id)arg1;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_drawAtTime:(double)arg1;
- (void)_updateBackingSize;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)sessionShouldAttemptRelocalization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 willRunWithConfiguration:(id)arg2;
- (id)anchorForNode:(id)arg1;
- (id)nodeForAnchor:(id)arg1;
- (id)raycastQueryFromPoint:(struct CGPoint)arg1 allowingTarget:(long long)arg2 alignment:(long long)arg3;
- (void)_updateCamera:(id)arg1;
- (void)_forceUpdateCamera;
- (void)setupCompositor;
- (void)_updateOcclusionCompositor;
- (void)_addOcclusionGeometryForAnchor:(id)arg1;
- (id)_hitTest:(struct CGPoint)arg1 frame:(id)arg2 types:(unsigned long long)arg3;
- (void)_updatePreferredFramesPerSecond;
- (_Bool)drawsCameraImageAndNilPresentation;
- (struct __CVBuffer *)_warpPixelBuffer:(struct __CVBuffer *)arg1 withCamera:(id)arg2;
- (void)_renderCapturedPixelBuffer:(struct __CVBuffer *)arg1;
- (void)_updateProbesWithFrame:(id)arg1;
- (void)_updateLighting:(id)arg1;
- (void)_removeAnchors:(id)arg1;
- (void)_addAnchors:(id)arg1;
- (void)_updateAnchors:(id)arg1 frame:(id)arg2;
- (void)_updateDebugVisualization:(id)arg1;
- (void)_updateFramesPerSecondWithTarget:(long long)arg1 shouldRestrictFrameRate:(_Bool)arg2;
- (void)_updateNode:(id)arg1 forAnchor:(id)arg2 frame:(id)arg3;
- (id)compositor;
- (void)_loadWarpKernalForLensType:(unsigned long long)arg1;
- (void)presentationIsReadyForNextRender:(id)arg1;
- (void)setAutomaticallyOccludesUsingSegmentation:(_Bool)arg1;
- (_Bool)automaticallyOccludesUsingSegmentation;
- (id)occlusionGeometryNodeForAnchor:(id)arg1;
- (MISSING_TYPE *)unprojectPoint:(struct CGPoint)arg1 ontoPlaneWithTransform:(CDStruct_14d5dc5e)arg2;

@end
