/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, _DKHistogram;

@interface _DKPredictionTimeline : NSObject

{
    NSDate *_startDate;
    NSArray *_transitionDates;
    _DKHistogram *_startHistogram;
    _DKHistogram *_endHistogram;
    NSArray *_values;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *transitionDates;
@property (nonatomic, readonly) NSDate *endDate;
@property (retain, nonatomic) _DKHistogram *startHistogram;
@property (retain, nonatomic) _DKHistogram *endHistogram;

+ (_Bool)supportsSecureCoding;
+ (id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
+ (id)predictionUnavailable;
+ (id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;
- (id)initWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
- (_Bool)isUnavailable;
- (id)valueAtDate:(id)arg1;
- (id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;

@end
