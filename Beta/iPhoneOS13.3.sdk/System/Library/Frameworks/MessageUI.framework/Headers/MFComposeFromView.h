/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <MessageUI/MFMailComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFMailComposeHeaderView

{
    UILabel *_accountLabel;
    UIView *_background;
    _Bool _accountHasUnsafeDomain;
}

@property (nonatomic) _Bool accountHasUnsafeDomain;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)refreshPreferredContentSize;
- (id)_accountLabel;
- (void)_setBackgroundVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)accountLabelRect;
- (void)setAccountLabel:(id)arg1;
- (void)setLabelHighlighted:(_Bool)arg1;

@end
