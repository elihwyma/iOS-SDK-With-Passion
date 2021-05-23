/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@interface SFProximityEstimator : NSObject

{
    int _rssiEnter;
    int _rssiExit;
    int _rssiImmediate;
    int _rssiNear;
    int _rssiFar;
    int _estimatedRSSI;
}

@property (nonatomic, readonly) int estimatedRSSI;

+ (id)proximityEstimatorWithProximityInfo:(id)arg1;

- (id)description;
- (id)initWithProximityInfo:(id)arg1;
- (id)descriptionParams;
- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (unsigned int)updateWithSFBLEDevice:(id)arg1;

@end
