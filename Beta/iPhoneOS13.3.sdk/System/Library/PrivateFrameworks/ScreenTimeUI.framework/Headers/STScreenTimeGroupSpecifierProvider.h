/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_usageSummarySpecifier;
    PSSpecifier *_seeAllActivitySpecifier;
}

@property (readonly) PSSpecifier *usageSummarySpecifier;
@property (readonly) PSSpecifier *seeAllActivitySpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)_usageDetailsCoordinator:(id)arg1;
- (void)_showUsageDetailListController:(id)arg1;
- (void)_usageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_displayNameDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_isSharingUsageDataDidChange:(_Bool)arg1;
- (void)_refreshingDidChange:(_Bool)arg1;

@end
