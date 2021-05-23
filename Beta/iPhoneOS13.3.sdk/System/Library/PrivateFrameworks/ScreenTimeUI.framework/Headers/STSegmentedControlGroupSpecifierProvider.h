/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

__attribute__((visibility("hidden")))
@interface STSegmentedControlGroupSpecifierProvider : STUsageGroupSpecifierProvider

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)_selectedSegmentIndexChanged:(id)arg1;
- (void)_selectedDayDidChange:(id)arg1;

@end
