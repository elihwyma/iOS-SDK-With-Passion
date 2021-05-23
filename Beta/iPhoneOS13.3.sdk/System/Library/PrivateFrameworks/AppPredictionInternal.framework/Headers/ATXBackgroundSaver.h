/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    _PASLock *_lock;
}

- (id)init;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)scheduleSave;
- (void)scheduleSaveImmediately;
- (void)_cancelSaveTimerWithLockWitness:(id)arg1;
- (void)_cancelSaveTimer;

@end
