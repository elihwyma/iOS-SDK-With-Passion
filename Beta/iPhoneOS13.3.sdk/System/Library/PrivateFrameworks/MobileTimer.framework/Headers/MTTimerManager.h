/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTMetrics, MTTimerCache, MTTimerManagerExportedObject, MTXPCConnectionProvider, NSNotificationCenter, NSString;

@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject

{
    MTTimerManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTTimerCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <MTTimerManagerIntentSupport> timerManager;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id notificationObject;

+ (double)defaultDuration;
+ (void)warmUp;
+ (void)setDefaultDuration:(double)arg1;

- (id)init;
- (void)dealloc;
- (void)checkIn;
- (id)initWithMetrics:(id)arg1;
- (void)reconnect;
- (id)timers;
- (id)nextTimer;
- (id)addTimer:(id)arg1;
- (id)updateTimer:(id)arg1;
- (id)removeTimer:(id)arg1;
- (id)currentTimer;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)_updateTimer:(id)arg1 doSynchronous:(_Bool)arg2;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (id)_validateCanStartTimer:(id)arg1;
- (id)_runningTimerFromCurrentTimer:(id)arg1 withDuration:(double)arg2;
- (id)timersSync;
- (id)getCurrentTimerSync;
- (_Bool)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)stopCurrentTimer;
- (id)pauseCurrentTimer;
- (id)resumeCurrentTimer;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (_Bool)startCurrentTimerWithDurationSync:(double)arg1;
- (_Bool)stopCurrentTimerSync;
- (_Bool)pauseCurrentTimerSync;
- (_Bool)resumeCurrentTimerSync;

@end
