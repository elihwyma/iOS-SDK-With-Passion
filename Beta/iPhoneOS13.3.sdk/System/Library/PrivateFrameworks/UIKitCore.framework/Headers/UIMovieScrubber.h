/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, UIMovieScrubberEditingView, UIMovieScrubberTrackView, UIPanGestureRecognizer;

@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl

{
    UIImageView *_thumbView;
    UIMovieScrubberTrackView *_trackView;
    UIMovieScrubberEditingView *_editingView;
    UILabel *_elapsedLabel;
    UILabel *_remainingLabel;
    int _timeComponents;
    UIImage *_fillImage;
    UIImage *_innerShadowImage;
    UIImage *_maskImage;
    UIImage *_shadowImage;
    id <UIMovieScrubberDataSource> _dataSource;
    id <UIMovieScrubberDelegate> _delegate;
    struct CGRect _trackRect;
    double _hitOffset;
    double _zoomDelay;
    _Bool _showTimeViews;
    _Bool _editable;
    double _value;
    double _maximumValue;
    double _minimumValue;
    struct CGPoint _touchLocationWhenTrackPressBegan;
    double _trimStartValue;
    double _trimEndValue;
    double _minTrimmedLength;
    double _maxTrimmedLength;
    double _zoomAnimationDuration;
    double _zoomAnimationDelay;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int creatingSnapshot:1;
        unsigned int needsReload:1;
        unsigned int layoutTimeViews:1;
        unsigned int computeTrackRect:1;
        unsigned int clampingTrimRange;
        unsigned int zoomed:1;
        unsigned int zoomAnimating:1;
        unsigned int trackIsPressed:1;
        unsigned int trackAnimating:1;
        unsigned int thumbIsVisible:1;
        unsigned int handleIsPressed:1;
        unsigned int willBeginEditing:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int rotationDisabled;
        unsigned int isInNavigationBar:1;
        unsigned int delegateValueDidChange:1;
        unsigned int delegateStartValueDidChange:1;
        unsigned int delegateEndValueDidChange:1;
        unsigned int delegateWillBeginRequestingThumbnails:1;
        unsigned int delegateDidFinishRequestingThumbnails:1;
        unsigned int delegateWillBeginEditing:1;
        unsigned int delegateDidBeginEditing:1;
        unsigned int delegateDidCancelEditing:1;
        unsigned int delegateEditingAnimationFinished:1;
        unsigned int delegateWidthDeltaOriginXDelta:1;
        unsigned int delegateDidBeginAnimatingZoom:1;
        unsigned int delegateDidEndAnimatingZoom:1;
        unsigned int delegateWillZoom:1;
        unsigned int dataSourceRequestThumbnailImageIsSummmary:1;
    } _sliderFlags;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _edgeInset;
}

@property (nonatomic) double value;
@property (nonatomic) double duration;
@property (nonatomic) double minimumTrimLength;
@property (nonatomic) double maximumTrimLength;
@property (nonatomic) double trimStartValue;
@property (nonatomic) double trimEndValue;
@property (nonatomic, readonly) double zoomMinimumValue;
@property (nonatomic, readonly) double zoomMaximumValue;
@property (nonatomic, readonly, getter=isZoomAnimating) _Bool zoomAnimating;
@property (nonatomic) _Bool thumbIsVisible;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (nonatomic) id <UIMovieScrubberDataSource> dataSource;
@property (nonatomic) id <UIMovieScrubberDelegate> delegate;
@property (nonatomic) double zoomDelay;
@property (nonatomic) _Bool showTimeViews;
@property (nonatomic, readonly) _Bool isInsideNavigationBar;
@property (nonatomic) double edgeInset;
@property (nonatomic, readonly) struct UIEdgeInsets alignmentMargins;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_allowActionsToQueue;
+ (id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(_Bool)arg2 isElapsed:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)_alwaysHandleScrollerMouseEvent;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (void)_sendDelayedActions;
- (void)_sliderValueDidChange:(id)arg1;
- (void)_initSubviews;
- (struct CGRect)_editingRect;
- (void)_trimAnimationDidStop:(_Bool)arg1 glassView:(id)arg2;
- (struct CGRect)_editingRectForStartTime:(double)arg1 endTime:(double)arg2;
- (void)_cancelTrackPress:(_Bool)arg1;
- (void)animateCancelEdit;
- (void)_animateAfterEdit:(_Bool)arg1;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)_computeTrackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)trackRect;
- (void)_updateTimes;
- (void)_updateThumbLocation;
- (struct CGRect)thumbRectForValue:(double)arg1;
- (void)_setValue:(double)arg1 andSendAction:(_Bool)arg2;
- (void)_sliderAnimationWillStart;
- (void)_sliderAnimationDidStop:(_Bool)arg1;
- (void)_trackPressWasHeld;
- (void)_setZoomAnimating:(_Bool)arg1;
- (void)setRotationDisabled:(_Bool)arg1;
- (void)beginTrackingWithLocatable:(id)arg1;
- (void)endTrackingWithLocatable:(id)arg1;
- (void)continueTrackingWithLocatable:(id)arg1;
- (_Bool)pointInsideThumb:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)_editingHandleWithLocatable:(id)arg1;
- (double)_valueForLocatable:(id)arg1;
- (void)_beginTrackPressWithLocatable:(id)arg1 touchesBegan:(_Bool)arg2;
- (void)_cancelTrackPressIfNeccessaryWithLocatable:(id)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (double)movieScrubberTrackViewDuration:(id)arg1;
- (id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(_Bool)arg3;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6;
- (void)movieScrubberTrackViewDidExpand:(id)arg1;
- (void)movieScrubberTrackViewDidCollapse:(id)arg1;
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1;
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1;
- (void)animateAfterEdit;
- (_Bool)forceZoom;
- (void)forceUnzoom;
- (_Bool)isAnimatingValueChange;

@end
