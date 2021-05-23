/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, PFDispatchQueue;

@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject

{
    PFDispatchQueue *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic unsigned long long _status;
    _Bool _executeOnDealloc;
}

@property _Bool executeOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)_execute;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)cancelBlock;
- (_Bool)executeBlock;
- (void)notifyOnQueue:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (void)waitForBlock;
- (_Bool)blockHasStarted;
- (_Bool)blockHasFinished;
- (_Bool)blockWasCanceled;
- (_Bool)enqueue;
- (_Bool)enqueueWithDelay:(unsigned long long)arg1;
- (_Bool)groupNotify:(id)arg1;
- (_Bool)dequeue;
- (_Bool)tryCancelBlock;
- (void)invoke:(unsigned long long)arg1;
- (unsigned long long)_shouldEnqueue;

@end
