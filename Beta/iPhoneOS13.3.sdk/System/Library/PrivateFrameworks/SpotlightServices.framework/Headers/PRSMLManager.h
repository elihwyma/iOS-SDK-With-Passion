/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, PRSCoreDuet;

@interface PRSMLManager : NSObject

{
    PRSCoreDuet *_coreDuet;
    NSMutableDictionary *_mapPredictionEnginesToClasses;
    NSMutableDictionary *_mapPredictionEnginesToCounts;
    NSMutableDictionary *_mapPredictionEnginesToCountFiles;
    NSMutableDictionary *_mapPredictionEnginesToPredictedTopHit;
    NSMutableDictionary *_dictCoreDuetInfo;
    NSArray *_categoryList;
    NSMutableDictionary *_combinedTopScoreOrder;
    NSMutableDictionary *_combinedBottomScoreOrder;
}

@property (retain) PRSCoreDuet *coreDuet;
@property (retain) NSMutableDictionary *mapPredictionEnginesToClasses;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCounts;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCountFiles;
@property (retain) NSMutableDictionary *mapPredictionEnginesToPredictedTopHit;
@property (retain) NSMutableDictionary *dictCoreDuetInfo;
@property (retain) NSArray *categoryList;
@property (retain) NSMutableDictionary *combinedTopScoreOrder;
@property (retain) NSMutableDictionary *combinedBottomScoreOrder;

+ (id)createPathToSpotlightPrefFile;
+ (id)getSPMLSharedInstance;

- (id)initManager;
- (void)addCategoryAndGroupNameToTrainCategories:(id)arg1 groupName:(id)arg2;
- (id)getLastSavedCategoryRankings;
- (unsigned long long)getTotalResultsUsedCountForDuet;
- (unsigned long long)getCountForCategory:(id)arg1;
- (id)getRankedCategoriesAsDictionaryForDays:(long long)arg1;
- (void)saveLastRankingForCategories:(id)arg1;
- (void)dumpPredictionStatsToFlatFiles;

@end
