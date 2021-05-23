/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/Swift-Protocol.h>

@class NSDate, NSNumber;

@protocol FIUIChartPoint <Swift>

@property (copy, nonatomic) NSDate *xValue;
@property (copy, nonatomic) id yValue;
@property (nonatomic, readonly) NSNumber *minYValue;
@property (nonatomic, readonly) NSNumber *maxYValue;

@end
