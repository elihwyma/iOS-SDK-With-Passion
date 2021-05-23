/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Sharing/SFProximityEstimator.h>

__attribute__((visibility("hidden")))
@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator

{
    char *_channelNumberArray;
    char *_rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}

- (void)dealloc;
- (id)description;
- (id)initWithProximityInfo:(id)arg1;
- (int)_estimateRSSIForSFBLEDevice:(id)arg1;

@end
