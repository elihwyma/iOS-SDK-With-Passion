/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@class NSCountedSet, NSString;

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension

{
    struct _opaque_pthread_mutex_t _lock;
    NSCountedSet *_activeOnQueues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)alloc;
+ (void)initialize;
+ (unsigned long long)countOfPurgingQueues;

- (id)init;
- (id)initInternal;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (unsigned long long)countOfPurgingQueues;
- (void)doPurge:(id)arg1 wait:(_Bool)arg2;

@end
