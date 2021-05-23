/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class AVCBasebandCongestionDetector, AVCStatisticsCollector, NSMutableArray, NSObject, NSString, VCCallInfoBlob, VCDatagramChannelIDS, VCMasterKeyIndex, VCMediaStreamConfig, VCMediaStreamTransport, VCWeakObjectHolder;

@protocol OS_dispatch_queue, OS_dispatch_source, RTCPReportProvider, VCMediaStreamDelegate, VCMediaStreamNotification, VCMomentsCollectorDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaStream

{
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    struct _opaque_pthread_mutex_t _streamLock;
    int _state;
    VCDatagramChannelIDS *_datagramChannel;
    NSString *_idsDestination;
    id <VCMediaStreamDelegate> _delegate;
    id <VCMomentsCollectorDelegate> _momentsCollectorDelegate;
    NSString *_callID;
    _Bool _isSRTPInitialized;
    _Bool _useRandomTS;
    double _rtpTimeoutEnabledTime;
    double _rtcpTimeoutEnabledTime;
    double _decryptionTimeoutEnabledTime;
    NSObject<OS_dispatch_source> *_rtcpSendHeartbeat;
    NSObject<OS_dispatch_source> *_timeoutHeartbeat;
    double _lastRTPTimeoutReportTime;
    double _lastRTCPTimeoutReportTime;
    double _lastDecryptionTimeoutReportTime;
    double _decryptionErrorStartTime;
    unsigned int _localSSRC;
    unsigned int _transportSessionID;
    int _clientPID;
    VCWeakObjectHolder *_notificationDelegate;
    VCWeakObjectHolder *_rtcpReportProvider;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    int _operatingMode;
    struct _VCMediaStreamTransportSetupInfo _transportSetupInfo;
    NSMutableArray *_transportArray;
    CDUnknownFunctionPointerType _vcMediaCallback;
    struct tagVCMediaQueue *_mediaQueue;
    VCMasterKeyIndex *_lastReceivedMKI;
    VCCallInfoBlob *_remoteEndpointInfo;
    CDUnknownFunctionPointerType _notificationHandler;
    CDUnknownFunctionPointerType _packetEventHandler;
    long long _streamToken;
}

@property (nonatomic, readonly) long long streamToken;
@property (nonatomic, readonly) int state;
@property (nonatomic) id <VCMediaStreamDelegate> delegate;
@property (nonatomic) id <VCMomentsCollectorDelegate> momentsCollectorDelegate;
@property (nonatomic, readonly) unsigned int localSSRC;
@property (nonatomic) id <VCMediaStreamNotification> notificationDelegate;
@property (nonatomic) id <RTCPReportProvider> rtcpReportProvider;
@property (nonatomic, readonly) double rtcpHeartbeatLeeway;
@property (nonatomic, readonly) double lastReceivedRTPPacketTime;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) int operatingMode;
@property (nonatomic) struct tagVCMediaQueue *mediaQueue;
@property (nonatomic, readonly) VCMediaStreamTransport *defaultTransport;
@property (nonatomic, readonly) VCMediaStreamConfig *defaultStreamConfig;
@property (nonatomic, readonly) _Bool isSendingMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)stop;
- (void)start;
- (void)setPause:(_Bool)arg1;
- (id)supportedPayloads;
- (id)createTransportWithSSRC:(unsigned int)arg1;
- (void)onCallIDChanged;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onRTPTimeout;
- (void)onRTCPTimeout;
- (void)handleActiveConnectionChange:(id)arg1;
- (char *)streamStateToString:(int)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1 localSSRC:(unsigned int)arg2;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)setStreamDirection:(long long)arg1;
- (_Bool)isRTPTimeoutEnabled;
- (_Bool)isRTCPTimeoutEnabled;
- (void)setRtpTimeOutEnabled:(_Bool)arg1;
- (void)setRtcpTimeOutEnabled:(_Bool)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;
- (void)setRtcpEnabled:(_Bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (id)setupRTPForIDS;
- (void)checkForDecryptionTimeout;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (_Bool)handleEncryptionInfoChange:(id)arg1;
- (void)resetDecryptionTimeout;
- (void)setupRTPWithRTPSocket:(int)arg1 RTCPSocket:(int)arg2;
- (void)cleanupNWInfo:(CDStruct_cb9f2fd6 *)arg1;
- (_Bool)setupNWConnectionWithClientID:(unsigned char [16])arg1;
- (void)setupCallbacksWithNWConnectionMonitor:(struct tagVCNWConnectionMonitor *)arg1;
- (id)setupRTPWithNWConnectionID:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIDSDestination:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithIPInfo:(id)arg1 error:(id *)arg2;
- (void)setupMediaStream;
- (void)decryptionStatusChanged:(_Bool)arg1;
- (void)startRTCPSendHeartbeat;
- (void)startTimeoutHeartbeat;
- (void)stopRTCPSendHeartbeat;
- (void)stopTimeoutHeartbeat;
- (id)setupRTPWithSocketDictionary:(id)arg1 error:(id *)arg2;
- (id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id *)arg2;
- (long long)streamDirection;
- (_Bool)isDecryptionTimeoutEnabled;
- (_Bool)isRTCPSendEnabled;
- (void)processRTPTimeoutSettingChange;
- (void)processRTCPTimeoutSettingChange;
- (void)processDecryptionTimeoutSettingChange;
- (void)resetRTCPSendHeartbeatTimer:(unsigned long long)arg1;
- (void)rtcpSendHeartbeat;
- (void)resetTimeoutHeartbeatTimer:(unsigned long long)arg1;
- (void)checkDecryptionTimeoutAgainstTime:(double)arg1 decryptionErrorStartTime:(double)arg2;
- (void)checkRTPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (double)computeNextTimoutWithEnabledTime:(double)arg1 timeoutInterval:(double)arg2 lastReceivedPacketTime:(double)arg3 currentTime:(double)arg4 lastTimeoutReportTime:(double)arg5;
- (void)checkRTCPPacketTimeoutAgainstTime:(double)arg1 lastReceivedPacketTime:(double)arg2;
- (void)resetTimeoutHeartbeatWithRTPTimeout:(double)arg1 rtcpTimeout:(double)arg2 decryptionTimeout:(double)arg3 currentTime:(double)arg4;
- (void)timeoutHeartbeat;
- (void)setDecryptionTimeOutEnabled:(_Bool)arg1;
- (void)setDecryptionTimeOutInterval:(double)arg1;
- (void)vcMediaStreamTransport:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (int)handleMediaCallbackNotification:(int)arg1 inData:(void *)arg2 outData:(void *)arg3;

@end
