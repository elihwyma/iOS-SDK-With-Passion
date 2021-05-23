/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, VCBasebandMetrics, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface AVCBasebandCongestionDetector : NSObject

{
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    VCRateControlMediaController *_mediaController;
    VCBasebandMetrics *_basebandMetrics;
    double _notificationArrivalTime;
    unsigned int _basebandTxBitrate;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandQueueDepth;
    double _basebandExpectedQueuingDelay;
    unsigned int _targetBitrate;
    _Bool _isTargetBitrateStabilized;
    void *_logBasebandDump;
}

@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) _Bool isTargetBitrateStabilized;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int basebandTxBitrate;
@property (nonatomic, readonly) unsigned int basebandAverageBitrate;
@property (nonatomic, readonly) unsigned int basebandQueueDepth;
@property (nonatomic, readonly) double basebandExpectedQueuingDelay;

- (id)init;
- (void)dealloc;
- (void)enableBasebandLogDump:(void *)arg1;
- (_Bool)processBasebandNotification:(CDStruct_b203c80d *)arg1 arrivalTime:(double)arg2 error:(id *)arg3;
- (void)processBasebandAck:(CDStruct_b203c80d *)arg1;
- (void)printFlushAckToBasebandDump:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (_Bool)processBasebandNotification:(id)arg1 metaData:(id)arg2 error:(id *)arg3;

@end
