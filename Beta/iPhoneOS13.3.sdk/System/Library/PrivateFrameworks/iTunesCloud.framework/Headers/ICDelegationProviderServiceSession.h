/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegationProviderNetService, ICDelegationProviderServiceProtocolHandler, ICDelegationServiceConnection, ICRequestContext, ICUserIdentityStore, NSArray, NSMutableDictionary, NSString;

@protocol ICDelegationProviderServiceSessionDelegate, OS_dispatch_queue;

@interface ICDelegationProviderServiceSession : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICDelegationServiceConnection *_connection;
    id <ICDelegationProviderServiceSessionDelegate> _delegate;
    ICDelegationProviderServiceProtocolHandler *_protocolHandler;
    NSMutableDictionary *_sessionIDToStreamContext;
    long long _state;
    NSArray *_delegationAccountUUIDs;
    ICDelegationProviderNetService *_netService;
    ICRequestContext *_requestContext;
    NSArray *_userIdentities;
    ICUserIdentityStore *_userIdentityStore;
}

@property (weak, nonatomic) id <ICDelegationProviderServiceSessionDelegate> delegate;
@property (copy, nonatomic, readonly) NSArray *delegationAccountUUIDs;
@property (nonatomic, readonly) ICDelegationProviderNetService *netService;
@property (copy, nonatomic, readonly) ICRequestContext *requestContext;
@property (copy, nonatomic, readonly) NSArray *userIdentities;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)start;
- (void)_finishWithError:(id)arg1;
- (id)initWithUserIdentities:(id)arg1 userIdentityStore:(id)arg2 requestContext:(id)arg3 netService:(id)arg4 delegationAccountUUIDs:(id)arg5;
- (void)delegationServiceConnectionDidClose:(id)arg1;
- (void)delegationServiceConnection:(id)arg1 didEncouterError:(id)arg2;
- (void)_startDelegation;
- (void)_handleStartDelegationResponse:(id)arg1;

@end
