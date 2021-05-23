/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _PASCFBurstTrie;

@protocol ATXLocationManagerProtocol;

@interface ATXGlobalAppScorePredictor : NSObject

{
    _PASCFBurstTrie *_index;
    _PASCFBurstTrie *_signalsTrie;
    id <ATXLocationManagerProtocol> _locationManager;
}

@property (retain, nonatomic) id <ATXLocationManagerProtocol> locationManager;

+ (id)sharedInstance;

- (id)init;
- (id)globalPopularitiesAtTimeOfDay:(int)arg1 atDayOfWeek:(int)arg2 atLocation:(int)arg3 withLastAppLaunched:(id)arg4;
- (id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 withLastAppLaunched:(id)arg3;
- (id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 atLocation:(long long)arg3 withLastAppLaunched:(id)arg4;
- (id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 withLastAppLaunched:(id)arg5;
- (id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2;
- (id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4;

@end
