/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNEventHandler.h>

@class MISSING_TYPE, SCNNode, UIGestureRecognizer;

@interface SCNCameraControlEventHandler : SCNEventHandler

{
    SCNNode *_freeViewCameraNode;
    struct CGPoint _initialPoint;
    union C3DMatrix4x4 _initialMatrix;
    float _initialZoom;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    MISSING_TYPE *_clickOrigin;
    int _lastGestureFingerCount;
    _Bool _isDraggingWithOneFinger;
    float _roll;
    union C3DMatrix4x4 _initialMatrixForRoll;
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    unsigned long long _stickyAxis;
    struct C3DSphere _viewedObjectSphere;
    unsigned int _isViewedObjectSphereComputed:1;
    struct os_unfair_lock_s _stateLock;
    unsigned int _enabled:1;
    unsigned int _hasAutomaticCameraTarget:1;
    unsigned int _automaticCameraTargetUpToDate:1;
    unsigned int _inertia:1;
    unsigned int _didEverFocusNode:1;
    unsigned int _allowsTranslation:1;
    unsigned int _pinchShouldMoveCamera:1;
    unsigned int _alternateMode:1;
    unsigned int _upDirIsSet:1;
    unsigned int _gimbalLockMode:1;
    unsigned int _inertiaRunning:1;
    long long _browseMode;
    MISSING_TYPE *_upDir;
    struct SCNVector3 _cameraTarget;
    struct SCNVector3 _autoCameraTarget;
    float _browseScaleFactor;
    double _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

@property _Bool gimbalLockMode;
@property struct SCNVector3 gimbalLockVector;
@property unsigned long long stickyAxis;
@property _Bool enableInertia;
@property double friction;
@property _Bool allowsTranslation;
@property _Bool automaticCameraTarget;
@property struct SCNVector3 cameraTarget;

+ (MISSING_TYPE *)frontVectorWithPointOfView:(id)arg1;
+ (struct SCNMatrix4)matrixWithNoRoll:(struct SCNMatrix4)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)enabled;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (void)_handlePan:(id)arg1;
- (double)zoomFactor;
- (void)_handlePinch:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)_setInertiaRunning:(_Bool)arg1;
- (void)clearRoll;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (_Bool)wantsRedraw;
- (void)setEnableFreeCamera:(_Bool)arg1;
- (id)freeCamera;
- (void)activateFreeCamera;
- (void)invalidateCameraTarget;
- (void)_switchToFreeViewCamera;
- (MISSING_TYPE *)frontVector;
- (double)_browseScale;
- (void)_resetFreeViewCamera;
- (void)_prepareFreeViewCamera;
- (struct C3DSphere)viewedObjectSphere;
- (void)updateBrowseScaleFactor;
- (_Bool)_freeCameraActivated;
- (void)_installFreeViewCameraIfNeeded;
- (void)computeAutomaticTargetPoint;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (void)zoomBy:(float)arg1 animate:(_Bool)arg2;
- (float)_translationCoef;
- (void)focusNode:(id)arg1;
- (void)_resetBrowseScaleFactor;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(long long)arg2 stickyAxis:(unsigned long long)arg3;
- (_Bool)_isInertiaRunning;
- (void)_onInertiaTimer;
- (_Bool)_3DConnexionIsPressed;
- (_Bool)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_handlePress:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)rotateOf:(double)arg1;
- (void)zoomBy:(float)arg1;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)rotateWithVector:(long long)arg1 mode: /* Error: Ran out of types for this method. */;

@end
