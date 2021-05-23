/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol ATXPredictedLocationsManagerProtocol;

@interface ATXPredictedTransitionsCache : NSObject

{
    id <ATXPredictedLocationsManagerProtocol> _manager;
    NSMutableDictionary *_homeToWork;
    NSMutableDictionary *_workToHome;
}

+ (void)removeEntriesFromCache:(id)arg1 beforeDate:(id)arg2;
+ (id)ceilingDateToNextHour:(id)arg1;
+ (id)getNextTransitionInCache:(id)arg1 fromDate:(id)arg2;

- (id)init;
- (void)dump;
- (id)initWithLocationManager:(id)arg1;
- (id)getNextHomeToWorkTransitionsOnActivity:(id)arg1;
- (id)getNextWorkToHomeTransitionsOnActivity:(id)arg1;
- (void)prewarmOnActivity:(id)arg1;
- (void)fetchEntriesStartingDate:(id)arg1 onActivity:(id)arg2;
- (_Bool)cacheHeadingFromLoiType:(long long)arg1 toLoiType:(long long)arg2 forDate:(id)arg3;
- (id)cacheForDestinationLoiType:(long long)arg1;
- (void)pruneStaleEntries;

@end
