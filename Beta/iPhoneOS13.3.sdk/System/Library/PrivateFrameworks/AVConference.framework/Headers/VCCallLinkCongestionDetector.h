/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCallLinkCongestionDetector : NSObject

{
    _Bool isLinkCongested;
    double rttThreshold;
    double lossRateThreshold;
}

@property (nonatomic) _Bool isLinkCongested;

- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;
- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;

@end
