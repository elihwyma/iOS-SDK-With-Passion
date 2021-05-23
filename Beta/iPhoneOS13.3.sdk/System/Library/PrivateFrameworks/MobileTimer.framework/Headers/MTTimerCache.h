/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTTimer, NSMutableArray;

@interface MTTimerCache : NSObject

{
    _Bool _needsUpdate;
    struct os_unfair_lock_s _cacheLock;
    CDUnknownBlockType _updateBlock;
    NSMutableArray *_orderedTimers;
    MTTimer *_nextTimer;
}

@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (retain, nonatomic) MTTimer *nextTimer;
@property (nonatomic) _Bool needsUpdate;
@property (nonatomic) struct os_unfair_lock_s cacheLock;

- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (_Bool)_isUpdateNeeded;
- (void)markNeedsUpdate;
- (void)_getCachedTimersWithCompletion:(CDUnknownBlockType)arg1 doSynchronous:(_Bool)arg2;
- (void)getCachedTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCachedTimersSyncWithCompletion:(CDUnknownBlockType)arg1;

@end
