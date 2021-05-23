/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class CTCellularPlanManager, CTCellularPlanPendingTransfer, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell

{
    CTCellularPlanPendingTransfer *_planPendingTransfer;
    CTCellularPlanManager *_cellularPlanManager;
    UIButton *_cancelButton;
    UILabel *_rightMargin;
    UILabel *_requestSentLabel;
}

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *rightMargin;
@property (retain, nonatomic) UILabel *requestSentLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)cancelPressed;

@end
