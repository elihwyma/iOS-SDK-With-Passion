/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIBezierPath, UIColor, UIFont, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _UIActionSliderKnob, _UIBackdropView, _UIVibrantSettings;

@protocol _UIActionSliderDelegate, _UIActionSliderLabel;

@interface _UIActionSlider : UIControl <Swift>

{
    UIView *_contentView;
    UIView *_trackDodgeView;
    UIView *_trackBackgroundView;
    _UIBackdropView *_trackBlurView;
    UIView *_trackSolidView;
    _UIActionSliderKnob *_knobView;
    UIImageView *_knobImageView;
    UIView<_UIActionSliderLabel> *_trackLabel;
    UIPanGestureRecognizer *_slideGestureRecognizer;
    struct CGPoint _slideGestureInitialPoint;
    double _knobPosition;
    double _trackWidthProportion;
    _Bool _showingTrackLabel;
    _Bool _animating;
    long long _style;
    long long _textStyle;
    NSString *_trackText;
    UIFont *_trackFont;
    double _trackTextBaselineFromBottom;
    id <_UIActionSliderDelegate> _delegate;
    double _knobWidth;
    double _cachedTrackMaskWidth;
    _UIVibrantSettings *_vibrantSettings;
    struct CGSize _knobImageOffset;
    struct CGSize _trackSize;
    struct UIEdgeInsets _knobInsets;
}

@property (nonatomic) double trackWidthProportion;
@property (nonatomic, getter=isShowingTrackLabel) _Bool showingTrackLabel;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic) double cachedTrackMaskWidth;
@property (nonatomic, readonly, getter=_knobView) UIView *knobView;
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings;
@property (nonatomic) long long style;
@property (nonatomic) long long textStyle;
@property (retain, nonatomic) UIImage *knobImage;
@property (retain, nonatomic) UIColor *knobColor;
@property (nonatomic) struct CGSize knobImageOffset;
@property (copy, nonatomic) NSString *trackText;
@property (retain, nonatomic) UIFont *trackFont;
@property (nonatomic) struct CGSize trackSize;
@property (nonatomic) double trackTextBaselineFromBottom;
@property (nonatomic, readonly) struct CGRect trackTextRect;
@property (retain, nonatomic, readonly) UILabel *trackLabel;
@property (nonatomic, readonly) UIPanGestureRecognizer *slideGestureRecognizer;
@property (weak, nonatomic) id <_UIActionSliderDelegate> delegate;
@property (nonatomic) double knobPosition;
@property (nonatomic) double knobWidth;
@property (nonatomic) struct UIEdgeInsets knobInsets;
@property (nonatomic, readonly) struct CGRect knobRect;
@property (nonatomic, readonly) UIBezierPath *knobMaskPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)_knobPanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;
- (void)_makeTrackLabel;
- (double)_knobWidth;
- (double)_knobHorizontalPosition;
- (double)_knobVerticalInset;
- (struct CGRect)_trackFrame;
- (double)_knobMinXInset;
- (void)_hideTrackLabel:(_Bool)arg1;
- (void)_showTrackLabel;
- (void)updateAllTrackMasks;
- (double)_knobAvailableX;
- (double)_knobMinX;
- (double)_knobLeftMostX;
- (double)_knobRightMostX;
- (double)_knobMaxXInset;
- (double)_knobMaxX;
- (id)trackMaskPath;
- (void)setMaskPath:(struct CGPath *)arg1 onView:(id)arg2;
- (id)trackMaskImage;
- (void)setMaskFromImage:(id)arg1 onView:(id)arg2;
- (_Bool)shouldHideTrackLabelForXPoint:(double)arg1;
- (_Bool)xPointIsWithinTrack:(double)arg1;
- (void)_slideCompleted:(_Bool)arg1;
- (void)openTrackAnimated:(_Bool)arg1;
- (void)closeTrackAnimated:(_Bool)arg1;

@end
