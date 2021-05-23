/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImage, UIImpactFeedbackGenerator, UISwitchVisualElement;

@interface UISwitch : UIControl <Swift>

{
    _Bool _on;
    _Bool _alwaysShowOnOffLabel;
    UIColor *_onTintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    UIColor *_tintColor;
    UISwitchVisualElement *_visualElement;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UISwitchVisualElement *visualElement;
@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) _Bool alwaysShowOnOffLabel;
@property (retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (retain, nonatomic) UIColor *onTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (retain, nonatomic) UIImage *onImage;
@property (retain, nonatomic) UIImage *offImage;
@property (nonatomic, getter=isOn) _Bool on;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)visualElementForTraitCollection:(id)arg1;
+ (void)setVisualElementProvider:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)tintColorDidChange;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(_Bool)arg2;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldShowOnOffLabels;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2 notifyingVisualElement:(_Bool)arg3;
- (void)visualElement:(id)arg1 transitionedToOn:(_Bool)arg2;
- (void)visualElementHadTouchUpInside:(id)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1;
- (void)_showingOnOffLabelChanged;

@end
