/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface WFRecommendationCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *descriptionLabel;

@end
