/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITextView.h>

@class NSAttributedString, NSString, UILabel;

@interface WFPlaceholderTextView : UITextView

{
    UILabel *_placeholderLabel;
}

@property (weak, nonatomic) UILabel *placeholderLabel;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;

- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)textDidChange;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)invalidatePlaceholderFont;

@end
