/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIControl.h>

@class AVMicaPackage, NSString, NSTimer, UIImageView, UISelectionFeedbackGenerator, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVVolumeButtonControl : UIControl

{
    long long _trackingState;
    _Bool _included;
    _Bool _collapsed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _removed;
    _Bool _longPressEnabled;
    _Bool _showsHighlightedAppearance;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSString *_micaPackageStateName;
    UIViewPropertyAnimator *_highlightAnimator;
    AVMicaPackage *_micaPackage;
    UIImageView *_imageView;
    NSTimer *_longPressTimer;
    struct CGSize _extrinsicContentSize;
    struct CGPoint _translationOfPanFromPreviousTouch;
    struct CGPoint _cumulativeTranslationSincePanningBegan;
    struct CGPoint _locationOfTouchInWindow;
    struct CGPoint _initialPreciseLocationOfTouch;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) AVMicaPackage *micaPackage;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGPoint initialPreciseLocationOfTouch;
@property (weak, nonatomic) NSTimer *longPressTimer;
@property (nonatomic) long long trackingState;
@property (nonatomic) _Bool showsHighlightedAppearance;
@property (retain, nonatomic) NSString *micaPackageStateName;
@property (nonatomic, getter=isLongPressEnabled) _Bool longPressEnabled;
@property (nonatomic) struct NSDirectionalEdgeInsets hitRectInsets;
@property (nonatomic) struct CGPoint translationOfPanFromPreviousTouch;
@property (nonatomic) struct CGPoint cumulativeTranslationSincePanningBegan;
@property (nonatomic) struct CGPoint locationOfTouchInWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGSize extrinsicContentSize;
@property (nonatomic, getter=isRemoved) _Bool removed;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, getter=isIncluded) _Bool included;
@property (nonatomic, readonly, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property (nonatomic) _Bool hasAlternateAppearance;
@property (nonatomic) _Bool hasFullScreenAppearance;

- (void)setBounds:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (_Bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;
- (void)_updateIsHiddenAndAlpha;
- (void)triggerSelectionChangedFeedback;
- (void)setNeedsUpdateGlyphRenderingMode;
- (id)imageNameForMicaPackageState;
- (void)_updateMicaPackage:(id)arg1;

@end
