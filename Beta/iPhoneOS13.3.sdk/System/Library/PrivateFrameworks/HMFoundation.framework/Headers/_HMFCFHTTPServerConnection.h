/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFNetAddress, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerConnection

{
    id <_HMFCFHTTPServerConnectionDelegate> _delegate;
    HMFNetAddress *_address;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingRequests;
    NSMutableArray *_pendingRespones;
    struct _CFHTTPServerConnection *_internal;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSMutableArray *pendingRespones;
@property (nonatomic, readonly) struct _CFHTTPServerConnection *internal;
@property (weak) id <_HMFCFHTTPServerConnectionDelegate> delegate;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) HMFNetAddress *address;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (_Bool)open;
- (void)close;
- (void)sendResponse:(id)arg1;
- (id)logIdentifier;
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection *)arg1;
- (void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2;
- (void)handleRequest:(id)arg1 bodyReadStream:(struct __CFReadStream *)arg2 eventType:(unsigned long long)arg3;
- (void)_stopReadBody:(id)arg1;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3;
- (void)_handleReceivedRequestRef:(struct _CFHTTPServerRequest *)arg1;
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;

@end
