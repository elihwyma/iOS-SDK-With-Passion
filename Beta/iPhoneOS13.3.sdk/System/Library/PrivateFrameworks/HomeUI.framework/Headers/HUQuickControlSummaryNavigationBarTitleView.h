/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/_UINavigationBarTitleView.h>

@class HUQuickControlSummaryView, NSArray;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView

{
    HUQuickControlSummaryView *_summaryView;
    NSArray *_contentConstraints;
}

@property (retain, nonatomic) HUQuickControlSummaryView *summaryView;
@property (retain, nonatomic) NSArray *contentConstraints;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;

@end
