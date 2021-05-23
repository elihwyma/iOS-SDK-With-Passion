/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMLocationDonation : NSObject

{
    PETDistributionEventTracker *_tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMLocationDonationSource_)arg2 algorithm:(struct PPMLocationAlgorithm_)arg3;

@end
