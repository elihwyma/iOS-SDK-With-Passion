/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class STNoUsageDataView, STUsageGraphViewController, STUsageSummaryTitleView;

__attribute__((visibility("hidden")))
@interface STOverallUsageSummaryCell : STTableCell

{
    STUsageSummaryTitleView *_titleView;
    STUsageGraphViewController *_weekGraphViewController;
    STNoUsageDataView *_noUsageDataView;
}

@property (readonly) STUsageSummaryTitleView *titleView;
@property (readonly) STUsageGraphViewController *weekGraphViewController;
@property (readonly) STNoUsageDataView *noUsageDataView;

- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_setNoUsageDataViewVisibility;

@end
