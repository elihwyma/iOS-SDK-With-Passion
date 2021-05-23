/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMTopicDonation : NSObject

{
    PETDistributionEventTracker *_tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMTopicDonationSource_)arg2 algorithm:(struct PPMTopicAlgorithm_)arg3;

@end
