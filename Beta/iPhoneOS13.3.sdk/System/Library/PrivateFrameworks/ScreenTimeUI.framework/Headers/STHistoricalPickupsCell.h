/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STHistoricalUsageViewController, STHorizontallySegmentedView, UILabel;

__attribute__((visibility("hidden")))
@interface STHistoricalPickupsCell : STTableCell

{
    STHistoricalUsageViewController *_historicalUsageViewController;
    STHorizontallySegmentedView *_pickupMetricsView;
    UILabel *_firstUsedAfterPickupLabel;
    NSLayoutConstraint *_bottomConstraint;
}

@property (readonly) STHistoricalUsageViewController *historicalUsageViewController;
@property (readonly) STHorizontallySegmentedView *pickupMetricsView;
@property (readonly) UILabel *firstUsedAfterPickupLabel;
@property (retain) NSLayoutConstraint *bottomConstraint;

- (void)dealloc;
- (id)value;
- (void)setValue:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(_Bool)arg2 numberOfLines:(unsigned long long)arg3;

@end
