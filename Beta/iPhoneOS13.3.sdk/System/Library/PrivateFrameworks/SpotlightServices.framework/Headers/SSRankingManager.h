/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSSet, NSString, PRSRankingConfiguration;

@interface SSRankingManager : NSObject

{
    _Bool _isInternalDevice;
    _Bool _isCancelled;
    PRSRankingConfiguration *_rankingConfiguration;
    NSMutableString *_logValues;
    double _blendingTime;
    NSString *_query;
    NSSet *_allowedTopHitSections;
}

@property (retain) NSString *query;
@property (retain) NSSet *allowedTopHitSections;
@property _Bool isInternalDevice;
@property _Bool isCancelled;
@property (retain, nonatomic) PRSRankingConfiguration *rankingConfiguration;
@property (retain) NSMutableString *logValues;
@property (nonatomic) double blendingTime;

+ (void)initialize;
+ (void)fetchDuetValues;
+ (id)getCoreDuetValues;

- (void)cancel;
- (id)initWithQuery:(id)arg1;
- (void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(_Bool)arg4;
- (id)removeBlackListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2;
- (double)roundedValueForScore:(double)arg1;
- (void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1;
- (void)addCEPValuesForTTR;
- (id)relativeRankWithAbsRank:(id)arg1 numberValues:(unsigned long long)arg2;
- (id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4;
- (id)removeBlackListedSectionsForMapping:(id)arg1;
- (long long)compareDate:(id)arg1 withDate:(id)arg2;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 isPeopleSearch:(_Bool)arg3 isScopedAppSearch:(_Bool)arg4 queryId:(unsigned long long)arg5 isCJK:(_Bool)arg6;
- (id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(_Bool)arg3 triggerEvent:(unsigned long long)arg4 correction:(id)arg5;
- (id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3;
- (id)rankAppsAtTopForScopedSearchWithSections:(id)arg1;
- (void)finalizeLog;
- (id)keyForSection:(id)arg1;
- (void)updateWithNewRankingInfo:(id)arg1;

@end
