/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIScrollView.h>

@class AVPlaybackContentContainerView, NSString, NSValue;

@protocol AVPlaybackContentTransitioningViewDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentTransitioningView : UIScrollView

{
    _Bool _playingOnSecondScreen;
    _Bool _transitionInteractive;
    AVPlaybackContentContainerView *_activeContentView;
    long long _transitionState;
    long long _transitionDirection;
    double _transitionProgress;
    id <AVPlaybackContentTransitioningViewDelegate> _contentTransitioningDelegate;
    AVPlaybackContentContainerView *_incomingContentView;
    NSValue *_targetContentOffset;
    NSString *_stateDescription;
    long long _boundsOrContentSizeAdjustmentCount;
    struct CGRect _frameForActiveContentView;
    struct CGRect _frameForTransitioningContentView;
}

@property (retain, nonatomic) NSValue *targetContentOffset;
@property (copy, nonatomic) NSString *stateDescription;
@property (nonatomic) struct CGRect frameForActiveContentView;
@property (nonatomic) struct CGRect frameForTransitioningContentView;
@property (nonatomic) long long boundsOrContentSizeAdjustmentCount;
@property (nonatomic, getter=isTransitionInteractive) _Bool transitionInteractive;
@property (weak, nonatomic) id <AVPlaybackContentTransitioningViewDelegate> contentTransitioningDelegate;
@property (nonatomic, readonly) AVPlaybackContentContainerView *incomingContentView;
@property (nonatomic, readonly) long long transitionState;
@property (nonatomic, readonly) long long transitionDirection;
@property (nonatomic, readonly) double transitionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) struct CGRect videoContentFrame;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;

- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(_Bool)arg2;
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;
- (void)performTransition:(long long)arg1;
- (void)_updateTransitionStateIfPossible;
- (void)_performBoundsOrContentSizeAdjustment:(CDUnknownBlockType)arg1;
- (_Bool)_isAdjustingBoundsOrContentSize;
- (void)_updateSizeAndContentFrame;
- (void)_ensureContentViews;
- (struct CGRect)_frameExcludingActiveContent;
- (struct CGRect)_frameExcludingTransitioningContent;
- (id)_descriptionForState:(long long)arg1;
- (id)_makeStateDescription;

@end
