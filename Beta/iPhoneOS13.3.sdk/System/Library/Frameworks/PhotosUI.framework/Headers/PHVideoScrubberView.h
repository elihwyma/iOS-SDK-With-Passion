/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVPlayer, NSString, PUPlayheadView, PXVideoScrubberController, UIImage, UIScrollView;

@protocol PHVideoScrubberFilmstripView, PHVideoScrubberFilmstripViewProvider, PHVideoScrubberViewInteractionDelegate;

@interface PHVideoScrubberView : UIView <Swift>

{
    unsigned long long _previousPlayState;
    struct {
        _Bool didBeginTouching;
        _Bool didEndTouching;
        _Bool willBeginDragging;
        _Bool didEndDragging;
        _Bool willBeginDecelerating;
        _Bool didEndDecelerating;
    } _interactionDelegateRespondsTo;
    _Bool __needsUpdateFilmStripView;
    _Bool __needsUpdateVideoScrubberController;
    AVPlayer *_player;
    double _estimatedDuration;
    UIImage *_placeholderThumbnail;
    UIScrollView *_scrollView;
    id <PHVideoScrubberViewInteractionDelegate> _interactionDelegate;
    id <PHVideoScrubberFilmstripViewProvider> _filmstripViewProvider;
    UIView<PHVideoScrubberFilmstripView> *__filmStripView;
    PXVideoScrubberController *__videoScrubberController;
    PUPlayheadView *__playheadView;
}

@property (nonatomic, setter=_setNeedsUpdateFilmStripView:) _Bool _needsUpdateFilmStripView;
@property (nonatomic, setter=_setNeedsUpdateVideoScrubberController:) _Bool _needsUpdateVideoScrubberController;
@property (retain, nonatomic, setter=_setFilmStripView:) UIView<PHVideoScrubberFilmstripView> *_filmStripView;
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController;
@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *scrollView;
@property (retain, nonatomic, setter=_setPlayheadView:) PUPlayheadView *_playheadView;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) double estimatedDuration;
@property (retain, nonatomic) UIImage *placeholderThumbnail;
@property (weak, nonatomic) id <PHVideoScrubberViewInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id <PHVideoScrubberFilmstripViewProvider> filmstripViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)_scrollView;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)_needsUpdate;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_updateIfNeeded;
- (double)_lengthForDuration:(double)arg1;
- (void)videoScrubberControllerDidUpdate:(id)arg1;
- (double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2;
- (void)_updateScrollViewContentOffset;
- (id)_currentAVAsset;
- (id)_currentVideoComposition;
- (_Bool)_isUserInteractingWithScrollView;
- (_Bool)_playerIsPlaying;
- (void)_handleTouchGesture:(id)arg1;
- (void)_handleInteractionBegan;
- (void)_handleInteractionEndedAndTogglePlayState:(_Bool)arg1;
- (void)_invalidateFilmStripView;
- (void)_invalidateVideoScrubberController;
- (void)_updateFilmStripViewIfNeeded;
- (void)_updateVideoscrubberControllerIfNeeded;
- (void)_updateVisibleRectOfFilmStripView;
- (void)_updatePlayheadFrame;

@end
