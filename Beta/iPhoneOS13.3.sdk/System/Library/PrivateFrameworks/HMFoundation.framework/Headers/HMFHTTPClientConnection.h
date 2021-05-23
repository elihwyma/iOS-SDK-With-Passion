/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFNetAddress, NSMutableArray, NSObject, NSString, _HMFCFHTTPServerConnection;

@protocol HMFHTTPClientConnectionDelegate, OS_dispatch_queue;

@interface HMFHTTPClientConnection

{
    id <HMFHTTPClientConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingRespones;
    _HMFCFHTTPServerConnection *_internal;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSMutableArray *pendingRespones;
@property (nonatomic, readonly) _HMFCFHTTPServerConnection *internal;
@property (nonatomic, readonly) HMFNetAddress *peerAddress;
@property (weak) id <HMFHTTPClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)close;
- (id)initWithConnection:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)shortDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)sendResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
