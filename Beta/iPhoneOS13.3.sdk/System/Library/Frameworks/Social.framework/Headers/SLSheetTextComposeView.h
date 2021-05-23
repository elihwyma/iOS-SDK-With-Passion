/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class UILabel, UITextView;

@interface SLSheetTextComposeView : UIView

{
    UITextView *_textView;
    UILabel *_placeholderLabel;
    double _textRightInset;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (nonatomic) double textRightInset;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_assembleView;
- (void)restoreKeyboard;

@end
