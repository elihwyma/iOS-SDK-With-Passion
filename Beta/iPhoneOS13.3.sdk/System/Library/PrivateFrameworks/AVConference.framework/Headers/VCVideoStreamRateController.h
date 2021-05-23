/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, VCVideoStreamRateControlProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoStreamRateController : NSObject

{
    int _algorithm;
    id <VCVideoStreamRateControlProtocol> _rateControl;
    unsigned int _minBitrate;
    unsigned int _maxBitrate;
    unsigned int _targetBitrate;
    unsigned short _operatingTierIndex;
    unsigned short _maxTierIndex;
    unsigned short _minTierIndex;
    double _rateControlTime;
    double _rateControlInterval;
    unsigned int _previousRTPTimestamp;
    unsigned int _averageTargetBitrate;
    unsigned long long _accumulatedTargetDataSize;
    double _totalTime;
    double _videoFrozenDuration;
    _Bool _didVideoStall;
    void *_logDump;
    NSObject<OS_dispatch_queue> *_videoStreamRateControllerQueue;
}

@property (nonatomic, readonly) unsigned int minBitrate;
@property (nonatomic, readonly) unsigned int maxBitrate;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double nowrdAcc;

- (void)dealloc;
- (id)className;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)setRateControlInterval:(double)arg1;
- (void)updateVideoStall:(_Bool)arg1 withStallDuration:(unsigned int)arg2;
- (id)initWithDumpID:(unsigned int)arg1;
- (void)setMaxTargetBitrate:(unsigned int)arg1 minTargetBitrate:(unsigned int)arg2;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned int)arg4 averageReceivedBitrate:(unsigned int)arg5;
- (void)createLogDumpFile:(unsigned int)arg1;
- (void)releaseLogDumpFile;
- (unsigned short)minTierIndex:(unsigned int)arg1;
- (unsigned short)maxTierIndex:(unsigned int)arg1;
- (void)updateAverageTargetBitrate:(unsigned int)arg1 interval:(double)arg2;
- (void)setOperatingTierIndexWithBitrate:(unsigned int)arg1;

@end
