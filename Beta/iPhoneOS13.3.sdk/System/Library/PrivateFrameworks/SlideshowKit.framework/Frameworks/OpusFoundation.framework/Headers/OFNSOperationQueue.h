/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSOperationQueue.h>

@class NSMutableIndexSet, NSObject, NSPointerArray;

@protocol OS_dispatch_queue;

@interface OFNSOperationQueue : NSOperationQueue

{
    NSObject<OS_dispatch_queue> *_operationsLookupTableQueue;
    NSPointerArray *_operationsLookupTable;
    NSMutableIndexSet *_operationsLookupTableFreeIndices;
}

- (id)init;
- (void)dealloc;
- (void)_setupOperationsLookupTable;
- (void)_setOperationLookupObject:(id)arg1 forKey:(unsigned long long)arg2;
- (id)_operationLookupObjectForKey:(unsigned long long)arg1;
- (void)addOperation:(id)arg1 context:(id)arg2 identifier:(id)arg3 queuePriority:(long long)arg4;
- (void)cancelAllOperationsWithContext:(id)arg1;
- (void)cancelAllOperationsWithIdentifier:(id)arg1;
- (void)cancelAllOperationsWithContext:(id)arg1 andIdentifier:(id)arg2;
- (unsigned long long)addOperation:(id)arg1 withPriority:(long long)arg2;
- (void)cancelSlideshowOperationWithID:(unsigned long long)arg1;

@end
