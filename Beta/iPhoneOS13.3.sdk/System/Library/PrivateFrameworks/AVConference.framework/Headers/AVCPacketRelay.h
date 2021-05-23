/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCPacketRelayDriver, NSArray;

@protocol AVCPacketRelayConnectionProtocol, AVCPacketRelayDelegate, OS_dispatch_queue;

@interface AVCPacketRelay : NSObject

{
    AVCPacketRelayDriver *_packetDriver;
    id <AVCPacketRelayDelegate> _delegate;
    NSArray *_connections;
    id <AVCPacketRelayConnectionProtocol> _multiplexedConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) NSArray *connections;
@property (retain) id <AVCPacketRelayConnectionProtocol> multiplexedConnection;
@property (nonatomic) id <AVCPacketRelayDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithConnections:(id)arg1 multiplexedConnection:(id)arg2 error:(id *)arg3;
- (_Bool)isAllConnectionTypeValid:(id)arg1;
- (id)findConnectionToForwardData:(const void *)arg1 size:(int)arg2;
- (int)startAllConnections;
- (_Bool)stopAllConnections;
- (id)initWithConnection:(id)arg1 connection:(id)arg2 error:(id *)arg3;

@end
