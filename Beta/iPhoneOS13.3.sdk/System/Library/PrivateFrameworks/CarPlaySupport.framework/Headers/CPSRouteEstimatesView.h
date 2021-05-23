/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPSLabeledValueView, NSCalendar, NSDateComponentsFormatter, NSDateFormatter, NSMeasurement, NSTimeZone;

@interface CPSRouteEstimatesView : UIView

{
    double _estimatedTimeRemaining;
    unsigned long long _timeRemainingColor;
    CPSLabeledValueView *_timeRemainingView;
    unsigned long long _tripEstimateStyle;
    CPSLabeledValueView *_arrivalTimeView;
    CPSLabeledValueView *_distanceRemainingView;
    NSDateFormatter *_arrivalDateFormatter;
    NSDateComponentsFormatter *_remainingTimeFormatter;
    NSCalendar *_calendar;
}

@property (nonatomic, readonly) CPSLabeledValueView *arrivalTimeView;
@property (nonatomic, readonly) CPSLabeledValueView *distanceRemainingView;
@property (nonatomic, readonly) NSDateFormatter *arrivalDateFormatter;
@property (nonatomic, readonly) NSDateComponentsFormatter *remainingTimeFormatter;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (copy, nonatomic) NSTimeZone *arrivalTimeZone;
@property (nonatomic) double estimatedTimeRemaining;
@property (copy, nonatomic) NSMeasurement *distanceRemaining;
@property (nonatomic) unsigned long long timeRemainingColor;
@property (nonatomic, readonly) CPSLabeledValueView *timeRemainingView;
@property (nonatomic) unsigned long long tripEstimateStyle;

- (id)initWithStyle:(unsigned long long)arg1;
- (void)_updateTextColors;
- (id)_defaultColorForStyle:(unsigned long long)arg1;
- (id)_timeRemainingColorForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
- (void)_setArrivalTime:(id)arg1;
- (void)_setTimeRemaining:(id)arg1 units:(id)arg2;
- (void)_setDistanceRemaining:(id)arg1 units:(id)arg2;
- (id)_greenColorForStyle:(unsigned long long)arg1;
- (id)_orangeColorForStyle:(unsigned long long)arg1;
- (id)_redColorForStyle:(unsigned long long)arg1;

@end
