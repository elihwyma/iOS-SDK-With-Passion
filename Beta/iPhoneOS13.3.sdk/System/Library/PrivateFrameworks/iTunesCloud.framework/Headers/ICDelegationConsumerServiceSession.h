/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationConsumerNetService, ICDelegationConsumerServiceProtocolHandler, ICDelegationConsumerServiceRequest, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICDelegationConsumerServiceSession : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_acceptedConnections;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationConsumerNetService *_netService;
    NSMutableArray *_pendingUserIdentities;
    ICDelegationConsumerServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToRequestInfoMap;
    NSObject<OS_dispatch_source> *_timeoutDispatchSource;
    ICDelegationConsumerServiceRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) ICDelegationConsumerServiceRequest *request;
@property (nonatomic, readonly) CDUnknownBlockType responseHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_stop;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleTimeout;
- (void)delegationConsumerNetService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (_Bool)delegationServiceConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;

@end
