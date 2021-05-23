/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRecorded;
    long long _numberOfRateLimitPolicies;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

@property (retain, nonatomic, readonly) NSDate *lastRecorded;
@property (nonatomic, readonly) long long numOfRateLimitPolicies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)credit;
- (_Bool)debited;
- (void)recordTimeAndRefillIfNeededRaw;
- (id)initWithPeriodToCountMap:(id)arg1;

@end
