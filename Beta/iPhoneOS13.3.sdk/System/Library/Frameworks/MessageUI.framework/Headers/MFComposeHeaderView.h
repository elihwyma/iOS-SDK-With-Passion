/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class MFHeaderLabelView, NSString;

@interface MFComposeHeaderView : UIView

{
    id _delegate;
    MFHeaderLabelView *_labelView;
    UIView *_separator;
    UIView *_highlightBackgroundView;
    _Bool _showsHighlightWhenTouched;
    NSString *_navTitle;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic, readonly) MFHeaderLabelView *labelView;
@property (nonatomic) _Bool showsHighlightWhenTouched;

+ (id)defaultFont;
+ (double)preferredHeight;
+ (double)separatorHeight;
+ (double)_labelTopPaddingSpecification;
+ (id)defaultSeparatorColor;

- (void)setDelegate:(id)arg1;
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
