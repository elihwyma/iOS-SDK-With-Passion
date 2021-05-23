/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanDetailGroup : NSObject

{
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configurePlanSpecifiers:(id)arg1 planItem:(id)arg2 target:(id)arg3;
+ (id)accountManageButtonForPlanItem:(id)arg1 target:(id)arg2;
+ (id)specifiersFromCellularPlanItem:(id)arg1 target:(id)arg2;

- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)managePlanPressed:(id)arg1;
- (id)getPlanPurchaseDate:(id)arg1;
- (id)getPlanExpireDate:(id)arg1;
- (id)getPlanStatusDate:(id)arg1;
- (id)getPlanCellDataNumber:(id)arg1;
- (id)localizedManageAccountAlertTitle:(id)arg1;
- (id)removeCellularPlanConfirmationTitle:(id)arg1;
- (id)removeCellularPlanConfirmationMessage:(id)arg1;
- (id)lastUpdatedText;
- (id)getPlanDetailedStatus:(id)arg1;
- (id)getPlanStatus:(id)arg1;
- (id)getPlanStatusDataOnly:(id)arg1;

@end
