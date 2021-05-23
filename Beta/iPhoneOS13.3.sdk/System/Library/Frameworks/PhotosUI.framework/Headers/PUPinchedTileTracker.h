/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PUChangeDirectionValueFilter, PUPinchTracker, PUTileLayoutInfo, PUVelocityFilter, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUPinchedTileTracker : PUInteractiveTileTracker

{
    struct {
        _Bool respondsToInitialAspectRatioForTileWithLayoutInfo;
        _Bool respondsToFinalLayoutInfoForTileWithLayoutInfo;
    } _delegateFlags;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long _direction;
    PUChangeDirectionValueFilter *__pinchGestureRecognizerScaleDirectionValueFilter;
    PUPinchTracker *__pinchTracker;
    double __pinchProgress;
    PUTileLayoutInfo *__initialLayoutInfo;
    PUTileLayoutInfo *__targetLayoutInfo;
    PUVelocityFilter *__horizontalVelocityFilter;
    PUVelocityFilter *__verticalVelocityFilter;
    PUVelocityFilter *__angularVelocityFilter;
}

@property (retain, nonatomic, setter=_setPinchGestureRecognizerScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter;
@property (retain, nonatomic, setter=_setPinchTracker:) PUPinchTracker *_pinchTracker;
@property (nonatomic, setter=_setPinchProgress:) double _pinchProgress;
@property (retain, nonatomic, setter=_setInitialLayoutInfo:) PUTileLayoutInfo *_initialLayoutInfo;
@property (retain, nonatomic, setter=_setTargetLayoutInfo:) PUTileLayoutInfo *_targetLayoutInfo;
@property (retain, nonatomic, setter=_setHorizontalVelocityFilter:) PUVelocityFilter *_horizontalVelocityFilter;
@property (retain, nonatomic, setter=_setVerticalVelocityFilter:) PUVelocityFilter *_verticalVelocityFilter;
@property (retain, nonatomic, setter=_setAngularVelocityFilter:) PUVelocityFilter *_angularVelocityFilter;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) long long direction;

- (void)setDelegate:(id)arg1;
- (id)initWithTilingView:(id)arg1;
- (void)updateGestureRecognizerTracking;
- (void)startTileControllerTracking;
- (void)updateTileControllerTracking;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (id)tileControllerToTrack;
- (id)initWithPinchGestureRecognizer:(id)arg1 tilingView:(id)arg2 direction:(long long)arg3;
- (void)_updateTargetLayoutInfoIfNeeded;

@end
