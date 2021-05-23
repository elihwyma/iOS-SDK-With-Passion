/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, NSArray, NSDateFormatter, NSDictionary, NSNumber, UIColor, UILabel;

@interface NTKWellnessRichComplicationChartView : UIView

{
    CLKDevice *_device;
    NSDictionary *_moveChartPoints;
    NSNumber *_maxMoveValue;
    NSDictionary *_exerciseChartPoints;
    NSNumber *_maxExerciseValue;
    NSDictionary *_standChartPoints;
    UIColor *_chartLineColor;
    double _moveChartBottomLineY;
    double _exerciseChartBottomLineY;
    double _standChartBottomLineY;
    NSArray *_chartLineXPositions;
    struct CGGradient *_moveBarGradient;
    UIColor *_moveBarFadedColor;
    struct CGGradient *_exerciseBarGradient;
    UIColor *_exerciseBarFadedColor;
    struct CGGradient *_standBarGradient;
    NSDateFormatter *_hourFormatter;
    UILabel *_midnightHourLabel;
    UILabel *_sixAMHourLabel;
    UILabel *_noonHourLabel;
    UILabel *_sixPMHourLabel;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)_registerForNotifications;
- (id)initForDevice:(id)arg1;
- (void)_createHourFormatter;
- (void)_updateHourLabelsText;
- (id)_timeStringByRemovingSpacesFromTimeString:(id)arg1;
- (void)_currentLocaleChangeOccurred;
- (id)_generateChartPointsForQuantityStatisticsInfo:(id)arg1 withUnit:(id)arg2 accumulateFractionalValues:(_Bool)arg3;
- (id)_generateStandChartPointsForStandHourInfo:(id)arg1;
- (id)_keyForDate:(id)arg1;
- (void)_drawChartsBarsInContext:(struct CGContext *)arg1 lineNumber:(unsigned long long)arg2 xPosition:(double)arg3;
- (double)_movePointRelativeHeightForValue:(double)arg1;
- (double)_exercisePointRelativeHeightForValue:(double)arg1;
- (void)setMoveGraphData:(id)arg1;
- (void)setExerciseGraphData:(id)arg1;
- (void)setStandGraphData:(id)arg1;

@end
