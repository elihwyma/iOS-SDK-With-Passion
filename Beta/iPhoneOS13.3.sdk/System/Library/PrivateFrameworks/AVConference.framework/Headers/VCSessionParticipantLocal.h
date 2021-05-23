/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCSessionParticipant.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCAudioPowerSpectrumSource, VCMoments, VCSessionUplinkBandwidthAllocator, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal : VCSessionParticipant

{
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableDictionary *_activeUplinkAudioStreams;
    NSMutableDictionary *_pendingActiveUplinkVideoStreams;
    _Bool _encryptionInfoReceived;
    int _shouldUpdateActiveVideoStream;
    unsigned int _currentUplinkTargetBitrate;
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;
    unsigned char _audioPriority;
    unsigned short _connectionStatsStreamID;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    struct tagVCMediaQueue *_mediaQueue;
    unsigned int _uplinkBitrateCapWifi;
    unsigned int _uplinkBitrateCapCell;
    struct tagVCMemoryPool *_audioStreamUpdatePool;
    struct tagVCMemoryPool *_redundancyPool;
    struct tagVCMemoryPool *_videoRedundancyPool;
    _Atomic unsigned char _videoPriority;
    _Bool _shouldResize;
    _Bool _enableRedundancy;
    _Bool _enableVADFiltering;
    NSMutableArray *_peerSubscribedStreams;
    NSMutableSet *_localPublishedStreams;
    float _averageSilenceAudioPower;
    unsigned char _audioPriorityRampUp;
    unsigned char _audioPriorityDecaySlow;
    unsigned char _audioPriorityDecayFast;
    float _audioVoiceDetectionSensitivity;
    float _audioSilencePowerAverageMultiplier;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    _Bool _forcedAudioPriorityEnabled;
    VCVideoRule *_videoRule;
    _Bool _speechDetected;
    struct opaqueVCVoiceDetector *_voiceDetector;
    double _fecRatio;
    NSMutableSet *_audioPayloadTypes;
    NSMutableSet *_videoPayloadTypes;
    unsigned int _currentUplinkTotalBitrateVideo;
    unsigned int _currentUplinkTotalBitrateAudio;
    VCMoments *_moments;
    VCAudioPowerSpectrumSource *_powerSpectrumSource;
}

@property (nonatomic) _Bool encryptionInfoReceived;
@property (nonatomic, readonly) unsigned short connectionStatsStreamID;
@property (nonatomic) struct tagVCMediaQueue *mediaQueue;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;
@property (nonatomic) unsigned int uplinkBitrateCapCell;
@property (nonatomic) _Bool enableVADFiltering;
@property (copy, nonatomic) NSArray *peerSubscribedStreams;
@property (nonatomic, readonly) NSSet *audioPayloadTypes;
@property (nonatomic, readonly) NSSet *videoPayloadTypes;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateVideo;
@property (nonatomic, readonly) unsigned int currentUplinkTotalBitrateAudio;
@property (nonatomic, readonly) VCMoments *moments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (_Bool)setState:(unsigned int)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (void)updateMediaSettingsWithConfig:(id)arg1;
- (id)setupStreamRTP:(id)arg1;
- (void)stopAudioIOCompletion;
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1;
- (id)getAudioDumpName;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)collectVideoChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectAudioChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)avConferencePreviewError:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
- (id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (id)supportedAudioRules;
- (void)updateSupportedAudioRules:(id)arg1;
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;
- (unsigned short)generateStreamID;
- (_Bool)setupAudioStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (_Bool)setupVideoStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (void)initializeUplinkVideoStreamController;
- (_Bool)initializeMediaNegotiator;
- (_Bool)createParticipantInfo;
- (void)createOpaqueData;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)flushVideoRedundancyEventQueue;
- (void)enableRedundancy:(_Bool)arg1;
- (void)startVoiceActivityDetection;
- (void)updateActiveVoiceOnly;
- (void)registerForVideoCapture;
- (void)deregisterForVideoCapture;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)stopVoiceActivityDetection;
- (_Bool)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;
- (_Bool)setupAudioStreamsWithConfigProvider:(id)arg1;
- (_Bool)setupAudioStreamWithConfiguration:(id)arg1;
- (_Bool)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (_Bool)setupVideoStreamsWithConfigProvider:(id)arg1;
- (_Bool)setupVideoStreamWithConfiguration:(id)arg1;
- (_Bool)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (id)newMediaNegotiatorAudioConfiguration;
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(_Bool)arg2;
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;
- (_Bool)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2;
- (void)processAudioStreamUpdateEvent;
- (void)processAudioRedundancyChangeEvent;
- (unsigned int)generateSSRC;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (_Bool)checkSubscribedStreamsConsistency:(id)arg1;
- (void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)processVideoEventQueue;
- (void)processEventQueues;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;
- (void)updateStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)applyVideoEnabledSetting:(_Bool)arg1;
- (void)updateVideoPaused:(_Bool)arg1;
- (id)multiwayVideoStreamConfigs;
- (_Bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(_Bool)arg2;
- (void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2;

@end
