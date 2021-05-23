/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKCameraController.h>

@class VKTimedAnimation;

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKAnnotationTrackingCameraController : VKCameraController

{
    id <VKTrackableAnnotation> _annotation;
    id <VKTrackableAnnotationPresentation> _annotationPresentation;
    VKTimedAnimation *_currentAnimation;
    Matrix_6e1d3589 _currentAnimationStartPoint;
    Matrix_6e1d3589 _currentAnimationStartCameraPosition;
    Matrix_6e1d3589 _currentAnimationEndPoint;
    Matrix_6e1d3589 _currentAnimationEndCameraPosition;
    double _pendingChangeDuration;
    VKTimedAnimation *_currentHeadingAnimation;
    double _pendingHeadingChangeDuration;
    float _headingAnimationCompletedAngle;
    long long _headingAnimationDisplayRate;
    long long _zoomStyle;
    struct {
        unsigned int hasPendingChange:1;
        unsigned int paused:1;
        unsigned int trackingHeading:1;
        unsigned int hasPendingHeadingChange:1;
        unsigned int isInitialRegionChange:1;
        unsigned int isJumpingToAnnotation:1;
        unsigned int annotationImplementsAccuracy:1;
        unsigned int annotationImplementsHeading:1;
        unsigned int annotationImplementsExpectedCoordinateUpdateInterval:1;
        unsigned int annotationImplementsExpectedHeadingUpdateInterval:1;
    } _flags;
}

@property (nonatomic) long long zoomStyle;
@property (nonatomic) long long headingAnimationDisplayRate;
@property (nonatomic, readonly) id <VKTrackableAnnotation> annotation;
@property (nonatomic, readonly, getter=isTrackingHeading) _Bool trackingHeading;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (_Bool)isAnimating;
- (void)pauseAnimation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
- (void)stopTrackingAnnotation;
- (void)setGesturing:(_Bool)arg1;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;
- (void)resumeAnimation;
- (void)_goToAnnotationAnimated:(_Bool)arg1 duration:(double)arg2 isInitial:(_Bool)arg3;
- (void)_rotateToHeadingAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)updateFramerate;

@end
