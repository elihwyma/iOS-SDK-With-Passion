/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegSpinnerCell : PSTableCell

{
    UIActivityIndicatorView *_activityIndicator;
}

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
