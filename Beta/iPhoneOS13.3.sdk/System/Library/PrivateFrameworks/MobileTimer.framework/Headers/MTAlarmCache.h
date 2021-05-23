/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, NSMutableArray;

@interface MTAlarmCache : NSObject

{
    _Bool _needsUpdate;
    struct os_unfair_lock_s _cacheLock;
    CDUnknownBlockType _updateBlock;
    NSMutableArray *_orderedAlarms;
    MTAlarm *_sleepAlarm;
    MTAlarm *_nextAlarm;
}

@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedAlarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) MTAlarm *nextAlarm;
@property (nonatomic) _Bool needsUpdate;
@property (nonatomic) struct os_unfair_lock_s cacheLock;

- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (_Bool)_isUpdateNeeded;
- (void)_getCachedAlarmsWithCompletion:(CDUnknownBlockType)arg1 doSynchronous:(_Bool)arg2;
- (void)markNeedsUpdate;
- (void)getCachedAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCachedAlarmsSyncWithCompletion:(CDUnknownBlockType)arg1;

@end
