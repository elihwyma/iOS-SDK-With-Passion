/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@class NSArray, NSMutableArray;

@interface PMLAWDAvailableSessionsTrackerMock

{
    NSMutableArray *_internalTrackedStats;
    NSArray *_trackedStats;
}

@property (readonly) NSArray *trackedStats;

- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)recentStatsForModelName:(id)arg1;
- (void)triggerAWDMetricRequest;
- (void)clearTrackedMessages;

@end
