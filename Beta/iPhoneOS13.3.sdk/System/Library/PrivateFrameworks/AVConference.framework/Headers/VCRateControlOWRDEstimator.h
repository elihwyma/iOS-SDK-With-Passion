/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCRateControlOWRDEstimator : NSObject

{
    unsigned int _mode;
    _Bool _useUINT16;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    unsigned long long _sendTimestampWrappedAround;
    double _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    unsigned long long _receiveTimestampWrappedAround;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    double _owrd;
    _Bool _sendTimestampSpikeDetected;
    _Bool _receiveTimestampSpikeDetected;
    double _averageSendInterval;
    double _averageReceiveInterval;
}

@property (nonatomic, readonly) double owrd;
@property (nonatomic) unsigned int mode;

- (double)relativeSendTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;
- (double)relativeReceiveTimeWithTimestamp:(unsigned int)arg1 timestampRate:(unsigned int)arg2;
- (void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2;
- (_Bool)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)arg1;
- (_Bool)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)arg1;
- (void)resetOWRDEstimation;

@end
