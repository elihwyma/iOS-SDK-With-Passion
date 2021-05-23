/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIPinnedFooterView : UITableViewHeaderFooterView

{
    NSAttributedString *_attributedText;
    double _horizontalPadding;
    UITextView *_textView;
}

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double horizontalPadding;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_initializeTextView;
- (void)_configureTextViewTextStyling;

@end
