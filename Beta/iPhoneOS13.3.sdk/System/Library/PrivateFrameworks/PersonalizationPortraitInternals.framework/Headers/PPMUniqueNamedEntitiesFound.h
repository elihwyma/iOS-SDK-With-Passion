/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PETDistributionEventTracker;

@interface PPMUniqueNamedEntitiesFound : NSObject

{
    PETDistributionEventTracker *_tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(double)arg1;

@end
