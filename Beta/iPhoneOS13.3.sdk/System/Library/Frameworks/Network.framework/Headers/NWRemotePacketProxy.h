/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol NWRemotePacketProxyDelegate;

@interface NWRemotePacketProxy : NSObject

{
    unsigned int _receiveWindowPacketCount;
    NSObject<NWRemotePacketProxyDelegate> *_delegate;
    NSMutableArray *_writeRequests;
    struct nw_protocol *_packetProtocol;
    struct nw_protocol *_defaultOutputHandler;
    struct nw_hash_table *_packetHashTable;
}

@property (weak) NSObject<NWRemotePacketProxyDelegate> *delegate;
@property (retain) NSMutableArray *writeRequests;
@property struct nw_protocol *packetProtocol;
@property struct nw_protocol *defaultOutputHandler;
@property struct nw_hash_table *packetHashTable;
@property (nonatomic, readonly) struct nw_protocol *protocol;
@property (nonatomic) unsigned int receiveWindowPacketCount;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (struct nw_protocol *)outputHandlerForPacket:(id)arg1 inbound:(_Bool)arg2;
- (void)setDefaultOutputProtocolHandler:(struct nw_protocol *)arg1;
- (void)setOutputProtocolHandler:(struct nw_protocol *)arg1 local:(id)arg2 remote:(id)arg3 ipProtocol:(unsigned char)arg4;
- (_Bool)receiveRemotePacket:(id)arg1;

@end
