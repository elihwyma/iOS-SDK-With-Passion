/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSTimer, SCNNode;

@protocol SCNCameraControllerDelegate;

@interface SCNCameraController : NSObject

{
    struct {
        CDStruct_14d5dc5e angles__initialAbsoluteAngles__initialTransformWorld;
        CDStruct_0e8a9a91 initialOrientationWorld;
    } _orientationState;
    struct {
        MISSING_TYPE *start__current__last;
    } _inputLocation;
    struct {
        MISSING_TYPE *localArcballAdjustement__sphereLocationStart__sphereLocationCurrent;
    } _arcball;
    struct {
        _Bool inertiaEnabled;
        _Bool inertiaRunning;
        double lastSimulationTime;
        float friction;
        float rotationSensitivity;
        float translationSensitivity;
        NSTimer *velocity__timer;
    } _inertia;
    MISSING_TYPE *_up;
    MISSING_TYPE *_target;
    MISSING_TYPE *_minimumAngles;
    MISSING_TYPE *_maximumAngles;
    _Bool _handlingInteraction;
    _Bool _drivenBydefaultNavigationCameraController;
    _Bool _automaticTarget;
    id <SCNCameraControllerDelegate> _delegate;
    SCNNode *_pointOfView;
    long long _interactionMode;
}

@property (nonatomic) _Bool drivenByDefaultNavigationCameraController;
@property (nonatomic) MISSING_TYPE *simdUp;
@property (nonatomic) MISSING_TYPE *simdTarget;
@property (nonatomic) struct SCNVector3 up;
@property (nonatomic) float verticalMaximumAngle;
@property (nonatomic) float horizontalMaximumAngle;
@property (nonatomic) id <SCNCameraControllerDelegate> delegate;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) long long interactionMode;
@property (nonatomic) struct SCNVector3 target;
@property (nonatomic) _Bool automaticTarget;
@property (nonatomic) struct SCNVector3 worldUp;
@property (nonatomic) _Bool inertiaEnabled;
@property (nonatomic) float inertiaFriction;
@property (nonatomic, readonly, getter=isInertiaRunning) _Bool inertiaRunning;
@property (nonatomic) float minimumVerticalAngle;
@property (nonatomic) float maximumVerticalAngle;
@property (nonatomic) float minimumHorizontalAngle;
@property (nonatomic) float maximumHorizontalAngle;

- (id)init;
- (void)dealloc;
- (void)_endDraggingWithVelocity:(struct CGPoint)arg1;
- (void)_setInertiaRunning:(_Bool)arg1;
- (void)setPointOfView:(id)arg1 updateUpTransform:(_Bool)arg2;
- (void)_translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)_resetOrientationState;
- (void)_rotateByX:(float)arg1 Y:(float)arg2;
- (MISSING_TYPE *)_directionForScreenPoint:(struct CGPoint)arg1 viewport:(struct CGSize)arg2;
- (_Bool)useOrbitInteractionMode;
- (CDStruct_183601bc)unrolledWorldOrientation:(out float *)arg1;
- (MISSING_TYPE *)_mapToSphere:(struct CGPoint)arg1 inViewport:(struct CGSize)arg2;
- (void)rotateByX:(float)arg1 Y:(float)arg2;
- (void)_updateArcballOrientation;
- (void)_updateRotation;
- (void)_capOrientationAnglesToMaximum;
- (CDStruct_183601bc)_orientationForMode;
- (CDStruct_183601bc)_convertRotationFromWorldToPointOfView:(CDStruct_183601bc)arg1;
- (void)_updateInertiaAtTime:(double)arg1;
- (void)translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)translateInScreenSpaceTo:(struct CGPoint)arg1 viewport:(struct CGSize)arg2;
- (void)rollCameraSpaceBy:(float)arg1 withPoint:(struct CGPoint)arg2 viewport:(struct CGSize)arg3;
- (void)rollAroundTarget:(float)arg1;
- (void)dollyToTarget:(float)arg1;
- (void)clearRoll;
- (void)stopInertia;
- (void)frameNodes:(id)arg1;
- (CDStruct_14d5dc5e)lookAtWith:target: /* Error: Ran out of types for this method. */;
- (void)beginInteraction:(struct CGPoint)arg1 withViewport:(struct CGSize)arg2;
- (void)continueInteraction:(struct CGPoint)arg1 withViewport:(struct CGSize)arg2 sensitivity:(double)arg3;
- (void)endInteraction:(struct CGPoint)arg1 withViewport:(struct CGSize)arg2 velocity:(struct CGPoint)arg3;
- (void)rollBy:(float)arg1 aroundScreenPoint:(struct CGPoint)arg2 viewport:(struct CGSize)arg3;
- (void)dollyBy:(float)arg1 onScreenPoint:(struct CGPoint)arg2 viewport:(struct CGSize)arg3;
- (MISSING_TYPE *)_targetRelativeToPointOfViewParent;
- (_Bool)_isLocationValid:(struct CGPoint)arg1 inViewport:(struct CGSize)arg2;
- (MISSING_TYPE *)_orthographicViewSpaceTranslationForZoomAtScreenPoint:(float)arg1 scaleDelta:(struct CGSize)arg2 viewport: /* Error: Ran out of types for this method. */;
- (void)updateInertiaAtTime:(double)arg1;

@end
