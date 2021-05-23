/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

{
    PSSpecifier *_usageSummaryGraphSpecifier;
    PSSpecifier *_weeklyTotalSpecifier;
}

@property (retain, nonatomic) PSSpecifier *usageSummaryGraphSpecifier;
@property (retain, nonatomic) PSSpecifier *weeklyTotalSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)_specifierIdentifierDidChange:(id)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_refreshingDidChange:(_Bool)arg1;
- (void)_headerButtonPressed:(id)arg1;
- (id)_weeklyTotal:(id)arg1;
- (void)_lastUpdatedDateDidChangeFrom:(id)arg1 to:(id)arg2;

@end
