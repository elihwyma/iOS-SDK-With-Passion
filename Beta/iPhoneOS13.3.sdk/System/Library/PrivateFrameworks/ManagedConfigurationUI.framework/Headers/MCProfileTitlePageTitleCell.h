/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageTitleCell : UITableViewCell

{
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
