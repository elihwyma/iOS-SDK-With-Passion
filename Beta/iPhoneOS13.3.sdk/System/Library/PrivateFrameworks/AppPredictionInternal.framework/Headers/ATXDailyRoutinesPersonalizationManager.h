/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXContextualActionManager;

@protocol ATXLocationOfInterestManagerProtocol;

@interface ATXDailyRoutinesPersonalizationManager : NSObject

{
    ATXContextualActionManager *_actionManager;
    id <ATXLocationOfInterestManagerProtocol> _loiManager;
}

+ (id)sharedInstance;
+ (id)_unpackMostFrequentActionParameters:(id)arg1 havingCounts:(id)arg2 limit:(unsigned long long)arg3;
+ (id)_filterActions:(id)arg1 havingCounts:(id)arg2 includeBundleIds:(id)arg3 excludeBundleIds:(id)arg4 includeActionTypes:(id)arg5 excludeActionTypes:(id)arg6 havingMinOccurrences:(unsigned long long)arg7;
+ (id)_rankActions:(id)arg1 havingCounts:(id)arg2;
+ (id)_filterUnpackedActions:(id)arg1;

- (id)init;
- (_Bool)shouldDisplayDailyRoutineForContext:(id)arg1;
- (id)getActionPredictionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 limit:(unsigned long long)arg6;
- (id)initWithFakeActions:(id)arg1 loiManager:(id)arg2;
- (id)_getMostFrequentActionsForContext:(id)arg1 includeBundleIds:(id)arg2 excludeBundleIds:(id)arg3 includeActionTypes:(id)arg4 excludeActionTypes:(id)arg5 minOccurrences:(unsigned long long)arg6 limit:(unsigned long long)arg7;
- (_Bool)_enoughActionHistory;
- (_Bool)_allRequiredActionTypesPresent:(id)arg1 minOccurrences:(unsigned long long)arg2 forContext:(id)arg3;

@end
