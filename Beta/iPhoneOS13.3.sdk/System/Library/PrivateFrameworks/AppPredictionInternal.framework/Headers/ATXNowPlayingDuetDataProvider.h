/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetDataProvider.h>

@interface ATXNowPlayingDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (id)playbackEventsAfterSecondsOfInactivity:(double)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)convertNowPlayingEventsToAppLaunchEvents:(id)arg1;
- (id)mostRecentPlayingNowPlayingEventWithMaxAgeInSeconds:(double)arg1;

@end
