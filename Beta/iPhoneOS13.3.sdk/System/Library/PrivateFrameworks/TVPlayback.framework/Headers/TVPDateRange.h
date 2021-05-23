/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface TVPDateRange : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    double _durationInSeconds;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double durationInSeconds;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (_Bool)containsDate:(id)arg1;
- (id)dateRangeByIntersectingDateRange:(id)arg1;

@end
