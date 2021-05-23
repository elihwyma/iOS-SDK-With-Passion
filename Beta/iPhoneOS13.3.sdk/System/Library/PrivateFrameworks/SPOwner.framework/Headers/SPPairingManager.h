/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class FMXPCServiceDescription, FMXPCSession;

@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject

{
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
    id <SPPairingManagerXPCProtocol> _proxy;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id <SPPairingManagerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)dealloc;
- (id)remoteInterface;
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;
- (id)userAgentProxy;

@end
