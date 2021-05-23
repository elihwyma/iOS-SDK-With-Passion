/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCBasebandMetrics : NSObject

{
    VCRateControlMediaController *_mediaController;
    CDStruct_b203c80d _lastBasebandNotification;
    double _bdcd;
    double _normalizedBDCD;
    double _normalizedDelay;
    _Bool _isBDCDListReady;
    struct {
        double time[15];
        double bdcd[15];
        double delay[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _bdcdList;
    struct {
        double time[15];
        unsigned int transmittedBytes[15];
        unsigned int nonFlushableQueueDepth[15];
        int frontIndex;
        int rearIndex;
        unsigned int size;
    } _infoList;
    unsigned int _targetBitrate;
    unsigned int _txBitrate;
    unsigned int _averageBitrate;
    unsigned int _previousAverageBitrate;
    unsigned int _averageBitrateLong;
    double _expectedQueuingDelay;
    double _expectedQueuingDelayLong;
    _Bool _isTargetBitrateStabilized;
    _Bool _resetAverageBitrateLong;
    void *_logBasebandDump;
}

@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) _Bool isTargetBitrateStabilized;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;

- (void)dealloc;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)addInfoListWithNotification:(CDStruct_b203c80d *)arg1;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg1;
- (void)normalizeBDCD:(double)arg1;
- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)resetBDCDList;
- (CDStruct_b21f1e06)getBasebandMetricsWithNotification:(CDStruct_b203c80d *)arg1;

@end
