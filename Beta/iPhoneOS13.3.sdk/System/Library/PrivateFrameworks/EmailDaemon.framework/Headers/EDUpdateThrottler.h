/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString;

@interface EDUpdateThrottler : NSObject

{
    struct os_unfair_lock_s _updatesLock;
    NSMutableArray *_unacknowledgedUpdates;
    _Bool _hasChangesSinceLastUpdate;
    NSString *_name;
    double _delayInterval;
    long long _scalingFactor;
    NSDate *_lastUpdateDate;
    NSDate *_lastAcknowledgementDate;
    long long _updateCounter;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double delayInterval;
@property (nonatomic, readonly) long long scalingFactor;
@property (nonatomic) _Bool hasChangesSinceLastUpdate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) NSDate *lastAcknowledgementDate;
@property (nonatomic) long long updateCounter;

+ (struct os_unfair_lock_s)instanceLock;
+ (void)resetAllInstances;
+ (id)instances;
+ (void)_registerInstance:(id)arg1;

- (void)_reset;
- (id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3;
- (unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double *)arg1;
- (id)updateWithBlock:(CDUnknownBlockType)arg1 unacknowledgedUpdatesCount:(unsigned long long *)arg2;
- (id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2;

@end
