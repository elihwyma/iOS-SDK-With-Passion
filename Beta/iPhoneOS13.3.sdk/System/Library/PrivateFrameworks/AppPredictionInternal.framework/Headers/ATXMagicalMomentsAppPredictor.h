/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject

{
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (id)init;
- (void)train;
- (id)addNowPlayingEventsToAppLaunches:(id)arg1;
- (id)fetchAppLaunchEventsForTraining;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)arg1;

@end
