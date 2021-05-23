/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface TSCellularPlanTransferItemCell : UITableViewCell

{
    UILabel *_title;
    UILabel *_planInfo;
}

@property (retain) UILabel *title;
@property (retain) UILabel *planInfo;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
