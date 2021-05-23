/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMObjectsDeletion : NSObject

{
    PETDistributionEventTracker *_tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(double)arg1 source:(struct PPMObjectDonationSource_)arg2 component:(struct PPMPortraitComponent_)arg3 error:(struct PPMTypeSafeBool_)arg4;

@end
