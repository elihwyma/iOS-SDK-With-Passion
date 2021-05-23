/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class STUsageGraphViewController, STUsageItem, UILabel;

__attribute__((visibility("hidden")))
@interface STDrillInGraphCell : STTableCell

{
    UILabel *_usageLabel;
    STUsageGraphViewController *_usageGraphViewController;
    STUsageItem *_usageItem;
}

@property (nonatomic, readonly) UILabel *usageLabel;
@property (nonatomic, readonly) STUsageGraphViewController *usageGraphViewController;
@property (nonatomic, readonly) STUsageItem *usageItem;

- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
