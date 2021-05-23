/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SSRankingFeedbackHandler : NSObject

{
    NSMutableDictionary *_mapProtectionClassToBundleIdToItem;
    NSMutableArray *_sectionCSItems;
    NSObject<OS_dispatch_queue> *_countQueue;
}

@property (retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem;
@property (retain) NSMutableArray *sectionCSItems;
@property (retain) NSObject<OS_dispatch_queue> *countQueue;

+ (id)sharedInstance;
+ (id)copyRenderEngagementCounts;

- (id)init;
- (id)fetchResults;
- (id)getSyntheticTestRankingItemsForStressTest;
- (void)resetResultWithRankingItems:(id)arg1;
- (id)getSyntheticTestRankingItem;
- (void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3;
- (void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3;
- (void)writeRenderAndEngagementInfo;
- (void)testForDurationWithIntervals:(int *)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4;
- (void)testCountsUptoOneDay;
- (void)testCountsUptoWeek;
- (void)testCountsUptoMonth;
- (void)testCountsUptoQuarter;
- (void)testCountsUptoHalfYear;
- (void)testCountsUptoYear;
- (void)testCountsAfterYear;
- (void)testCountsAfterCoupleYears;
- (void)testCountsMovingDaysInPast;
- (void)testCountsMovingYearInPast;
- (void)testCountsMovingCoupleOfYearsInPast;
- (void)testForDummyEntry;
- (void)testCountsForRegularEngagement;
- (void)stressTestCounts;
- (void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4;
- (void)fetchBundleRenderAndEngagementInfo:(id)arg1;
- (void)fetchBundleRenderAndEngagementInfo;

@end
