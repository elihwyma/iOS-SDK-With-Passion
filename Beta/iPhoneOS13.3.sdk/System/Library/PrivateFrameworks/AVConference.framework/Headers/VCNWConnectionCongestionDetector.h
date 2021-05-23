/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface VCNWConnectionCongestionDetector : NSObject

{
    AVCStatisticsCollector *_statisticsCollector;
    CDStruct_b21f1e06 _previousStatistics;
    unsigned int _averageThroughputBps;
    unsigned int _averagePacketDelayMs;
    unsigned int _lastTimestampWithPacketDrop;
    unsigned int _packetDropCount;
    unsigned int _packetDropCountPerFrame;
    _Bool _didSendCongestionEvent;
    void *_logNWDump;
}

@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (readonly) unsigned int averageThroughputBps;
@property (readonly) unsigned int averagePacketDelayMs;
@property (readonly) unsigned int packetDropCount;

- (void)dealloc;
- (void)enableNWLogDump:(void *)arg1;
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;
- (_Bool)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;
- (_Bool)processNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;

@end
