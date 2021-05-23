/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSString, VCAudioStream;

@protocol AVCAudioStreamDelegate, OS_dispatch_queue;

@interface AVCAudioStream : NSObject

{
    AVConferenceXPCClient *_connection;
    id _delegate;
    VCAudioStream *_opaqueStream;
    AVCMediaStreamConfig *_configuration;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _streamToken;
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
@property (nonatomic) float volume;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) _Bool inputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) _Bool outputFrequencyMeteringEnabled;
@property (nonatomic) id <AVCAudioStreamDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)capabilities;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)start;
- (void)refreshLoggingParameters;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(_Bool)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didPauseStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didResumeStream:(_Bool)arg2 error:(id)arg3;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(_Bool)arg4 callID:(id)arg5 error:(id *)arg6;
- (void)registerBlocksForDelegateNotifications;
- (id)validateInitializeConnectionResult:(id)arg1;
- (void)deregisterBlocksForDelegateNotifications;
- (void)terminateSession;
- (void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)didInterruptionBeginHandler;
- (void)didInterruptionEndHandler;
- (id)initWithLocalAddress:(id)arg1 error:(id *)arg2;
- (id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(_Bool)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(_Bool)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(_Bool)arg2 error:(id *)arg3;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(_Bool)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(_Bool)arg2 error:(id *)arg3;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(_Bool)arg2 callID:(id)arg3 error:(id *)arg4;
- (_Bool)configure:(id)arg1 error:(id *)arg2;
- (void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4;
- (void)startContinuousDTMFWithDigit:(BOOL)arg1 volume:(unsigned char)arg2;
- (void)stopContinuousDTMF;
- (void)startSynchronizeWithStream:(long long)arg1;

@end
