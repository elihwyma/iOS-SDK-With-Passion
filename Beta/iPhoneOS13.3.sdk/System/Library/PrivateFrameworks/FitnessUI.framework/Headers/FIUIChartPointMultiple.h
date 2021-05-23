/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSIndexSet, NSNumber, NSString;

@interface FIUIChartPointMultiple : NSObject

{
    NSDate *_xValue;
    NSIndexSet *_yValue;
}

@property (copy, nonatomic) NSIndexSet *yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDate *xValue;
@property (nonatomic, readonly) NSNumber *minYValue;
@property (nonatomic, readonly) NSNumber *maxYValue;

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
+ (id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2;

@end
