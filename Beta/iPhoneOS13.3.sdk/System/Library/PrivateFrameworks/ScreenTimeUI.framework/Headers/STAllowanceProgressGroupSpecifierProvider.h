/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class NSSet, NSString, PSSpecifier, STUsageItem;

__attribute__((visibility("hidden")))
@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider

{
    NSSet *_budgetedIdentifiers;
    STUsageItem *_usageItem;
    PSSpecifier *_addAllowanceSpecifier;
}

@property (copy, nonatomic, readonly) NSSet *budgetedIdentifiers;
@property (nonatomic, readonly) STUsageItem *usageItem;
@property (copy, readonly) PSSpecifier *addAllowanceSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2;
- (void)allowanceDetailControllerDidCancel:(id)arg1;
- (void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2;
- (id)_specifierForAllowance:(id)arg1;
- (void)_didFetchAppInfo:(id)arg1;
- (id)initWithBudgetedIdentifiers:(id)arg1 usageItem:(id)arg2;
- (void)_showAllowanceSetupListController:(id)arg1;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)_allowanceDetailText:(id)arg1;
- (void)_showAllowanceDetailListController:(id)arg1;

@end
