/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PUTileController, PUTileHider, PUTilingView;

@protocol PUInteractiveTileTrackerDelegate;

__attribute__((visibility("hidden")))
@interface PUInteractiveTileTracker : NSObject

{
    struct {
        _Bool respondsToWillStartTrackingTileController;
        _Bool respondsToDidStopTrackingTileController;
    } _delegateFlags;
    _Bool _shouldEnd;
    _Bool _shouldFinish;
    PUTilingView *_tilingView;
    id <PUInteractiveTileTrackerDelegate> _delegate;
    double _progress;
    long long __state;
    PUTileHider *__tileHider;
    PUTileController *_trackedTileController;
    struct PUDisplayVelocity _currentVelocity;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic, setter=_setTileHider:) PUTileHider *_tileHider;
@property (nonatomic) double progress;
@property (nonatomic) _Bool shouldEnd;
@property (nonatomic) _Bool shouldFinish;
@property (nonatomic) struct PUDisplayVelocity currentVelocity;
@property (nonatomic, readonly) PUTileController *trackedTileController;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (weak, nonatomic) id <PUInteractiveTileTrackerDelegate> delegate;

- (id)init;
- (void)update;
- (id)initWithTilingView:(id)arg1;
- (void)updateGestureRecognizerTracking;
- (void)startTileControllerTracking;
- (void)updateTileControllerTracking;
- (void)stopTileControllerTracking;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)arg1;
- (id)tileControllerToTrack;
- (void)_updateTrackedTileController;
- (void)_setTrackedTileController:(id)arg1;

@end
