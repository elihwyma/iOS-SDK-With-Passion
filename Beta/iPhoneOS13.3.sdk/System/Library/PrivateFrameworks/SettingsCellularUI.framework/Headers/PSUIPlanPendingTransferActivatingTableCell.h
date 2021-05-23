/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <SettingsCellularUI/PSUIDanglingPlanTableCell.h>

@class CTCellularPlanPendingTransfer;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
}

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;

- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)_setStatusLabelText;

@end
