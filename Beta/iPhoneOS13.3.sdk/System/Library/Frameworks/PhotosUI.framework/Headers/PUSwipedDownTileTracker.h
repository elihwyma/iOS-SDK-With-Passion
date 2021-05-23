/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUInteractiveTileTracker.h>

@class PHSwipeDownTracker, PUTileController, PUTileLayoutInfo, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUSwipedDownTileTracker : PUInteractiveTileTracker

{
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUTileController *_designatedTileController;
    PHSwipeDownTracker *__swipeDownTracker;
    PUTileLayoutInfo *__trackedTileLayoutInfo;
}

@property (retain, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker;
@property (retain, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) PUTileController *designatedTileController;

- (id)initWithTilingView:(id)arg1;
- (void)updateGestureRecognizerTracking;
- (void)startTileControllerTracking;
- (void)updateTileControllerTracking;
- (void)completeTracking;
- (id)tileControllerToTrack;
- (id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2;

@end
