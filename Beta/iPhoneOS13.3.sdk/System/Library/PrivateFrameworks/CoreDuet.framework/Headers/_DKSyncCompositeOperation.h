/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncOperation.h>

@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation

{
    _DKSyncCompositeOperation *_parent;
    _Atomic _Bool _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s _lock;
    NSMutableArray *_errors;
}

@property (readonly) NSMutableArray *errors;

- (id)init;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (void)cancel;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (void)endOperation;
- (void)childOperationWasAdded:(id)arg1;
- (void)setReadyToStart:(_Bool)arg1;
- (void)_shutdownOperation;
- (void)childOperation:(id)arg1 didEndWithErrors:(id)arg2;

@end
