/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class STDailyAverageView, STHorizontallySegmentedView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STDailyAverageSummaryTableViewCell : STTableCell

{
    STDailyAverageView *_dailyAverageView;
    STUsageSummaryTitleView *_titleView;
    STUsageGraphViewController *_usageGraphViewController;
    STHorizontallySegmentedView *_topItemsView;
}

@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STUsageGraphViewController *usageGraphViewController;
@property (readonly) STHorizontallySegmentedView *topItemsView;
@property (readonly) STDailyAverageView *dailyAverageView;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_layoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (id)initWithUsageReport:(id)arg1;

@end
