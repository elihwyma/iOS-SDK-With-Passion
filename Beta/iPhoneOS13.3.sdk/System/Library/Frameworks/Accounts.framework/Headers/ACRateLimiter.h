/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ACRateLimiter : NSObject

{
    _Bool _isVacuumInProgress;
    unsigned long long _maximum;
    double _timeInterval;
    NSObject<OS_dispatch_queue> *_instanceQueue;
    NSObject<OS_dispatch_queue> *_vacuumQueue;
    NSMutableDictionary *_keyToSimpleRateLimiter;
    double _vacuumTimeInterval;
    NSDate *_nextVacuumDate;
}

@property (readonly) NSObject<OS_dispatch_queue> *instanceQueue;
@property (readonly) NSObject<OS_dispatch_queue> *vacuumQueue;
@property (retain) NSMutableDictionary *keyToSimpleRateLimiter;
@property (readonly) double vacuumTimeInterval;
@property _Bool isVacuumInProgress;
@property (retain) NSDate *nextVacuumDate;
@property (readonly) unsigned long long maximum;
@property (readonly) double timeInterval;

- (id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (id)simpleRateLimiterForKey:(id)arg1;
- (void)vacuumIfNeeded;
- (void)_vacuumQueue_vacuum;
- (_Bool)_vacuumQueue_vacuumKey:(id)arg1;
- (_Bool)reservePerformActionForKey:(id)arg1;

@end
