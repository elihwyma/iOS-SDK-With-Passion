/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDNanoSyncStore, NSCalendar, NSDate, NSMutableArray, NSUUID, _HKExpiringCompletionTimer;

@interface HDNanoSyncRestoreSession : NSObject

{
    _Bool _finished;
    NSUUID *_sessionUUID;
    NSDate *_startDate;
    NSCalendar *_calendar;
    HDNanoSyncStore *_nanoSyncStore;
    long long _sequenceNumber;
    NSMutableArray *_completionHandlers;
    _HKExpiringCompletionTimer *_timer;
}

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) _HKExpiringCompletionTimer *timer;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (nonatomic) long long sequenceNumber;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishWithError:(id)arg1;
- (id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2;
- (void)scheduleTimeoutWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end
