/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class BKSProcessAssertion, NSString, SSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source, SSRequestDelegate;

@interface SSRequest : NSObject

{
    long long _backgroundTaskIdentifier;
    _Bool _cancelAfterTaskExpiration;
    id <SSRequestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
    NSObject<OS_dispatch_source> *_backgroundTaskExpirationTimer;
    long long _callState;
    CDUnknownBlockType _completionBlock;
    BKSProcessAssertion *_taskAssertion;
    _Bool _taskAssertionTaken;
    _Bool _usesTaskCompletionAssertions;
}

@property (nonatomic) _Bool shouldCancelAfterTaskExpiration;
@property (weak, nonatomic) id <SSRequestDelegate> delegate;
@property (nonatomic) _Bool usesTaskCompletionAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_allowMultipleCallbacks;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)start;
- (void)disconnect;
- (void)_endBackgroundTask;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_shutdownRequest;
- (void)_beginBackgroundTask;
- (void)_startWithMessageID:(long long)arg1 messageBlock:(CDUnknownBlockType)arg2;
- (id)_initSSRequest;
- (void)_shutdownRequestWithMessageID:(long long)arg1;
- (void)__beginBackgroundTask;
- (void)__endBackgroundTask;
- (void)_cancelBackgroundTaskExpirationTimer;
- (void)_expireBackgroundTask;

@end
