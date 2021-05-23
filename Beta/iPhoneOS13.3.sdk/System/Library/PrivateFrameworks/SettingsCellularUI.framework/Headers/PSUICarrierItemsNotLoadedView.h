/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel, UILayoutGuide, UITextView;

__attribute__((visibility("hidden")))
@interface PSUICarrierItemsNotLoadedView : UIView

{
    UIActivityIndicatorView *_spinner;
    UILabel *_titleLabel;
    UITextView *_linkTextView;
    UIButton *_retryButton;
    UILayoutGuide *_layoutGuide;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *linkTextView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setLinkText:(id)arg1 url:(id)arg2;

@end
