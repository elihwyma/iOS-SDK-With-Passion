/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class NSDate, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACSimpleRateLimiter : NSObject

{
    unsigned long long _maximum;
    double _timeInterval;
    NSLock *_instanceLock;
    NSMutableArray *_sortedActionDates;
}

@property (readonly) NSDate *rateLimitingStartDate;
@property (retain) NSLock *instanceLock;
@property (retain) NSMutableArray *sortedActionDates;
@property (readonly) unsigned long long maximum;
@property (readonly) double timeInterval;

- (void)locked_removeDatesBefore:(id)arg1;
- (void)locked_addDate:(id)arg1;
- (unsigned long long)locked_indexOfFirstAfter:(id)arg1;
- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (_Bool)reservePerformActionNow;
- (_Bool)isEmptyAfterFlushing;

@end
