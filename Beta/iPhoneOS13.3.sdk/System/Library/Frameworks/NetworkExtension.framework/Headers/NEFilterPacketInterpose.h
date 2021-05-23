/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEFilterPacketContext, NEFilterPacketProvider, NSUUID;

@protocol OS_nw_interface;

@interface NEFilterPacketInterpose : NSObject

{
    struct os_unfair_lock_s _lock;
    struct channel *_channel;
    struct channel_attr *_attributes;
    int _channel_fd;
    unsigned short _slot_size;
    struct __slot_desc *_rx_last_slot;
    struct interpose_frame _frame_buffer;
    struct interpose_frame *_current_frame;
    struct channel_ring_desc *_rx_ring_ingress;
    struct channel_ring_desc *_tx_ring_ingress;
    struct channel_ring_desc *_rx_ring_egress;
    struct channel_ring_desc *_tx_ring_egress;
    NEFilterPacketProvider *_provider;
    NSObject<OS_nw_interface> *_interface;
    NEFilterPacketContext *_context;
    _Bool _input_suspended;
    unsigned int _nexusPort;
    unsigned int _keyLength;
    NSUUID *_flowId;
    NSUUID *_nexusInstance;
    void *_key;
    void *_input_source;
}

@property (retain) NSUUID *flowId;
@property (retain) NSUUID *nexusInstance;
@property unsigned int nexusPort;
@property void *key;
@property unsigned int keyLength;
@property void *input_source;
@property _Bool input_suspended;

- (void)dealloc;
- (id)description;
- (void)close;
- (_Bool)createChannel;
- (void)close:(_Bool)arg1;
- (void)freePacket:(id)arg1;
- (struct interpose_frame *)allocateFrame:(struct interpose_frame *)arg1;
- (void)deallocateFrame:(struct interpose_frame *)arg1;
- (id)initWithInterface:(id)arg1 flowId:(unsigned char [16])arg2 nexusInstance:(unsigned char [16])arg3 nexusPort:(unsigned int)arg4 key:(void *)arg5 keyLength:(unsigned int)arg6 provider:(id)arg7;
- (_Bool)matchFlow:(unsigned char [16])arg1 flowId:(unsigned char [16])arg2;
- (id)delayCurrentPacket;
- (void)allowPacket:(id)arg1;

@end
