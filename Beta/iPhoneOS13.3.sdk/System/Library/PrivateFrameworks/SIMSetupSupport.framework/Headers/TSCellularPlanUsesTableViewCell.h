/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UITableViewCell.h>

@class CNGeminiBadge, UILabel;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    CNGeminiBadge *_badge;
}

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabel:(id)arg1 description:(id)arg2 badge:(id)arg3;

@end
