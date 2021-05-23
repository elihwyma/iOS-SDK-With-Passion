/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView

{
    UISegmentedControl *_segmentedControl;
}

@property (nonatomic, readonly) UISegmentedControl *segmentedControl;

- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;

@end
