/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2IKESAConfiguration, NEIKEv2Transport, NEIPSecSASession, NSMutableArray, NSString;

@protocol NEIKEv2ListenerDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue, OS_nw_listener;

@interface NEIKEv2Listener : NSObject

{
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NEIKEv2IKESAConfiguration *_ikeConfig;
    NEIPSecSASession *_saSession;
    NSString *_kernelSASessionName;
    NSObject<OS_nw_listener> *_listener;
    NSMutableArray *_sessionsBeforeAuth;
    NEIKEv2Transport *_transport;
    id <NEIKEv2ListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <NEIKEv2PacketDelegate> _packetDelegate;
}

@property (retain, nonatomic) NEIKEv2IKESAConfiguration *ikeConfig;
@property (retain, nonatomic) NEIPSecSASession *saSession;
@property (retain, nonatomic) NSString *kernelSASessionName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (retain, nonatomic) NSObject<OS_nw_listener> *listener;
@property (retain, nonatomic) NSMutableArray *sessionsBeforeAuth;
@property (retain, nonatomic) NEIKEv2Transport *transport;
@property (weak, nonatomic) id <NEIKEv2ListenerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id <NEIKEv2PacketDelegate> packetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (_Bool)handleNewConnection:(id)arg1;
- (void)requestConfigurationForSession:(id)arg1 sessionConfig:(id)arg2 childConfig:(id)arg3 validateAuthBlock:(CDUnknownBlockType)arg4 responseBlock:(CDUnknownBlockType)arg5;
- (void)receivePacket:(id)arg1;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 kernelSASessionName:(id)arg3 listenerUDPPort:(id)arg4 listenerInterface:(id)arg5 listenerQueue:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 kernelSASessionName:(id)arg3 packetDelegate:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7;
- (void)reportError:(int)arg1;
- (void)sessionFailedBeforeRequestingConfiguration:(id)arg1;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 saSession:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerInterface:(id)arg4 listenerQueue:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 listenerUDPPort:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)initWithListenerIKEConfig:(id)arg1 kernelSASessionName:(id)arg2 packetDelegate:(id)arg3 listenerQueue:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;

@end
