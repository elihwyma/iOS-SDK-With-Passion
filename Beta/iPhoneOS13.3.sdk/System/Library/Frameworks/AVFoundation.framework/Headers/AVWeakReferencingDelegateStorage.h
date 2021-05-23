/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSString;

@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject

{
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic, readonly) id delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)_delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)_collectUncollectables;
- (void)getRetainedDelegate:(id *)arg1 retainedDelegateQueue:(id *)arg2;
- (void)_setDelegateViaWeakReference:(id)arg1;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2;

@end
