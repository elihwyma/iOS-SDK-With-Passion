/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <ViceroyTrace/Swift-Protocol.h>

@protocol SegmentStatsDelegate <Swift>

- (unsigned short)significantVideoStallCount;
- (unsigned short)audioErasureCount;
- (unsigned short)audioErasureTotalTime;
- (unsigned short)significantVideoStallTotalTime;
- (unsigned short)timeWeightedNumberOfParticipants;

@end
