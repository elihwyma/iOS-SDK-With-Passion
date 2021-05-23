/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor, UIImage, UIImageView, UIView, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator;

@interface UISlider : UIControl <Swift>

{
    float _value;
    float _minValue;
    float _maxValue;
    double _alpha;
    struct __CFDictionary *_contentLookup;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_minTrackClipView;
    UIView *_maxTrackClipView;
    struct {
        unsigned int continuous:1;
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
        unsigned int showValue:1;
        unsigned int trackEnabled:1;
        unsigned int creatingSnapshot:1;
        unsigned int thumbDisabled:1;
        unsigned int minTrackHidden:1;
    } _sliderFlags;
    double _hitOffset;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
    UIView *_thumbViewNeue;
    NSArray *_trackColors;
    _Bool _trackIsArtworkBased;
    _Bool _thumbIsArtworkBased;
    _Bool _maxColorIsValid;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    _UIModulationFeedbackGenerator *_modulationFeedbackGenerator;
    UIImageView *_innerThumbView;
}

@property (retain, nonatomic, getter=_edgeFeedbackGenerator, setter=_setEdgeFeedbackGenerator:) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (retain, nonatomic, getter=_modulationFeedbackGenerator, setter=_setModulationFeedbackGenerator:) _UIModulationFeedbackGenerator *modulationFeedbackGenerator;
@property (retain, nonatomic, getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:) _UIEdgeFeedbackGenerator *edgeFeedbackBehavior;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (retain, nonatomic) UIImage *minimumValueImage;
@property (retain, nonatomic) UIImage *maximumValueImage;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (nonatomic, readonly) UIImage *currentThumbImage;
@property (nonatomic, readonly) UIImage *currentMinimumTrackImage;
@property (nonatomic, readonly) UIImage *currentMaximumTrackImage;

+ (_Bool)_allowActionsToQueue;
+ (id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAccessibilityElementByDefault;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAlpha:(double)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)_alwaysHandleScrollerMouseEvent;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (_Bool)cancelMouseTracking;
- (void)_sendDelayedActions;
- (void)_initSubviews;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;
- (void)_sliderAnimationWillStart;
- (void)_sliderAnimationDidStop:(_Bool)arg1;
- (_Bool)isAnimatingValueChange;
- (void)_setupFeedback;
- (void)_listenForContentSizeCategoryChangesIfNecessary;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;
- (void)_buildTrackArtwork;
- (id)createThumbView;
- (_Bool)_shouldBeginTrackingAtPoint:(struct CGPoint)arg1 pointInKnob:(struct CGPoint *)arg2 inKnob:(_Bool *)arg3;
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_updateMinimumTrackTintColor;
- (id)_thumbImageForState:(unsigned long long)arg1;
- (id)_minimumTrackImageForState:(unsigned long long)arg1;
- (id)_maximumTrackImageForState:(unsigned long long)arg1;
- (id)thumbImageForState:(unsigned long long)arg1;
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;
- (void)_initImages;
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateAppearanceForEnabled:(_Bool)arg1;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(_Bool)arg4;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (id)createThumbViewNeue;
- (double)_cornerRadiusForRect:(struct CGRect)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)_minTrackView;
- (id)_maxTrackView;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setShowValue:(_Bool)arg1;
- (void)_setTrackEnabled:(_Bool)arg1;
- (_Bool)_trackEnabled;
- (void)_setThumbEnabled:(_Bool)arg1;
- (void)_setMinimumTrackVisible:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)_isThumbEnabled;
- (void)_setUseLookNeue:(_Bool)arg1;
- (id)_minValueView;
- (id)_maxValueView;

@end
