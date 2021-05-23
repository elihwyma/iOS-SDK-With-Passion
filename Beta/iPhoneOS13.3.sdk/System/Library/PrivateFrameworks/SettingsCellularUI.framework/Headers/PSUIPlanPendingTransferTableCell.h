/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer, UIImageView;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell

{
    UIImageView *_view;
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;

- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_setView;

@end
