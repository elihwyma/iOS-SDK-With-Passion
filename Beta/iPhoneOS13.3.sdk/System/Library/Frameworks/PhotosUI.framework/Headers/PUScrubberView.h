/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSString, PUBrowsingSession, PUScrubberTilingLayout, PUTilingView, PUTouchingGestureRecognizer, PXVideoScrubberController, UIScrollView, UITapGestureRecognizer;

@protocol PUScrubberViewDelegate;

__attribute__((visibility("hidden")))
@interface PUScrubberView : UIView <Swift>

{
    NSString *_scrubbingIdentifier;
    NSString *_contentScrubbingIdentifier;
    NSString *_transitionLayoutIdentifier;
    _Bool _loupeEffectIsValid;
    _Bool _snapToExpandedIsValid;
    _Bool _scrubberLayoutIsValid;
    _Bool _scrubberLayoutNeedsTransition;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    NSMutableDictionary *_aspectRatioByIndexPath;
    struct {
        _Bool respondsToShouldIgnoreHitTestWithEvent;
    } _delegateFlags;
    _Bool _isForPreview;
    _Bool __isHandlingUserScroll;
    _Bool __isScrubbingAwayFromContentEdge;
    _Bool __scrollViewSettled;
    _Bool __useLoupe;
    _Bool __thinLoupe;
    _Bool __useSmoothingTransitionCoordinator;
    _Bool __snapToExpandedItem;
    _Bool __isHandlingScrollViewWillEndDragging;
    _Bool _currentDragBeganOnContent;
    PUBrowsingSession *_browsingSession;
    long long _type;
    id <PUScrubberViewDelegate> _delegate;
    PUScrubberTilingLayout *__scrubberLayout;
    PUTilingView *__tilingView;
    UITapGestureRecognizer *__tapGestureRecognizer;
    PXVideoScrubberController *__videoScrubberController;
    long long __expandedItemType;
    NSIndexPath *__decelerationTargetIndexPath;
    double __decelerationDistance;
    long long __layoutTransitionsDisabledCount;
    double __scrubbingTransitionProgress;
    struct CGPoint __decelerationTargetOffset;
}

@property (retain, nonatomic, setter=_setScrubberLayout:) PUScrubberTilingLayout *_scrubberLayout;
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGestureRecognizer;
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController;
@property (nonatomic, setter=_setExpandedItemType:) long long _expandedItemType;
@property (nonatomic, setter=_setIsHandlingUserScroll:) _Bool _isHandlingUserScroll;
@property (nonatomic, setter=_setScrubbingAwayFromContentEdge:) _Bool _isScrubbingAwayFromContentEdge;
@property (nonatomic, setter=_setScrollViewSettled:) _Bool _scrollViewSettled;
@property (nonatomic, setter=_setUseLoupe:) _Bool _useLoupe;
@property (nonatomic, setter=_setThinLoupe:) _Bool _thinLoupe;
@property (nonatomic, setter=_setUseSmoothingTransitionCoordinator:) _Bool _useSmoothingTransitionCoordinator;
@property (nonatomic, setter=_setSnapToExpandedItem:) _Bool _snapToExpandedItem;
@property (retain, nonatomic, setter=_setDecelerationTargetIndexPath:) NSIndexPath *_decelerationTargetIndexPath;
@property (nonatomic, setter=_setDecelerationTargetOffset:) struct CGPoint _decelerationTargetOffset;
@property (nonatomic, setter=_setDecelerationDistance:) double _decelerationDistance;
@property (nonatomic, setter=_setLayoutTransitionsDisabledCount:) long long _layoutTransitionsDisabledCount;
@property (nonatomic, setter=_setScrubbingTransitionProgress:) double _scrubbingTransitionProgress;
@property (nonatomic, setter=_setHandlingScrollViewWillEndDragging:) _Bool _isHandlingScrollViewWillEndDragging;
@property (nonatomic, readonly, getter=_areLayoutTransitionsDisabled) _Bool _layoutTransitionsDisabled;
@property (nonatomic) _Bool currentDragBeganOnContent;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (nonatomic) long long type;
@property (weak, nonatomic) id <PUScrubberViewDelegate> delegate;
@property (nonatomic, readonly) double topOutset;
@property (nonatomic, readonly) UIScrollView *scrollViewForPreviewing;
@property (nonatomic) _Bool isForPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateIfNeeded;
- (void)_endScrubbing;
- (void)_handleTap:(id)arg1;
- (void)_setNeedsUpdate;
- (double)_lengthForDuration:(double)arg1;
- (void)videoScrubberControllerDidUpdate:(id)arg1;
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)videoScrubberController:(id)arg1 desiredSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (float)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (struct CGPoint)tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (struct CGPoint)tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint)arg2 withLayout:(id)arg3;
- (double)_expandedItemWidth;
- (_Bool)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)arg1;
- (_Bool)layout:(id)arg1 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg2;
- (void)beginPreviewing;
- (void)endPreviewing;
- (void)_invalidateLoupeEffect;
- (void)_updateLoupeEffectIfNeeded;
- (void)_invalidateSnapToExpandedItem;
- (void)_updateSnapToExpandedItemIfNeeded;
- (void)_updateTilingViewIfNeeded;
- (id)_newScrubberLayout;
- (_Bool)_isLibraryScrubbing;
- (_Bool)_isContentScrubbing;
- (_Bool)_isDrivingPlayheadProgress;
- (_Bool)_allowExitFromContentScrubbing;
- (void)_handleUserScrollWillBegin:(_Bool)arg1;
- (void)_handleTapOnBrowsingVideoPlayer:(id)arg1;
- (void)_handleTapOnBrowsingIrisPlayer:(id)arg1;
- (id)_currentAssetsDataSource;
- (id)_expandedAssetReference;
- (void)_invalidateScrubberLayoutEnsureTransition;
- (void)_invalidateScrubberLayout;
- (void)_updateScrubberLayoutIfNeeded;
- (void)_updateScrubbingAwayFromContentEdgeBeganDragging:(_Bool)arg1;
- (double)_playheadProgressForIrisAssetReference:(id)arg1;
- (void)handleTouchGesture:(id)arg1;
- (void)_updateScrollPositionAnimated:(_Bool)arg1;
- (void)_disableLayoutTransitionsForDuration:(double)arg1;
- (void)_reenableLayoutTransitions;

@end
