/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface ATXDirectionsSupportingApps : NSObject

{
    NSSet *_blacklistApps;
}

+ (_Bool)_directionsModesSupportTransit:(id)arg1;
+ (_Bool)_directionsModesSupportRide:(id)arg1;
+ (_Bool)_directionsModesSupportAutomobile:(id)arg1;

- (id)init;
- (id)initWithBlacklistApps:(id)arg1;
- (id)supportedDirectionsApps;
- (id)allEligibleLocationsApplications;

@end
