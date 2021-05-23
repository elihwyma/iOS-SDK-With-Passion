/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol LoopbackSocketTunnelDelegate;

__attribute__((visibility("hidden")))
@interface LoopbackSocketTunnel : NSObject

{
    unsigned short _port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject *optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    _Bool foundVTPIP;
}

@property NSObject *optionalArg;

- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id *)arg3;
- (int)sendPacketToVTP:(id)arg1;
- (void)getIPPort:(struct tagIPPORT *)arg1;
- (void)getVTPIPPort:(struct tagIPPORT *)arg1;
- (void)setVTPIP:(struct tagIPPORT *)arg1;
- (void)shutdownSocket;
- (int)serverLoopProc;

@end
