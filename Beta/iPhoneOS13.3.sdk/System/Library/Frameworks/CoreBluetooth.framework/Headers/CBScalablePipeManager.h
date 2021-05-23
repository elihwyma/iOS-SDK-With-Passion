/*
 Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSHashTable, NSMutableSet, NSSet;

@protocol CBScalablePipeManagerDelegate;

@interface CBScalablePipeManager

{
    NSMutableSet *_identifiers;
    struct {
        unsigned int didRegisterEndpoint:1;
        unsigned int didUnregisterEndpoint:1;
        unsigned int pipeDidConnect:1;
        unsigned int pipeDidDisconnect:1;
    } _delegateFlags;
    id <CBScalablePipeManagerDelegate> _delegate;
    NSHashTable *_pipes;
}

@property (retain, nonatomic, readonly) NSHashTable *pipes;
@property (weak, nonatomic) id <CBScalablePipeManagerDelegate> delegate;
@property (retain, nonatomic, readonly) NSSet *identifiers;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)unregisterEndpoint:(id)arg1;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 options:(id)arg4;
- (id)sharedPairingAgent;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)orphanPipes;
- (id)pipeForName:(id)arg1 identifier:(id)arg2;
- (void)handleEndpointAdded:(id)arg1;
- (void)handleEndpointRemoved:(id)arg1;
- (void)handlePipeConnected:(id)arg1;
- (void)handlePipeDisconnected:(id)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 requireEncryption:(_Bool)arg5;
- (void)unregisterAllEndpoints;
- (void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4;
- (void)setLinkRequirementsForPeer:(id)arg1 withClientName:(id)arg2 packetsPerSecond:(unsigned int)arg3 inputBytesPerSecond:(unsigned int)arg4 outputBytesPerSecond:(unsigned int)arg5;
- (void)setLinkRequirementsForPeerWithLatency:(id)arg1 latencyInMs:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4;

@end
