/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateInterval;

@interface _REPeriodOfDay : NSObject

{
    unsigned long long _periodOfDay;
    NSDateInterval *_interval;
}

@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) unsigned long long periodOfDay;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2;

@end
