/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

#import <PhotosUI/Swift-Protocol.h>

@class CADisplayLink, NSString, UIImage, UIScrollView;

@protocol PUUserTransformViewDelegate;

@interface PUUserTransformView : UIView <Swift>

{
    struct {
        _Bool respondsToShouldReceiveTouchAtPoint;
        _Bool respondsToDidChangeIsUserInteracting;
    } _delegateFlags;
    _Bool _isUserInteracting;
    _Bool __updatingScrollView;
    _Bool __isUserPanning;
    _Bool __isUserDeceleratingPan;
    _Bool __isUserZooming;
    _Bool __isUserEndingZoom;
    _Bool __isUserPanningOrDecelerating;
    _Bool __isUserZoomingOrBouncing;
    _Bool __shouldTrackContentAnimation;
    _Bool __isContentAnimating;
    _Bool __isAnimatingZoomEnd;
    _Bool __isUpdatingState;
    _Bool __wasUserInteractingBeforeStateUpdate;
    _Bool __needsUpdateUserPanningOrDecelerating;
    _Bool __needsUpdateUserZoomingOrBouncing;
    _Bool __needsUpdateUserInteracting;
    _Bool __needsUpdateShouldTrackContentAnimation;
    _Bool __needsUpdateUserAffineTransform;
    _Bool __needsUpdateContentState;
    _Bool __needsUpdateAnimatingZoomEnd;
    _Bool __needsUpdateZoomAndScroll;
    _Bool __needsUpdateScrollView;
    id <PUUserTransformViewDelegate> _delegate;
    unsigned long long _enabledInteractions;
    UIScrollView *__scrollView;
    UIView *__scrollContentView;
    double __doubleTapZoomScale;
    double __contentZoomScale;
    long long __numberOfNestedStateChanges;
    CADisplayLink *__displayLink;
    double __desiredZoomScale;
    double __preferredMinimumZoomScale;
    double __preferredMaximumZoomScale;
    long long __numberOfNestedZoomAndScrollChanges;
    UIImage *_debugScrollViewContentImage;
    struct CGSize _contentPixelSize;
    struct CGSize _scrollPadding;
    struct CGPoint __contentCenter;
    struct CGRect _untransformedContentFrame;
    struct CGAffineTransform _userAffineTransform;
}

@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (nonatomic, readonly) UIView *_scrollContentView;
@property (nonatomic, setter=_setDoubleTapZoomScale:) double _doubleTapZoomScale;
@property (nonatomic, getter=_isUpdatingScrollView, setter=_setUpdatingScrollView:) _Bool _updatingScrollView;
@property (nonatomic, setter=_setUserPanning:) _Bool _isUserPanning;
@property (nonatomic, setter=_setUserDeceleratingPan:) _Bool _isUserDeceleratingPan;
@property (nonatomic, setter=_setUserZooming:) _Bool _isUserZooming;
@property (nonatomic, setter=_setUserEndingZoom:) _Bool _isUserEndingZoom;
@property (nonatomic, setter=_setUserPanningOrDecelerating:) _Bool _isUserPanningOrDecelerating;
@property (nonatomic, setter=_setUserZoomingOrBouncing:) _Bool _isUserZoomingOrBouncing;
@property (nonatomic, setter=_setUserInteracting:) _Bool isUserInteracting;
@property (nonatomic, setter=_setShouldTrackContentAnimation:) _Bool _shouldTrackContentAnimation;
@property (nonatomic, setter=_setContentAnimating:) _Bool _isContentAnimating;
@property (nonatomic, setter=_setContentCenter:) struct CGPoint _contentCenter;
@property (nonatomic, setter=_setContentZoomScale:) double _contentZoomScale;
@property (nonatomic, setter=_setAnimatingZoomEnd:) _Bool _isAnimatingZoomEnd;
@property (nonatomic, setter=_setNumberOfNestedStateChanges:) long long _numberOfNestedStateChanges;
@property (nonatomic, setter=_setUpdatingState:) _Bool _isUpdatingState;
@property (nonatomic, setter=_setWasUserInteractingBeforeStateUpdate:) _Bool _wasUserInteractingBeforeStateUpdate;
@property (nonatomic, setter=_setNeedsUpdateUserPanningOrDecelerating:) _Bool _needsUpdateUserPanningOrDecelerating;
@property (nonatomic, setter=_setNeedsUpdateUserZoomingOrBouncing:) _Bool _needsUpdateUserZoomingOrBouncing;
@property (nonatomic, setter=_setNeedsUpdateUserInteracting:) _Bool _needsUpdateUserInteracting;
@property (nonatomic, setter=_setNeedsUpdateShouldTrackContentAnimation:) _Bool _needsUpdateShouldTrackContentAnimation;
@property (nonatomic, setter=_setNeedsUpdateUserAffineTransform:) _Bool _needsUpdateUserAffineTransform;
@property (nonatomic, setter=_setNeedsUpdateContentState:) _Bool _needsUpdateContentState;
@property (nonatomic, setter=_setNeedsUpdateAnimatingZoomEnd:) _Bool _needsUpdateAnimatingZoomEnd;
@property (retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;
@property (nonatomic, setter=_setDesiredZoomScale:) double _desiredZoomScale;
@property (nonatomic, setter=_setPreferredMinimumZoomScale:) double _preferredMinimumZoomScale;
@property (nonatomic, setter=_setPreferredMaximumZoomScale:) double _preferredMaximumZoomScale;
@property (nonatomic, setter=_setNumberOfNestedZoomAndScrollChanges:) long long _numberOfNestedZoomAndScrollChanges;
@property (nonatomic, setter=_setNeedsUpdateZoomAndScroll:) _Bool _needsUpdateZoomAndScroll;
@property (nonatomic, setter=_setNeedsUpdateScrollView:) _Bool _needsUpdateScrollView;
@property (retain, nonatomic) UIImage *debugScrollViewContentImage;
@property (weak, nonatomic) id <PUUserTransformViewDelegate> delegate;
@property (nonatomic) struct CGSize contentPixelSize;
@property (nonatomic) struct CGRect untransformedContentFrame;
@property (nonatomic) struct CGAffineTransform userAffineTransform;
@property (nonatomic) unsigned long long enabledInteractions;
@property (nonatomic) struct CGSize scrollPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)_updateStateIfNeeded;
- (void)_updateDisplayLink;
- (_Bool)_needsStateUpdate;
- (void)_handleDisplayLink:(id)arg1;
- (_Bool)contentContainsLocationFromProvider:(id)arg1;
- (void)handleDoubleTapWithLocationProvider:(id)arg1;
- (void)_assertInsideStateChangeBlock;
- (void)_assertInsideStateUpdate;
- (void)_performStateChanges:(CDUnknownBlockType)arg1;
- (void)_willChangeState;
- (void)_didChangeState;
- (void)_setNeedsStateUpdate;
- (void)_setUserAffineTransform:(struct CGAffineTransform)arg1;
- (void)_invalidateUserPanningOrDecelerating;
- (void)_updateUserPanningOrDeceleratingIfNeeded;
- (void)_invalidateUserZoomingOrBouncing;
- (void)_updateUserZoomingOrBouncingIfNeeded;
- (void)_invalidateUserInteracting;
- (void)_updateUserInteractingIfNeeded;
- (void)_invalidateShouldTrackContentAnimation;
- (void)_updateShouldTrackContentAnimationIfNeeded;
- (void)_invalidateContentState;
- (void)_updateContentStateIfNeeded;
- (void)_invalidateAnimatingZoomEnd;
- (void)_updateAnimatingZoomEndIfNeeded;
- (void)_invalidateUserAffineTransform;
- (void)_updateUserAffineTransformIfNeeded;
- (void)_performZoomAndScrollChanges:(CDUnknownBlockType)arg1;
- (void)_setEnabledInteractions:(unsigned long long)arg1;
- (void)_assertInsideZoomAndScrollChangeBlock;
- (void)_invalidateZoomAndScroll;
- (void)_updateZoomAndScrollIfNeeded;
- (struct UIEdgeInsets)_contentInsetsForContentScale:(double)arg1;
- (struct CGPoint)_contentOffsetAdjustmentForContentInsets:(struct UIEdgeInsets)arg1;
- (void)_invalidateScrollView;
- (void)_updateScrollViewIfNeeded;

@end
