/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;

@protocol OS_dispatch_queue;

@interface ISObservable : NSObject

{
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    unsigned long long _currentChange;
    _Bool _isEnumeratingObservers;
    NSObject<OS_dispatch_queue> *_observersQueue;
    _Bool _observersQueue_shouldCopyChangeObserversOnWrite;
    NSMapTable *_observersQueue_changeObserversWithContexts;
    _Bool _hasObservers;
}

@property (nonatomic, readonly) _Bool hasObservers;

- (id)init;
- (void)_willChange;
- (void)_didChange;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (id)mutableChangeObject;
- (void)_observersQueue_copyChangeObserversForWriteIfNeeded;
- (void)willPerformChanges;
- (void)didPerformChanges;
- (void)_publishChanges;
- (void)didPublishChanges;
- (void)_applyPendingChanges;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)signalChange:(unsigned long long)arg1;
- (void)hasObserversDidChange;
- (void)_setHasObservers:(_Bool)arg1;

@end
