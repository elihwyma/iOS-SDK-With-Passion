/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HMFNetAddress, NSObject, NSString;

@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, OS_dispatch_queue;

@interface HAPHTTPClient : HMFObject

{
    struct HTTPClientPrivate *_httpClient;
    _Bool _invalidated;
    _Bool _invalidateRequested;
    NSString *_dnsName;
    long long _port;
    NSObject<OS_dispatch_queue> *_queue;
    id <HAPHTTPClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <HAPHTTPClientDebugDelegate> _debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
}

@property (copy, nonatomic) NSString *dnsName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <HAPHTTPClientDelegate> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id <HAPHTTPClientDebugDelegate> debugDelegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue;
@property (nonatomic) _Bool invalidateRequested;
@property (nonatomic, getter=isInvalidated) _Bool invalidated;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) HMFNetAddress *peerAddress;
@property (nonatomic, readonly) NSString *peerEndpointDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)invalidate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)logIdentifier;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (_Bool)enableUAPSessionSecurityWithReadKey:(unsigned char [32])arg1 writeKey:(unsigned char [32])arg2 error:(id *)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(_Bool)arg3 queue:(id)arg4;
- (int)_initializeCoreUtilsHTTPClientWithPort:(long long)arg1 withEventsEnabled:(_Bool)arg2;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 activity:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id *)arg2;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id *)arg2;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_debugDelegateRespondsToSelector:(SEL)arg1;

@end
