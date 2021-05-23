/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STShowMoreUsageGroupSpecifierProvider.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

{
    NSDictionary *_allowancesByActiveBudgetedIdentifier;
    unsigned long long _selectedItemType;
}

@property (copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier;
@property (nonatomic) unsigned long long selectedItemType;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)_allowancesByIdentifierDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)showMostUsedDetailListController:(id)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (void)toggleSelectedItemType:(id)arg1;
- (void)reloadMostUsedSpecifiers;
- (void)loadActiveBudgetedIdentifiers;
- (id)getUsageItem:(id)arg1;
- (id)allowanceIconForUsageItem:(id)arg1;

@end
