/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCVideoStreamRateAdaptation.h>

@class AVCStatisticsCollector, NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation

{
    AVCStatisticsCollector *_statisticsCollector;
    NSObject<OS_dispatch_source> *_rateControlFeedbackSource;
    _Bool _didReceiveVideo;
    _Bool _useLowPrecisionEchoTimeStamp;
    unsigned int _previousRTPTimestamp;
    unsigned int _totalPacketsReceived;
    unsigned int _lastTimestamp;
    double _lastTimestampReceiveTime;
}

@property (nonatomic) _Bool didReceiveVideo;

- (void)dealloc;
- (double)owrd;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 receiverStats:(id)arg3 dumpID:(unsigned int)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 lowTimestampPrecision:(_Bool)arg7;
- (void)setEnableRateAdaptation:(_Bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3 size:(unsigned int)arg4 endOfFrame:(_Bool)arg5;
- (void)updateRateControlInfoWithStatisticsMessage:(CDStruct_b21f1e06)arg1;
- (void)stopFeedbackSource;
- (void)startFeedbackSource;
- (void)sendRateControlFeedback;

@end
