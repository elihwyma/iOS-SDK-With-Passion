/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularDailyGraphView.h>

@class NSArray, NSDate, NSDateInterval, NSNumber;

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView

{
    double _cornerRadius;
    NSArray *_chartPoints;
    NSNumber *_highBPM;
    NSNumber *_lowBPM;
    NSDate *_measurementDate;
    NSDateInterval *_measurementDateDayInterval;
}

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) NSArray *chartPoints;
@property (nonatomic) NSNumber *highBPM;
@property (nonatomic) NSNumber *lowBPM;
@property (retain, nonatomic) NSDate *measurementDate;
@property (retain, nonatomic) NSDateInterval *measurementDateDayInterval;

- (id)init;
- (void)drawGraph:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)loadWithMetadata:(id)arg1;
- (double)_xValueForPointFromChartPoint:(id)arg1 inRect:(struct CGRect)arg2;
- (double)_yValueForPointFromChartPointValue:(id)arg1 betweenHigh:(id)arg2 andLow:(id)arg3 inRect:(struct CGRect)arg4;
- (void)_loadNoDataState;
- (void)_loadLockedState;
- (void)_loadWithMetadata:(id)arg1;
- (void)_updateDailyLabel:(id)arg1 withBPM:(id)arg2;

@end
