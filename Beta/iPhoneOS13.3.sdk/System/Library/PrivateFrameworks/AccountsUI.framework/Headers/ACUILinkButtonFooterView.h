/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <UIKit/UIView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView

{
    ACUILinkButton *_linkButton;
    long long _desiredTextAlignment;
}

@property (nonatomic) long long alignment;

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithButton:(id)arg1;

@end
