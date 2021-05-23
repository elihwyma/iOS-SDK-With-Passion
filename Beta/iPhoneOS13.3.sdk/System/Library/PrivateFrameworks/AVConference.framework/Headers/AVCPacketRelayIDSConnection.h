/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCPacketFilter, IDSDatagramChannel, IDSService;

__attribute__((visibility("hidden")))
@interface AVCPacketRelayIDSConnection : NSObject

{
    unsigned char _type;
    CDUnknownBlockType _readHandler;
    _Bool _isDemuxNeeded;
    _Bool _isResumed;
    IDSDatagramChannel *_datagramChannel;
    IDSService *_packetRelayService;
    AVCPacketFilter *_packetFilter;
}

@property _Bool isResumed;
@property (readonly) unsigned char type;
@property _Bool isDemuxNeeded;
@property (copy) CDUnknownBlockType readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (void)dealloc;
- (int)stop;
- (int)start;
- (void)readyToRead;
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithIDSSocketDescriptor:(unsigned short)arg1;
- (id)initWithIDSDestination:(id)arg1;

@end
