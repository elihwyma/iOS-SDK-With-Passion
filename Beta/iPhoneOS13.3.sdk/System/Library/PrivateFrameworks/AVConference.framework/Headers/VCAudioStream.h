/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCMediaStream.h>

@class AVTelephonyInterface, DTMFEventHandler, NSMutableArray, NSNumber, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioPowerSpectrumSource, VCAudioTransmitter, WRMClient;

@protocol OS_dispatch_source, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream : VCMediaStream

{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    _Bool lastVoiceActive;
    double _remoteMediaStallTimeout;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    VCAudioTransmitter *_audioTransmitter;
    int _reportingModuleID;
    AVTelephonyInterface *_telephonyInterface;
    _Bool isValid;
    int deviceRole;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    VCAudioIO *_audioIO;
    _Bool _isMuted;
    unsigned int *_reportingSSRCList;
    unsigned int _reportingSSRCCount;
    _Bool _sendActiveVoiceOnly;
    _Bool _currentDTXEnable;
    NSNumber *_targetStreamID;
    _Bool _rtpEnabledBeforeInterrupt;
    _Bool _rtcpEnabledBeforeInterrupt;
    unsigned int _pullAudioSamplesCount;
    struct _VCAudioStreamSinkContext _sinkContext;
    struct _VCAudioStreamSourceContext _sourceContext;
    long long _inputAudioPowerSpectrumToken;
    long long _outputAudioPowerSpectrumToken;
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;
}

@property (retain) VCAudioTransmitter *audioTransmitter;
@property (retain) VCAudioIO *audioIO;
@property (nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate;
@property (readonly) unsigned int conferenceID;
@property (nonatomic) _Bool isValid;
@property (nonatomic) int deviceRole;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic, getter=isRemoteMuted) _Bool remoteMuted;
@property (nonatomic) _Bool sendActiveVoiceOnly;
@property (nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable;
@property (retain, nonatomic) NSNumber *targetStreamID;
@property (nonatomic) float volume;
@property (nonatomic, readonly) void *realtimeSourceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;

- (void)dealloc;
- (void)setState:(int)arg1;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (id)initWithClientPid:(int)arg1;
- (void)stateExit;
- (void)stateEnter;
- (id)supportedPayloads;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (double)lastReceivedRTPPacketTime;
- (double)lastReceivedRTCPPacketTime;
- (void)onCallIDChanged;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onRTPTimeout;
- (void)onRTCPTimeout;
- (double)rtcpHeartbeatLeeway;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (id)getSupportedPayloads;
- (id)addAudioPayload:(int)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)configForPayloadType:(int)arg1;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (_Bool)setupAudioStreamWithClientPid:(int)arg1;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (void)setupAudioPowerSpectrum;
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;
- (_Bool)setReceiverPayloads;
- (void)registerCodecRateModeChangeNotifications;
- (void)registerActiveAudioStreamChangeNotifications;
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;
- (struct _METER_INFO *)meterWithType:(int)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)setStreamDirection:(long long)arg1;
- (_Bool)setupSourceTransport:(id)arg1;
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;
- (_Bool)validateAudioStreamConfigurations:(id)arg1;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (int)getReportingClientType;
- (struct __CFString *)getReportingClientName;
- (id)getReportingServiceID;
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (id)createTransport;
- (_Bool)setupPayloads;
- (void)setDTXPayload:(id)arg1;
- (_Bool)createAudioReceiver;
- (id)streamIDsFromTransport;
- (_Bool)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;
- (void)prepareAudio;
- (void)cleanupAudio;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSoundMeter:(struct _METER_INFO *)arg1 isInputMeter:(_Bool)arg2 sampleBuffer:(struct opaqueVCAudioBufferList *)arg3;
- (void)pushSamplesOutputPowerSpectrum:(struct opaqueVCAudioBufferList *)arg1;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (long long)getSyncSourceSampleRate;
- (void)didSuspendAudioIO:(id)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;
- (void)sendDTMFEvent:(id)arg1;
- (void)stopSendDTMFEvent;
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (_Bool)canProcessAudio;
- (void)setCanProcessAudio:(_Bool)arg1;
- (void)vcMediaStreamTransport:(id)arg1 updateSourceNTPTime:(double)arg2 rtpTimeStamp:(unsigned int)arg3;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (void)collectRxChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)collectTxChannelMetrics:(CDStruct_3ab08b48 *)arg1;

@end
