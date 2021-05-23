/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NWAddressEndpoint, NWInterface;

@protocol NEIKEv2PacketDelegate, OS_dispatch_queue, OS_nw_connection;

@interface NEIKEv2Transport : NSObject

{
    _Bool _connected;
    _Bool _cancelled;
    NWAddressEndpoint *_local;
    NWAddressEndpoint *_remote;
    unsigned long long _transportType;
    id <NEIKEv2PacketDelegate> _packetDelegate;
    NSObject<OS_nw_connection> *_connection;
    NWInterface *_interface;
    NSMutableArray *_connectedBlocks;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSMutableArray *_clients;
}

@property (weak) id <NEIKEv2PacketDelegate> packetDelegate;
@property unsigned long long transportType;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NWAddressEndpoint *local;
@property (retain) NWAddressEndpoint *remote;
@property (retain) NWInterface *interface;
@property (readonly) unsigned short port;
@property (retain, nonatomic) NSMutableArray *connectedBlocks;
@property _Bool connected;
@property _Bool cancelled;
@property (retain) NSObject<OS_dispatch_queue> *receiveQueue;
@property (retain) NSMutableArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 queue:(id)arg6 socketGetBlock:(CDUnknownBlockType)arg7 packetDelegate:(id)arg8;
+ (id)createTransportWithConnection:(id)arg1 queue:(id)arg2;
+ (id)stringForTransport:(unsigned long long)arg1;
+ (id)copyExistingTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 packetDelegate:(id)arg6;

- (id)init;
- (void)dealloc;
- (void)waitForTransport:(CDUnknownBlockType)arg1;
- (void)addClient:(id)arg1 wildcard:(_Bool)arg2 delegate:(id)arg3;
- (void)cancelClient:(id)arg1 shouldInvalidate:(_Bool)arg2;
- (void)disableWildcardForClient:(id)arg1;
- (_Bool)sendData:(id)arg1 sendCompletionHandler:(CDUnknownBlockType)arg2;
- (void)readOnConnection;
- (void)callConnectedBlocks;
- (_Bool)setupUDPConnectionToRemote:(id)arg1 local:(id)arg2 localPort:(unsigned short)arg3 socketGetBlock:(CDUnknownBlockType)arg4;
- (void)receivePacketData:(id)arg1;
- (_Bool)sendPacket:(id)arg1;

@end
