/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@class NSMutableData;

@interface PETAggregateStateStorageInMemory

{
    NSMutableData *_data;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)expand:(unsigned long long)arg1 andRunWithLock:(CDUnknownBlockType)arg2;
- (_Bool)resetLocked;
- (void)saveCorruptState;

@end
