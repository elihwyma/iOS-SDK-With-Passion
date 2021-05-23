/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface WLKSchedule : NSObject

{
    NSMutableArray *_mutableEvents;
    NSDictionary *_dictionary;
    NSString *_serviceID;
    NSString *_externalServiceID;
    NSString *_channelID;
    NSDate *_startDate;
    NSDate *_endDate;
    NSNumber *_cleanupTime;
    NSDate *_earliestEventDate;
    NSDate *_latestEventDate;
}

@property (copy, nonatomic, readonly) NSString *serviceID;
@property (copy, nonatomic, readonly) NSString *externalServiceID;
@property (copy, nonatomic, readonly) NSString *channelID;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *cleanupTime;
@property (copy, nonatomic, readonly) NSDate *earliestEventDate;
@property (copy, nonatomic, readonly) NSDate *latestEventDate;
@property (copy, nonatomic, readonly) NSArray *events;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (void)prune;
- (_Bool)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3;
- (id)eventForDate:(id)arg1;
- (id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2;
- (id)eventAfterDate:(id)arg1;

@end
