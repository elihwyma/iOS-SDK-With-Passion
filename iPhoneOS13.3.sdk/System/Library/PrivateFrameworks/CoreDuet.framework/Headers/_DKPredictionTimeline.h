//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, _DKHistogram;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_startDate;
    NSArray *_transitionDates;
    _DKHistogram *_startHistogram;
    _DKHistogram *_endHistogram;
    NSArray *_values;
}

+ (BOOL)supportsSecureCoding;
+ (id)predictionUnavailable;
+ (id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
+ (id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) _DKHistogram *endHistogram; // @synthesize endHistogram=_endHistogram;
@property(retain, nonatomic) _DKHistogram *startHistogram; // @synthesize startHistogram=_startHistogram;
@property(retain, nonatomic) NSArray *transitionDates; // @synthesize transitionDates=_transitionDates;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3;
- (id)valueAtDate:(id)arg1;
@property(readonly, nonatomic) NSDate *endDate;
- (BOOL)isUnavailable;
- (id)initWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3;
- (id)initWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3;

@end

