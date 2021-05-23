/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString, SCNCameraController, SCNNode, SCNView, UIGestureRecognizer;

@protocol SCNCameraNavigationControllerDelegate;

@interface SCNCameraNavigationController : NSObject

{
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    _Bool _isDraggingWithOneFinger;
    long long _lastGestureFingerCount;
    long long _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    _Bool _enabled;
    _Bool _translationAllowed;
    _Bool _didEverFocusNode;
    _Bool _isSceneBoundingSphereComputed;
    _Bool _cameraTargetComputed;
    _Bool _pinchShouldMoveCamera;
    _Bool _shouldUpdateTarget;
    _Bool _shouldIgnoreMomentumEvents;
    _Bool _isOrbiting;
    _Bool _recordingPointOfViewEvents;
    _Bool _mouseDown;
    CDUnion_915c2b1f _sceneBoundingSphere;
    MISSING_TYPE *_translationOrigin;
    float _initialZoom;
    MISSING_TYPE *_initialPointOfViewWorldPosition;
    double _lastKeyInputTime;
    double _flyModeVelocity;
    double _panSensitivity;
    double _truckSensitivity;
    double _rotationSensitivity;
    struct CGPoint _initialInputLocation;
    struct CGPoint _lastInputLocation;
    struct CGPoint _accumulatedDrag;
    double _lastRotationAngle;
    struct os_unfair_lock_s _drawAtTimeLock;
    struct {
        _Bool stickyMoveEnabled;
        unsigned long long direction__pickedAxis;
        unsigned long long userStickyAxis;
    } _stickyAxis;
    struct {
        _Bool automaticLocationUpToDate;
        _Bool hasAutomatic;
    } _target;
    struct {
        struct CGPoint lastDragLocation;
        struct CGPoint velocity;
        double lastDragTime;
    } _inertia;
    struct {
        struct os_unfair_lock_s lock;
        NSDictionary *keyCodeConfiguration;
        struct set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short>> keyDown;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> forward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> backward;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> left;
        struct vector<unsigned short, std::__1::allocator<unsigned short>> right;
    } _keyboard;
    struct {
        _Bool hasShift;
        _Bool hasOption;
    } _scrollWheelModifiers;
    _Bool _enableFreeCamera;
    _Bool _autoSwitchToFreeCamera;
    SCNCameraController *_cameraController;
    id <SCNCameraNavigationControllerDelegate> _delegate;
    SCNView *_view;
    SCNNode *_freeViewCameraNode;
}

@property (nonatomic, readonly) SCNCameraController *cameraController;
@property (nonatomic) id <SCNCameraNavigationControllerDelegate> delegate;
@property (nonatomic) unsigned long long stickyAxis;
@property (nonatomic) struct SCNVector3 cameraTarget;
@property (nonatomic) _Bool gimbalLockMode;
@property (nonatomic) _Bool enableInertia;
@property (nonatomic) double friction;
@property (nonatomic) _Bool automaticCameraTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool autoSwitchToFreeCamera;
@property (nonatomic) _Bool allowsTranslation;
@property (nonatomic) double flyModeVelocity;
@property (nonatomic) double panSensitivity;
@property (nonatomic) double truckSensitivity;
@property (nonatomic) double rotationSensitivity;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool enableFreeCamera;
@property (nonatomic, readonly) SCNNode *freeCamera;
@property (nonatomic) SCNView *view;

- (void)dealloc;
- (id).cxx_construct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithView:(id)arg1;
- (void)_handlePan:(id)arg1;
- (double)zoomFactor;
- (void)_handlePinch:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (float)_targetDistance;
- (id)pointOfView;
- (void)cameraInertiaWillStartForController:(id)arg1;
- (void)cameraInertiaDidEndForController:(id)arg1;
- (MISSING_TYPE *)worldFront;
- (void)sceneWillChange;
- (void)sceneDidChange;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (_Bool)wantsRedraw;
- (void)activateFreeCamera;
- (void)invalidateCameraTarget;
- (void)_switchToFreeViewCamera;
- (void)_resetFreeViewCamera;
- (void)_prepareFreeViewCamera;
- (_Bool)_freeCameraActivated;
- (void)_installFreeViewCameraIfNeeded;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (void)zoomBy:(float)arg1 animate:(_Bool)arg2;
- (float)_translationCoef;
- (void)focusNode:(id)arg1;
- (void)_handlePress:(id)arg1;
- (void)_handleRotation:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)beginGesture:(id)arg1;
- (void)pinchWithGestureRecognizer:(id)arg1;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)rotateWithGestureRecognizer:(id)arg1;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (struct SCNVector3)gimbalLockVector;
- (void)setGimbalLockVector:(struct SCNVector3)arg1;
- (void)rotateOf:(double)arg1;
- (void)zoomBy:(float)arg1;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)_computeAutomaticTargetPointIfNeeded;
- (void)focusNodes:(id)arg1;
- (_Bool)_pointOfViewUsesOrthographicProjection;
- (float)_pointOfViewOrthographicScale;
- (float)_orthographicScaleForZoomFactor:(float)arg1;
- (CDUnion_915c2b1f)_sceneBoundingSphere;
- (float)_orthographicZoomFactorForProposedZoomFactor:(float)arg1;
- (void)_setPointOfViewOrthographicScale:(float)arg1;
- (float)_cappedTranslationDelta:(float)arg1;
- (void)__didChangePointOfView;
- (MISSING_TYPE *)_defaultTargetForScene:(id)arg1;
- (void)_stopInertia;
- (void)_setupUpVector;
- (void)_willBeginInteraction;
- (void)_computeTranslationOrigin3DFromPoint:(struct CGPoint)arg1;
- (void)__willChangePointOfView;
- (double)_modeSensitivity;
- (void)_translateToViewPoint:(struct CGPoint)arg1;
- (unsigned long long)_effectiveStickyAxis;
- (_Bool)_computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;

@end
