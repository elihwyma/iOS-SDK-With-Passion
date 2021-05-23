/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCBasebandCongestionDetector, VCMediaStreamConfig;

@protocol VCMediaStreamTransportDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStreamTransport : NSObject

{
    VCMediaStreamConfig *_streamConfig;
    unsigned int _localSSRC;
    struct tagHANDLE *_rtpHandle;
    _Bool _isSRTPInitialized;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    id _delegate;
}

@property (nonatomic, readonly) VCMediaStreamConfig *streamConfig;
@property (nonatomic, readonly) struct tagHANDLE *rtpHandle;
@property (nonatomic, readonly) unsigned short idsStreamId;
@property (nonatomic, readonly) id <VCMediaStreamTransportDelegate> delegate;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (nonatomic, readonly, getter=isRTCPSendEnabled) _Bool rtcpSendEnabled;
@property (nonatomic) long long streamDirection;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, getter=isRTPTimeoutEnabled) _Bool rtpTimeoutEnabled;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic, getter=isDecryptionTimeoutEnabled) _Bool decryptionTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic) double rtcpSendInterval;
@property (nonatomic, getter=isRTCPTimeoutEnabled) _Bool rtcpTimeoutEnabled;
@property (nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;
+ (int)getSRTPMasterKeyLength:(long long)arg1;
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (void)onStart;
- (_Bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg2 customRTCPPackets:(_Bool)arg3 error:(id *)arg4;
- (void)sendControlPacket:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;
- (_Bool)setThrottlingInterval:(double)arg1;
- (void)resetPayloadMapping;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (void)handleEncryptionInfoChange:(id)arg1;
- (_Bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE *)arg2 localSSRC:(unsigned int)arg3;
- (void)onStop;
- (_Bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (_Bool)sendIntervalDidElapse:(int *)arg1 remainingTime:(double *)arg2;
- (void)onRTCPPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;
- (void)registerRTCPCallback;
- (void)unregisterRTCPCallback;
- (_Bool)isSameSRTPConfig:(id)arg1;
- (_Bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (int)setupSRTP;
- (void)registerRTPPayloadMappings;
- (id)rxNetworkPayloads;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMasterKey:(id)arg2;
- (_Bool)setupRTPForIDS:(id *)arg1;
- (_Bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (_Bool)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2;
- (void)reportRTCPPackets:(struct _RTCPPacketList *)arg1;
- (void)configureForMultiway;

@end
