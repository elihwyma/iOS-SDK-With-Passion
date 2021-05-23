/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNGeminiBadge, CNGeminiResult, NSArray, NSDictionary, UIColor, UIImageView, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CNContactGeminiView : UIView

{
    _Bool _allowsPickerActions;
    _Bool _highlighted;
    _Bool _didCalculateLayout;
    _Bool _isUsingTwoLineLayout;
    CNGeminiResult *_geminiResult;
    UIColor *_highlightedColor;
    NSDictionary *_ab_textAttributes;
    UILayoutGuide *_layoutGuide;
    UILayoutGuide *_geminiLabelLayoutGuide;
    CNGeminiBadge *_geminiBadge;
    UILabel *_typeLabel;
    UILabel *_geminiLabel;
    UIImageView *_chevronView;
    NSArray *_activatedConstraints;
}

@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) UILayoutGuide *geminiLabelLayoutGuide;
@property (retain, nonatomic) CNGeminiBadge *geminiBadge;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *geminiLabel;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (nonatomic) _Bool didCalculateLayout;
@property (nonatomic) _Bool isUsingTwoLineLayout;
@property (nonatomic) _Bool allowsPickerActions;
@property (retain, nonatomic) CNGeminiResult *geminiResult;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) UIColor *highlightedColor;
@property (copy, nonatomic) NSDictionary *ab_textAttributes;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (struct CGSize)sizeForSingleLineLayoutFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeForTwoLineLayoutFittingSize:(struct CGSize)arg1;
- (_Bool)shouldDisplayBadge;
- (_Bool)shouldDisplayChevron;
- (void)setNeedsCalculateLayout;
- (void)calculateLayoutIfNeeded;
- (_Bool)doesLayoutRequireTwoLines;
- (id)singleLineLayoutConstraints;
- (id)twoLineLayoutConstraints;
- (id)localizedChannelUsageFromGeminiResult:(id)arg1;
- (id)localizedLabelFromGeminiResult:(id)arg1;

@end
