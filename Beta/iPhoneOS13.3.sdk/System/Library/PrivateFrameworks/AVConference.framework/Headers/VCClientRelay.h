/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCClientRelay : NSObject

{
    int _vtpSocket;
    int _idsSocket;
    NSObject<OS_dispatch_source> *_idsReadSource;
    NSObject<OS_dispatch_queue> *_idsReadQueue;
    _Bool _isConnectionResultSet;
    struct tagCONNRESULT _connectionResult;
    struct sockaddr_storage _vtpDestination;
    unsigned int _vtpDestinationLength;
    struct OpaqueFigThread *_vtpReceiveTID;
    _Bool _stopVTPReceiveThread;
}

@property (readonly) _Bool stopVTPReceiveThread;

- (void)dealloc;
- (int)setupVTPSocket;
- (_Bool)relayIDSPacket;
- (int)stopRelay;
- (id)initWithIDSSocket:(int)arg1;
- (void)setConnectionResult:(struct tagCONNRESULT *)arg1;
- (int)startRelay;
- (_Bool)relayVTPPacket;

@end
