/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCMediaStreamStats, VCVideoStreamRateController;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateAdaptation : NSObject

{
    struct tagHANDLE *_rtpHandle;
    unsigned int _sendTmmbrBitrate;
    unsigned int _receivedTmmbnBitrate;
    unsigned int _operatingBitrate;
    _Bool _rateAdaptationEnabled;
    _Bool _downlinkQualityDidChange;
    _Bool _isOperatingAtMaxBitrate;
    _Bool _isOperatingAtMinBitrate;
    double _tmmbrSendTime;
    double _tmmbnReceiveTime;
    double _tmmbRTT;
    double _packetLossPercentage;
    double _adaptationTime;
    double _maxOWRD;
    double _averageBitrateWindowDuration;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingModuleID;
    VCVideoStreamRateController *_rateController;
    VCMediaStreamStats *_stats;
}

@property (nonatomic, readonly) struct tagHANDLE *rtpHandle;
@property (nonatomic, readonly) double packetLossPercentage;
@property (nonatomic, readonly) double roundTripTime;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic, readonly) unsigned int operatingBitrate;
@property (nonatomic, readonly) unsigned int sendTmmbrBitrate;
@property (nonatomic, readonly) _Bool isOperatingAtMaxBitrate;
@property (nonatomic, readonly) _Bool isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;

- (void)dealloc;
- (id)className;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 receiverStats:(id)arg3 dumpID:(unsigned int)arg4 reportingParentID:(int)arg5;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(_Bool)arg5;
- (_Bool)runVideoStreamRateAdaptation;
- (void)receivedTMMBN:(unsigned int)arg1;
- (void)updateVideoStall:(_Bool)arg1 withStallDuration:(unsigned int)arg2;
- (void)scheduleTMMBR:(unsigned int)arg1;
- (void)setOperatingBitrate:(unsigned int)arg1;
- (unsigned int)averageReceivedBitrate;

@end
