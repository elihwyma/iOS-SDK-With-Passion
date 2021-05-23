/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, SenderLargeFrameInfo;

__attribute__((visibility("hidden")))
@interface VCRateControlMediaController : NSObject

{
    id _mediaControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagHANDLE *_hMediaQueue;
    unsigned int _videoSendingBitrate;
    unsigned int _audioSendingBitrate;
    unsigned int _minTargetBitrate;
    unsigned int _targetBitrate;
    _Bool _isVideoStoppedByVCRateControl;
    _Bool _isVideoStoppedByBaseband;
    _Bool _isVideoPausedByUser;
    _Bool _isAudioOnly;
    _Bool _isBasebandFlushing;
    _Bool _isAudioStall;
    _Bool _isInThrottlingMode;
    _Bool _allowVideoStop;
    int _audioFractionTier;
    double _lastAudioFractionChangeTime;
    double _lastAudioEnoughRateTime;
    unsigned char _videoPayloadType;
    unsigned short _videoTransactionID;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    double _lastVideoKeyFrameTime;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSize;
    unsigned int _probingLargeFrameSizeCap;
    unsigned int _probingSequencePacketSize;
    unsigned int _probingSequencePacketCount;
    _Bool _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    _Bool _isRateLimitedMaxTimeExceeded;
    _Bool _isSenderProbingEnabled;
    int _basebandFlushCount;
    int _basebandFlushedVideoCount;
    int _basebandFlushedAudioCount;
    double _lastBasebandFlushCountChangeTime;
    double _lastBasebandFlushAudioTime;
    double _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    double _lastAudioStallFlushTime;
    _Bool _isRTPFlushBasebandFromVCRateControl;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNBDCD;
    double _lastBasebandHighNBDCDTime;
    _Bool _isBasebandQueuingDelayHigh;
    void *_logBasebandDump;
    unsigned int _afrcRemoteEstimatedBandwidth;
}

@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) unsigned int videoSendingBitrate;
@property (nonatomic) unsigned int audioSendingBitrate;
@property (nonatomic) unsigned int minTargetBitrate;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) int basebandFlushCount;
@property (nonatomic) double lastBasebandFlushCountChangeTime;
@property (nonatomic, readonly) int basebandFlushedVideoCount;
@property (nonatomic, readonly) int basebandFlushedAudioCount;
@property (nonatomic, readonly) _Bool isVideoStoppedByVCRateControl;
@property (nonatomic, readonly) _Bool isVideoStopped;
@property (nonatomic, readonly) _Bool isInThrottlingMode;
@property (nonatomic) _Bool allowVideoStop;
@property (nonatomic) _Bool isSenderProbingEnabled;
@property (nonatomic) _Bool isAudioOnly;
@property (nonatomic) _Bool isRateLimitedMaxTimeExceeded;
@property (nonatomic) _Bool shouldDisableLargeFrameRequestsWhenInitialRampUp;
@property (nonatomic, readonly) unsigned int probingLargeFrameSize;
@property (nonatomic, readonly) unsigned int probingSequencePacketCount;
@property (nonatomic, readonly) unsigned int probingSequencePacketSize;
@property (nonatomic) unsigned int afrcRemoteEstimatedBandwidth;
@property (nonatomic) _Bool isRTPFlushBasebandFromVCRateControl;
@property (nonatomic) int audioFractionTier;
@property (nonatomic, readonly) double lastVideoKeyFrameTime;

- (void)dealloc;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)resumeVideoByVCRateControl;
- (void)updateBasebandSuggestionWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)decreaseFlushCount:(int)arg1;
- (_Bool)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (_Bool)increaseFlushCountForAudioStall:(int)arg1 audioStallBitrate:(unsigned int)arg2;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(_Bool)arg4;
- (void)resetAFRCVideoSendingBitrate;
- (void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (_Bool)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timeSinceLastProbingSequence:(double)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 isFrameRequested:(_Bool)arg5;
- (void)updateProbingLargeFrameSizeCap;
- (id)initWithMediaQueue:(struct tagHANDLE *)arg1 delegate:(id)arg2;
- (void)getMediaQueueInVideoBitrate:(double *)arg1 outVideoBitrate:(double *)arg2 inAudioBitrate:(double *)arg3 outAudioBitrate:(double *)arg4;
- (void)getMediaQueueRateChangeCounter:(unsigned int *)arg1 rateChangeTime:(double *)arg2;
- (void)computePacketLossWithRemoteInfo:(struct VCRCMediaPLPFromRemoteInfo *)arg1;
- (void)pauseVideoByUser:(_Bool)arg1;
- (void)stopVideoByVCRateControl;
- (_Bool)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (_Bool)rampDownAudioFraction;
- (_Bool)rampUpAudioFraction;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 isProbingSequenceScheduled:(_Bool *)arg3;

@end
