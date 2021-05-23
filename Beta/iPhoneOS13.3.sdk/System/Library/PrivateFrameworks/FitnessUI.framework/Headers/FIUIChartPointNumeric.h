/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject

{
    NSDate *_xValue;
    NSNumber *_yValue;
}

@property (copy, nonatomic) NSNumber *yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDate *xValue;
@property (nonatomic, readonly) NSNumber *minYValue;
@property (nonatomic, readonly) NSNumber *maxYValue;

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;

- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

@end
