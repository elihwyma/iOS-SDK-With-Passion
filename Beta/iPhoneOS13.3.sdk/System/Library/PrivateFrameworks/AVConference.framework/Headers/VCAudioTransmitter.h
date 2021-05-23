/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;

@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject

{
    VCPacketBundler *_audioBundler;
    VCAudioRedBuilder *_redBuilder;
    VCRedundancyControllerAudio *_redundancyController;
    struct opaqueVCAudioBufferList *_encodeBuffer;
    _Bool _lastIsTalking;
    double _lastTierSwitch;
    double _audioInterval;
    int _audioTierChangeRequestCount;
    int _audioTxBitrate;
    int _actualAudioSendingBitrate;
    unsigned int _lastSentAudioSampleTime;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
    unsigned char _inputMeter;
    long long _blockSize;
    float _blockSeconds;
    double _lastUpdateQualityIndicator;
    int _qualityIndicator;
    VCAudioTierPicker *_audioTierPicker;
    VCAudioTier *_currentAudioTier;
    VCAudioTier *_requestedAudioTier;
    char *_lastInputSampleBuffer;
    unsigned int _lastInputSampleBufferSize;
    int _audioHeaderSize;
    _Bool _audioTierHysteresis;
    _Bool _lastAudioStalled;
    void *_packetThread;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int _currentTargetBitrate;
    unsigned int _currentDuplication;
    unsigned int _redundancyPercentage;
    double _redundancyInterval;
    unsigned int _redundancyControllerNumPayloads;
    unsigned int _redundancyControllerMaxDelay20ms;
    AVCStatisticsCollector *_statisticsCollector;
    _Bool _isAudioStalled;
    unsigned int _sentAudioBytes;
    unsigned int _encodedBytes;
    unsigned int _totalTxAudioBytes;
    unsigned int _estimateTxAudioBytes;
    unsigned int _audioFrameCounter;
    unsigned int _silenceFrameCounter;
    unsigned int _vadSegmentCounter;
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_afrc;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_rtpVideo;
    void *_controlInfoGenerator;
    _Bool _useRateControl;
    _Bool _isUseCaseWatchContinuity;
    _Bool _allowAudioSwitching;
    _Bool _supportsAdaptation;
    _Bool _needsPacketThread;
    _Bool _isLocalCellular_LowestConnectionQuality;
    _Bool _isRemoteCellular_LowestConnectionQuality;
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;
    _Bool _isRedEnabled;
    _Bool _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    _Bool _transmitROC;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_currentDTXPayload;
    VCAudioPayload *_currentAudioPayload;
    int _currentRedPayloadType;
    unsigned int _currentAudioCap;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingModuleID;
    int _operatingMode;
    VCTransportSession *_transportSession;
    id _delegate;
    _Bool _ignoreSilence;
    unsigned int _tierNetworkBitrate;
    _Bool _sendActiveVoiceOnly;
    double _lastReportingCallbackTime;
    CDStruct_3ab08b48 _currentChannelMetrics;
    CDStruct_94aa5fb4 _idsChannelDataFormat;
    unsigned int _maxIDSStreamIdCount;
    NSArray *_supportedNumRedundantPayload;
    _Bool _currentDTXEnable;
    unsigned char _mediaControlInfoVersion;
    _Bool _alwaysOnAudioRedundancyEnabled;
    _Bool _cellularAllowRedLowBitratesEnabled;
    _Bool _wifiAllowRedLowBitratesEnabled;
}

@property (nonatomic, readonly) VCAudioPayloadConfig *currentAudioPayloadConfig;
@property (nonatomic, readonly) VCPacketBundler *audioBundler;
@property (nonatomic, readonly) VCAudioTier *currentAudioTier;
@property (nonatomic, readonly) int audioTxBitrate;
@property (nonatomic, readonly) int actualAudioSendingBitrate;
@property (nonatomic, readonly) unsigned int lastSentAudioSampleTime;
@property (nonatomic, readonly) unsigned int sentAudioBytes;
@property (nonatomic, readonly) unsigned int encodedBytes;
@property (nonatomic, readonly) unsigned int redNumPayloads;
@property (nonatomic, readonly) unsigned int redMaxDelay20ms;
@property (nonatomic, readonly) NSDictionary *dtxMetrics;
@property (nonatomic) int operatingMode;
@property unsigned char inputMeter;
@property id <VCAudioTransmitterDelegate> delegate;
@property (nonatomic, readonly) _Bool isRedEnabled;
@property (nonatomic, readonly) _Bool ignoreSilence;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int rateChangeCounter;
@property (nonatomic) CDStruct_3ab08b48 currentChannelMetrics;
@property (nonatomic) _Bool isAudioStalled;
@property (nonatomic) int qualityIndicator;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) _Bool sendActiveVoiceOnly;
@property (nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithConfig:(id)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (_Bool)setupAudio:(id *)arg1;
- (void)setStreamIDs:(id)arg1;
- (_Bool)handleCodecRateModeChange:(unsigned char)arg1 withBitrate:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;
- (_Bool)isLocalOrRemoteOnCellular;
- (void)registerReportingTask;
- (void)initAudioValues;
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2;
- (void)setupAudioHeaderSize;
- (_Bool)setupAudioTierPicker;
- (void)logTierInfo:(int)arg1;
- (_Bool)setupAudioEncoders;
- (unsigned int)maximumSamplesPerFrame;
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;
- (id)usedAudioPayloadForType:(int)arg1;
- (void)removeUnusedAudioPayloads;
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(_Bool)arg6;
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(_Bool)arg6 voiceActivity:(_Bool)arg7 priority:(unsigned char)arg8;
- (void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg1 sampleCount:(unsigned int)arg2;
- (_Bool)shouldUseDtx;
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;
- (void)updateAudioTxBitrate;
- (void)useAudioTier:(id)arg1;
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2;
- (void)reportRedundancyConfigChange;
- (int)sendAudioPacket:(char *)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5 marker:(int)arg6 nextInterval:(float)arg7 padding:(char *)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10;
- (_Bool)chooseAudioNetworkBitrate;
- (float)nextAudioInterval:(int)arg1;
- (int)sendAudioBundle:(_Bool)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;
- (_Bool)sendAudioPacketImpl:(struct tagAudioPacketData *)arg1 bytesSent:(int *)arg2;
- (void *)generateControlInfo;
- (int)sendAudioPacket:(struct tagAudioPacketData)arg1;

@end
