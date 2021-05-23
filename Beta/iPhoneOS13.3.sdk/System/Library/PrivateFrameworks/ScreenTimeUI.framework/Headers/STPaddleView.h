/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIView.h>

@class NSDateFormatter, NSDateIntervalFormatter, STUsageReportGraphDataPoint, UILabel;

__attribute__((visibility("hidden")))
@interface STPaddleView : UIView

{
    STUsageReportGraphDataPoint *_dataPoint;
    UIView *_backgroundView;
    UILabel *_dayLabel;
    UILabel *_dateTimeLabel;
    UILabel *_usageLabel;
    NSDateIntervalFormatter *_hourIntervalDateFormatter;
    NSDateFormatter *_weekdayDateFormatter;
    NSDateFormatter *_monthDateFormatter;
}

@property (readonly) UIView *backgroundView;
@property (readonly) UILabel *dayLabel;
@property (readonly) UILabel *dateTimeLabel;
@property (readonly) UILabel *usageLabel;
@property (readonly) NSDateIntervalFormatter *hourIntervalDateFormatter;
@property (readonly) NSDateFormatter *weekdayDateFormatter;
@property (readonly) NSDateFormatter *monthDateFormatter;
@property (retain, nonatomic) STUsageReportGraphDataPoint *dataPoint;

- (id)init;

@end
