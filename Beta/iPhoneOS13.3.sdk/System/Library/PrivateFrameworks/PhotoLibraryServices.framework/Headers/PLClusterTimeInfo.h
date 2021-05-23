/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject

{
    NSCalendar *_calendar;
    double _endOfSameDayTimestamp;
    double _maximumNextDayTimestamp;
    NSDate *_latestUTCDate;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) double endOfSameDayTimestamp;
@property (nonatomic, readonly) double maximumNextDayTimestamp;
@property (retain, nonatomic, readonly) NSDate *latestUTCDate;

- (void)reset;
- (id)initWithCalendar:(id)arg1;
- (void)updateWithUTCDate:(id)arg1 localDate:(id)arg2;
- (_Bool)utcDateBelongsInCluster:(id)arg1;
- (void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2;

@end
