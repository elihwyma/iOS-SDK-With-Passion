/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HKAccessibilitySpan : NSObject

{
    NSString *_dataSeriesTitle;
    long long _dataSeriesType;
    NSNumber *_dataComprehensionMinYValue;
    NSNumber *_dataComprehensionMaxYValue;
    NSString *_dataComprehensionUnitForChart;
}

@property (nonatomic, readonly) NSString *dataSeriesTitle;
@property (nonatomic, readonly) long long dataSeriesType;
@property (nonatomic, readonly) NSNumber *dataComprehensionMinYValue;
@property (nonatomic, readonly) NSNumber *dataComprehensionMaxYValue;
@property (nonatomic, readonly) NSString *dataComprehensionUnitForChart;

- (id)description;
- (id)initWithTitle:(id)arg1 seriesType:(long long)arg2 dataComprehensionMinYValue:(id)arg3 dataComprehensionMaxYValue:(id)arg4 dataComprehensionUnitForChart:(id)arg5;

@end
