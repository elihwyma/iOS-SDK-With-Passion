/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSMutableDictionary, UIView;

@protocol UIStepperVisualElement;

@interface UIStepper : UIControl

{
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_incrementImages;
    NSMutableDictionary *_decrementImages;
    NSMutableDictionary *_backgroundImages;
    _Bool _continuous;
    _Bool _autorepeat;
    _Bool _wraps;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
    UIView<UIStepperVisualElement> *_visualElement;
}

@property (retain, nonatomic) UIView<UIStepperVisualElement> *visualElement;
@property (nonatomic, getter=isContinuous) _Bool continuous;
@property (nonatomic) _Bool autorepeat;
@property (nonatomic) _Bool wraps;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;

+ (Class)_fallbackVisualElementClass;
+ (Class)visualElementClassForTraitCollection:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;

- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTintColor:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_emitValueChanged;
- (void)_commonStepperInit;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
- (void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
- (id)incrementImageForState:(unsigned long long)arg1;
- (id)decrementImageForState:(unsigned long long)arg1;
- (void)visualElementDidSetValue:(id)arg1;
- (void)visualElementSendValueChangedEvent:(id)arg1;

@end
