/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SegmentStatsDelegate;

__attribute__((visibility("hidden")))
@interface MultiwaySegment : NSObject

{
    int _duration;
    int _adjustedDuration;
    int _interval;
    int _frequency;
    double _averageTargetBitrateSum;
    unsigned int _averageTargetBitrateReportCounter;
    double _roundTripTimeSum;
    unsigned int _roundTripTimeReportCounter;
    unsigned int _totalPacketsReceived;
    unsigned int _totalPacketsLost;
    unsigned int _totalPacketsSent;
    unsigned long long _totalBytesSent;
    unsigned long long _totalBytesReceived;
    NSString *_segmentName;
    NSString *_previousSegmentName;
    id <SegmentStatsDelegate> _delegate;
}

@property (readonly) NSString *segmentName;
@property (readonly) NSString *previousSegmentName;
@property int duration;
@property int adjustedDuration;
@property (readonly) double averageTargetBitrate;
@property unsigned int totalPacketsReceived;
@property unsigned int totalPacketsLost;
@property unsigned int totalPacketsSent;
@property unsigned long long totalBytesSent;
@property unsigned long long totalBytesReceived;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)packetLossRate;
- (unsigned int)RTPeriod;
- (id)segmentReport;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3;
- (void)processTargetBitrate:(unsigned int)arg1;
- (void)processRoundTripTime:(unsigned int)arg1;
- (double)averageRoundTripTime;

@end
