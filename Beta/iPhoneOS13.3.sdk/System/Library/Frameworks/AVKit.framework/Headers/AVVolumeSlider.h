/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UISlider.h>

@class AVVolumeWarningView, NSNumber, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface AVVolumeSlider : UISlider

{
    _Bool _included;
    _Bool _collapsed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _removed;
    _Bool _animatingVolumeChange;
    _Bool _hasChangedLocationAtLeastOnce;
    _Bool _scrubsWhenTappedAnywhere;
    float _effectiveVolumeLimit;
    UIImageView *_thumbView;
    NSNumber *_unclampedValue;
    AVVolumeWarningView *_volumeWarningView;
    struct CGSize _extrinsicContentSize;
}

@property (retain, nonatomic) UIImageView *thumbView;
@property (weak, nonatomic) AVVolumeWarningView *volumeWarningView;
@property (nonatomic) _Bool hasChangedLocationAtLeastOnce;
@property (nonatomic) _Bool scrubsWhenTappedAnywhere;
@property (nonatomic, getter=isAnimatingVolumeChange) _Bool animatingVolumeChange;
@property (nonatomic) float effectiveVolumeLimit;
@property (retain, nonatomic) NSNumber *unclampedValue;
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

- (void)setHidden:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)hitRect;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (void)_endTracking;
- (_Bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldTrackTouchAtPoint:(struct CGPoint)arg1;

@end
