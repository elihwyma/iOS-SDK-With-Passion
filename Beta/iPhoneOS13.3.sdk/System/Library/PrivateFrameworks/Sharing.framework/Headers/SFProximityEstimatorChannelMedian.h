/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFProximityEstimator.h>

__attribute__((visibility("hidden")))
@interface SFProximityEstimatorChannelMedian : SFProximityEstimator

{
    struct {
        unsigned char channel;
        char rssiValues[3];
        unsigned char rssiIndex;
        unsigned char rssiCount;
        char rssiMedian;
    } _channels[4];
}

- (id)description;
- (int)_estimateRSSIForSFBLEDevice:(id)arg1;

@end
