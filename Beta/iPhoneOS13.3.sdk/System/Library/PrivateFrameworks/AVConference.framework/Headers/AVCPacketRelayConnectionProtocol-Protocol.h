/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class AVCPacketFilter;

@protocol AVCPacketRelayConnectionProtocol

@property (readonly) unsigned char type;
@property _Bool isDemuxNeeded;
@property (copy) CDUnknownBlockType readHandler;
@property (retain) AVCPacketFilter *packetFilter;

- (unsigned short)stop;
- (unsigned short)start;
- (unsigned short)readyToRead;
- (unsigned short)sendData:size:error: /* Error: Ran out of types for this method. */;

@end
