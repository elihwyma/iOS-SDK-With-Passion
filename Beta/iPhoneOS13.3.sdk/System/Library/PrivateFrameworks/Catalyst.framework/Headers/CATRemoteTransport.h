/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATTransport.h>

@class CATRemoteConnection, NSMutableDictionary, NSString;

@protocol CATRemoteTransportDelegate;

@interface CATRemoteTransport : CATTransport

{
    CATRemoteConnection *mConnection;
    NSMutableDictionary *mOperationByUUID;
    _Bool mConnectionHasOpened;
    id <CATRemoteTransportDelegate> _remoteTransportDelegate;
}

@property (weak, nonatomic) id <CATRemoteTransportDelegate> remoteTransportDelegate;
@property (nonatomic, readonly) struct __SecTrust *peerTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (void)createRemoteTransportPairWithTransport:(id *)arg1 andTransport:(id *)arg2;

- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)suspendConnection;
- (void)resumeConnection;
- (void)connectionDidClose:(id)arg1;
- (void)invalidateConnection;
- (id)initWithRemoteConnection:(id)arg1;
- (void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)connectionWillSecure:(id)arg1;
- (void)connectionDidSecure:(id)arg1;
- (void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (id)operationToSendMessage:(id)arg1;
- (void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2;

@end
