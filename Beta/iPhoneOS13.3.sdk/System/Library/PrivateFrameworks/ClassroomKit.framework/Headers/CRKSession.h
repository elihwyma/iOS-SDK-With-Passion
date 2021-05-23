/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CATRemoteTransport, CATStateMachine, CATTransport, CRKRemoteEndpoint, NSString;

@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject

{
    CATStateMachine *mFSM;
    CATRemoteTransport *mTransport;
    double mCurrentBackoffInterval;
    _Bool _allowUntrustedConnections;
    _Bool _requiresBeacon;
    id <CRKSessionDelegate> _delegate;
    CRKRemoteEndpoint *_endpoint;
    id <CRKGrowthFunction> _backoffGrowthFunction;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    double _failedConnectionRetryInterval;
}

@property (nonatomic, readonly) id <CRKGrowthFunction> backoffGrowthFunction;
@property (retain, nonatomic) CATStateMachine *stateMachine;
@property (retain, nonatomic) CATTransport *transport;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) double willLoseBeaconWarningTimeout;
@property (nonatomic) double failedConnectionRetryInterval;
@property (weak, nonatomic) id <CRKSessionDelegate> delegate;
@property (readonly) CRKRemoteEndpoint *endpoint;
@property (nonatomic, readonly) _Bool allowUntrustedConnections;
@property (nonatomic) _Bool requiresBeacon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithEndpoint:(id)arg1;
- (void)connect;
- (void)didConnect;
- (void)rejected;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (void)transportDidConnect:(id)arg1;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)registerDefaults;
- (void)foundBeacon;
- (void)lostBeacon;
- (void)enterOutOfRange;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostConnection;
- (void)enterNoNetwork;
- (void)enterBackoffCanConnect;
- (void)backoffDidFinish;
- (void)exitBackoffCanConnect;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectable;
- (void)tryConnecting;
- (void)failedToConnect;
- (void)resetBackoff;
- (void)cancelConnectionAttempt;
- (void)delegateConnected;
- (void)delegateDidLoseBeacon;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (id)studentSocketOptions;

@end
