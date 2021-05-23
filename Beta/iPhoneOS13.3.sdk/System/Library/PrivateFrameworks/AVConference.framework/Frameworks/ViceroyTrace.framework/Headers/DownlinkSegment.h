/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <ViceroyTrace/MultiwaySegment.h>

__attribute__((visibility("hidden")))
@interface DownlinkSegment : MultiwaySegment

{
    double _videoDegradedStartTime;
    _Bool _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    double _videoDegradedTotalTime;
}

@property double videoDegradedStartTime;
@property _Bool isVideoDegraded;
@property unsigned int videoDegradedTotalCounter;
@property double videoDegradedTotalTime;

- (void)dealloc;
- (id)segmentReport;
- (void)processVideoDegraded:(_Bool)arg1;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3;

@end
