/*
 Image: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
 */

#import <Foundation/NSObject.h>

@class AVCVideoStream, NSString;

@interface APEndpointStreamScreenAVCWrapper : NSObject

{
    int _clientPID;
    AVCVideoStream *_avcVideoStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)streamDidStop:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (id)initWithClientPID:(struct __CFNumber *)arg1;
- (id)socketDictionaryWithLocalAddress:(struct OpaqueAPSNetworkAddress *)arg1 remoteAddress:(struct OpaqueAPSNetworkAddress *)arg2 rtpSourcePort:(unsigned short)arg3 isSharedSocket:(_Bool)arg4;
- (id)createVideoStreamConfigWithDirection:(long long)arg1 localAddress:(struct OpaqueAPSNetworkAddress *)arg2 remoteAddress:(struct OpaqueAPSNetworkAddress *)arg3 localAddrString:(id)arg4 remoteAddrString:(id)arg5;
- (int)createSocketWithAddress:(struct OpaqueAPSNetworkAddress *)arg1 remoteAddress:(struct OpaqueAPSNetworkAddress *)arg2 port:(unsigned short)arg3 socket:(int *)arg4;
- (int)startWithIPAddress:(struct OpaqueAPSNetworkAddress *)arg1 remoteAddress:(struct OpaqueAPSNetworkAddress *)arg2;

@end
