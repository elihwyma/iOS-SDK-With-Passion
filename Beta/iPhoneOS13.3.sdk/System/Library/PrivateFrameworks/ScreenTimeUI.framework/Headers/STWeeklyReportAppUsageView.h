/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, STUsageReport, UILabel, UIStackView;

@interface STWeeklyReportAppUsageView : UIView

{
    UILabel *_titleLabel;
    UIStackView *_appImageStackView;
    STUsageReport *_report;
    NSMutableArray *_topEightImageItems;
    NSMutableDictionary *_dimensionByUsageItem;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *appImageStackView;
@property (retain, nonatomic) STUsageReport *report;
@property (retain, nonatomic) NSMutableArray *topEightImageItems;
@property (retain, nonatomic) NSMutableDictionary *dimensionByUsageItem;

- (id)initWithUsageReport:(id)arg1 useVibrancy:(_Bool)arg2;
- (id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2;
- (void)_didFetchIcon:(id)arg1;

@end
