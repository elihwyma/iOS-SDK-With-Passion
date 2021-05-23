/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKSelectedRangeFormatter, HKUIMetricColors, HKValueRange, NSArray, NSString, UIFont, UILabel, UIStackView;

@protocol HKCurrentValueViewDataSourceValueRangeFormatter;

@interface HKInteractiveChartAnnotationViewDataSource : NSObject

{
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKUIMetricColors *_metricColors;
    NSArray *_annotationLabels;
    long long _timeScope;
    HKValueRange *_lastDateRange;
    UIStackView *_dateStack;
    UILabel *_upperDateLabel;
    UILabel *_lowerDateLabel;
    UILabel *_dividerDateLabel;
    NSString *_lastUpperDateString;
    NSString *_lastLowerDateString;
    NSString *_lastCombinedDateString;
    UIFont *_majorFont;
    UIFont *_minorFont;
    id <HKCurrentValueViewDataSourceValueRangeFormatter> _dateRangeFormatter;
}

@property (retain, nonatomic) NSArray *annotationLabels;
@property (nonatomic) long long timeScope;
@property (retain) HKValueRange *lastDateRange;
@property (retain, nonatomic) UIStackView *dateStack;
@property (retain, nonatomic) UILabel *upperDateLabel;
@property (retain, nonatomic) UILabel *lowerDateLabel;
@property (retain, nonatomic) UILabel *dividerDateLabel;
@property (retain, nonatomic) NSString *lastUpperDateString;
@property (retain, nonatomic) NSString *lastLowerDateString;
@property (retain, nonatomic) NSString *lastCombinedDateString;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (retain, nonatomic) id <HKCurrentValueViewDataSourceValueRangeFormatter> dateRangeFormatter;
@property (nonatomic, readonly) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (_Bool)showSeparators;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (void)_buildDateLabels;
- (_Bool)_isMultiSelectionDateRange;
- (void)_updateDateText;
- (id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2 dateRangeFormatter:(id)arg3;
- (void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end
