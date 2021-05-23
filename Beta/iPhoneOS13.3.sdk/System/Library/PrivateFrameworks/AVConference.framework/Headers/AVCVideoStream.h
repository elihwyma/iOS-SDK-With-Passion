/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSString, VCVideoStream;

@protocol AVCVideoStreamDelegate, OS_dispatch_queue;

@interface AVCVideoStream : NSObject

{
    AVConferenceXPCClient *_connection;
    AVCMediaStreamConfig *_configuration;
    id _delegate;
    VCVideoStream *_opaqueStream;
    long long _streamToken;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _shouldUseXPC;
}

@property (retain, nonatomic) NSDictionary *capabilities;
@property (retain, nonatomic) AVCMediaStreamConfig *configuration;
@property (nonatomic) long long direction;
@property (nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property (nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property (nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic) double rtcpSendIntervalSec;
@property (nonatomic, readonly) long long streamToken;
@property (nonatomic) id <AVCVideoStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)capabilities;
+ (id)extractClientDownlinkQualityInfoDictionary:(id)arg1;
+ (id)extractClientUplinkQualityInfoDictionary:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)refreshLoggingParameters;
- (void)requestLastDecodedFrame;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2;
- (void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3 dictionary:(id)arg4;
- (void)registerBlocksForDelegateNotifications;
- (void)deregisterBlocksForDelegateNotifications;
- (void)terminateSession;
- (_Bool)configure:(id)arg1 error:(id *)arg2;
- (id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 connectionClientID:(id)arg4 callID:(id)arg5 options:(id)arg6 error:(id *)arg7;
- (id)initWithNetworkSockets:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithNWConnectionClientID:(unsigned char [16])arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (void)updateVideoConfiguration:(id)arg1;
- (id)getStats;

@end
