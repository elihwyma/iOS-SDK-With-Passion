/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface ACUITextWithLinkButtonFooterView : UIView

{
    NSArray *_linkButtons;
    UILabel *_textLabel;
    NSString *_footerText;
}

- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithText:(id)arg1 linkButtons:(id)arg2;
- (double)_heightForFooterTextConstrainedToWidth:(double)arg1;
- (double)_heightForEmptyLineConstrainedToWidth:(double)arg1;
- (double)_heightForLinkButton:(id)arg1 constrainedToWidth:(double)arg2;
- (id)initWithText:(id)arg1 linkButton:(id)arg2;

@end
