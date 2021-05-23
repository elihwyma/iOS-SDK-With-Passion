/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSParagraphStyle, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface SFDialogTextView : UIView

{
    NSString *_title;
    NSString *_message;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIFont *_messageFontWithTitle;
    NSParagraphStyle *_titleParagraphStyle;
    UITextView *_textView;
    double _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;

- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)flashScrollIndicators;
- (void)_updateText;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)_updateFontStyling;
- (void)_updateTextContainerInset;

@end
