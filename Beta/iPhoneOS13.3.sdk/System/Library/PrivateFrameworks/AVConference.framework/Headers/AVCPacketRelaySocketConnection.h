/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCPacketFilter;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCPacketRelaySocketConnection : NSObject

{
    unsigned char _type;
    _Bool _isDemuxNeeded;
    int _unixSocket;
    _Bool _isConnectedSocket;
    struct sockaddr _remoteIPPort;
    unsigned int _remoteIPPortLength;
    NSObject<OS_dispatch_queue> *_queue;
    char *dataBuffer;
    CDUnknownBlockType _readHandler;
    AVCPacketFilter *_packetFilter;
}

@property (readonly) unsigned char type;
@property _Bool isDemuxNeeded;
@property (copy) CDUnknownBlockType readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (void)dealloc;
- (id)description;
- (int)stop;
- (int)start;
- (void)readyToRead;
- (void)receiveDataOnSocket:(unsigned short)arg1;
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;

@end
