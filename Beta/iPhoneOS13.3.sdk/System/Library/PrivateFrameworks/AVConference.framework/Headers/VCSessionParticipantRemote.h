/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCSessionParticipant.h>

@class NSArray, NSNumber, NSString, TimingCollection, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo, VCVideoQualityInfo;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote : VCSessionParticipant

{
    NSNumber *_optedInVideoStreamID;
    NSNumber *_optedInAudioStreamID;
    unsigned short _activeDownlinkVideoStreamID;
    unsigned short _activeDownlinkAudioStreamID;
    _Bool _remoteVideoEnabled;
    _Bool _remoteVideoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    VCSessionBandwidthAllocationTable *_mediaTable;
    VCSessionBandwidthAllocationTable *_repairMediaTable;
    VCVideoQualityInfo *_videoQualityInfo;
    double _lastVideoQualityNotificationUpdate;
    unsigned char _lastVideoPriority;
    _Bool _isProcessingVideoOptIn;
    _Bool _isVideoDegraded;
    _Bool _videoSuspended;
    _Bool _isRedundancyRequested;
    _Bool _isRemoteMediaStalled;
    struct _VCSessionParticipantProminenceInfo _prominenceInfo;
    TimingCollection *_perfTimers;
    _Bool _haveReportedPerfTimers;
    struct _VCSessionParticipantSourceIO _sourceIO;
}

@property (nonatomic, readonly) VCSessionParticipantMediaStreamInfo *audioStreamInfo;
@property (nonatomic, readonly) VCSessionParticipantMediaStreamInfo *videoStreamInfo;
@property (retain, nonatomic) NSNumber *optedInAudioStreamID;
@property (retain, nonatomic) NSNumber *optedInVideoStreamID;
@property (nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled;
@property (nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused;
@property (nonatomic, readonly) _Bool isVideoExpected;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (nonatomic, readonly) unsigned int lastDisplayedFrameRTPTimestamp;
@property (readonly) NSString *uuid;
@property (readonly) NSArray *mediaEntries;
@property (readonly) unsigned int actualNetworkBitrateVideo;
@property (readonly) unsigned int actualNetworkBitrateAudio;
@property (readonly) unsigned int optedInNetworkBitrateVideo;
@property (readonly) unsigned int optedInNetworkBitrateAudio;
@property (readonly) unsigned short activeDownlinkVideoStreamID;
@property (readonly) unsigned short activeDownlinkAudioStreamID;
@property (readonly) _Bool isVisible;
@property (nonatomic, getter=isVideoSuspended) _Bool videoSuspended;

+ (_Bool)isDeviceLargeScreen;
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1;
+ (unsigned int)maxVideoNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;

- (void)dealloc;
- (void)setMuted:(_Bool)arg1;
- (void)setVideoDegraded:(_Bool)arg1;
- (void)setVideoPaused:(_Bool)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(_Bool)arg2;
- (void)vcMediaStream:(id)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveFirstVideoFrameWithTime:(CDStruct_1b6d18a9)arg2;
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)setAudioPaused:(_Bool)arg1;
- (_Bool)processParticipantInfo;
- (_Bool)setupAudioStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (_Bool)setupVideoStreamFromMediaBlobWithIDSDestination:(id)arg1;
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;
- (void)updateAudioSpectrumState;
- (void)updateShouldEnableFaceZoom;
- (_Bool)setupAudioStreamConfiguration:(id)arg1 audioRules:(id)arg2;
- (id)newAudioStreamConfigurationWithMultiwayAudioNegotiationResult:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2;
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 entryType:(unsigned char)arg2;
- (id)setupStreamRTP:(id)arg1;
- (id)entryForStreamID:(id)arg1;
- (_Bool)isAudioActive;
- (_Bool)isVideoActive;
- (id)newVideoStreamConfigurationWithNegotiationVideoResult:(id)arg1;
- (void)notifyChangeInActiveMediaBitrate:(_Bool)arg1;
- (void)setShouldEnableFaceZoom:(_Bool)arg1;
- (void)updateVideoPriority:(unsigned char)arg1;
- (void)reportParticipantsPerfTimingsOnce;
- (void)setActualBitrateForOptedInStreamID:(id)arg1 withActiveStreamID:(id)arg2 isVideo:(_Bool)arg3;
- (id)initWithIDSDestination:(id)arg1 idsParticipantID:(unsigned long long)arg2 mediaNegotiator:(id)arg3 opaqueData:(id)arg4 delegate:(id)arg5 processId:(int)arg6 transportSessionID:(unsigned int)arg7 sessionUUID:(id)arg8 config:(id)arg9;
- (void)stopAudioIOCompletion;
- (void)onStartAudioIO;
- (void)onDidResumeAudioStream:(id)arg1;
- (void)onPauseAudioStreams;
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1;
- (id)getAudioDumpName;
- (void)setActiveStreamIDs:(id)arg1;
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;
- (void)negotiateAudioRules:(id)arg1;
- (void)receivedMediaPacketAtTime:(double)arg1 isDecryptable:(_Bool)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)collectVideoChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectAudioChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)updateVideoQualityNotification;
- (void)updateSourcePlayoutTimestampWithSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)debounceAudioPriority:(unsigned char)arg1;

@end
