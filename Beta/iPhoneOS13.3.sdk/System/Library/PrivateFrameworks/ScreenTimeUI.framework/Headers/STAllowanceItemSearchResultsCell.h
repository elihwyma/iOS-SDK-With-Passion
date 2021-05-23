/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface STAllowanceItemSearchResultsCell : UITableViewCell

{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_dashLabel;
    UILabel *_categoryLabel;
}

@property (retain) UIImageView *iconImageView;
@property (retain) UILabel *nameLabel;
@property (retain) UILabel *dashLabel;
@property (retain) UILabel *categoryLabel;

@end
