/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSOperation.h>

@class NSObject, NSString;

@protocol BRCancellable, OS_dispatch_queue;

@interface BROperation : NSOperation

{
    id _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    id _executionTransation;
    _Bool _finished;
    _Bool _waitForRemoteToBeCancelled;
    _Bool _nonDiscretionary;
}

@property (readonly, getter=isExecuting) _Bool executing;
@property (readonly, getter=isFinished) _Bool finished;
@property (retain, nonatomic) NSObject<BRCancellable> *remoteOperation;
@property (nonatomic) _Bool waitForRemoteToBeCancelled;
@property (nonatomic) _Bool nonDiscretionary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)invalidate;
- (void)cancel;
- (void)start;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_setExecuting:(_Bool)arg1;
- (_Bool)_finishIfCancelled;
- (void)_setRemoteOperation:(id)arg1;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_setFinished:(_Bool)arg1;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (_Bool)finishIfCancelled;
- (id)remoteObject;

@end
