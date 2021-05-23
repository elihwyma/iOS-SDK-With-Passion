/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageWarningCell : UITableViewCell

{
    UILabel *_label;
    UIView *_separatorLine;
}

@property (retain, nonatomic) UIView *separatorLine;
@property (nonatomic, readonly) UILabel *label;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateConstraintsWithLabel:(id)arg1;

@end
