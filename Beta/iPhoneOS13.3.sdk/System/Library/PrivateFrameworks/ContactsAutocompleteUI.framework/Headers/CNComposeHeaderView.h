/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <UIKit/UIView.h>

@class CNComposeHeaderLabelView, NSString;

@protocol CNComposeHeaderViewDelegate;

@interface CNComposeHeaderView : UIView

{
    _Bool _showsHighlightWhenTouched;
    NSString *_navTitle;
    CNComposeHeaderLabelView *_labelView;
    id <CNComposeHeaderViewDelegate> _delegate;
    UIView *_separator;
    UIView *_highlightedBackgroundView;
    struct NSDirectionalEdgeInsets _separatorDirectionalEdgeInsets;
}

@property (retain, nonatomic) CNComposeHeaderLabelView *labelView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) _Bool showsHighlightWhenTouched;
@property (weak, nonatomic) id <CNComposeHeaderViewDelegate> delegate;
@property (nonatomic) struct NSDirectionalEdgeInsets separatorDirectionalEdgeInsets;

+ (id)defaultFont;
+ (double)preferredHeight;
+ (double)separatorHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;

- (void)setBounds:(struct CGRect)arg1;
- (id)_baseAttributes;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)labelColor;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_contentRect;
- (_Bool)_canBecomeFirstResponder;
- (id)_automationID;
- (struct CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (id)_highlightedBackgroundView;
- (void)refreshPreferredContentSize;
- (struct UIEdgeInsets)_recipientViewEdgeInsets;
- (double)labelTopPadding;
- (_Bool)_shouldEmbedLabelInTextView;
- (void)handleTouchesEnded;
- (struct CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;

@end
