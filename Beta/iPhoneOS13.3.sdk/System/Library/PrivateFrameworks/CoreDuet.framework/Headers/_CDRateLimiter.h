/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol OS_dispatch_queue;

@interface _CDRateLimiter : NSObject

{
    NSDate *_lastRecorded;
    long long _balance;
    NSObject<OS_dispatch_queue> *_queue;
    double _period;
    long long _count;
}

@property (readonly) double period;
@property (readonly) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRateLimiter;

- (id)init;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (_Bool)credit;
- (_Bool)debited;
- (void)recordTimeAndRefillIfNeeded;
- (void)resetRateLimitWithTimeStamp:(id)arg1;

@end
