/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol WBDatabaseLockAcquisitorDelegate;

@interface WBDatabaseLockAcquisitor : NSObject

{
    NSTimer *_timer;
    Class _webBookmarkCollectionClass;
    _Bool _lockAcquired;
    long long _maxRetryCount;
    long long _retryCount;
    id <WBDatabaseLockAcquisitorDelegate> _delegate;
}

@property (weak, nonatomic) id <WBDatabaseLockAcquisitorDelegate> delegate;

- (void)dealloc;
- (void)_stopTimer;
- (void)releaseLock;
- (id)initWithWebBookmarkCollectionClass:(Class)arg1;
- (void)acquireLockWithTimeout:(double)arg1;
- (void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (_Bool)_attemptToLockSyncAndNotifyDelegateOnFailure:(_Bool)arg1;
- (void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)_retryTimerFired:(id)arg1;

@end
