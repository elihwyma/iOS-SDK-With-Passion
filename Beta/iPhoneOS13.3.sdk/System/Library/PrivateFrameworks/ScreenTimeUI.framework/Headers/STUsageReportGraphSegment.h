/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface STUsageReportGraphSegment : NSObject

{
    NSNumber *_amount;
    double _amountAsPercentageOfDataPointTotal;
    UIColor *_color;
}

@property (copy, nonatomic) NSNumber *amount;
@property (nonatomic) double amountAsPercentageOfDataPointTotal;
@property (retain, nonatomic) UIColor *color;

- (id)initWithAmount:(id)arg1 amountAsPercentageOfDataPointTotal:(double)arg2 color:(id)arg3;

@end
