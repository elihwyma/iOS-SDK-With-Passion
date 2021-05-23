/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject

{
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (nonatomic, readonly) NSArray *frequentlyVisitedSites;

+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned long long)arg3;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned long long)arg4;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3;

- (void)_recomputeFrequentlyVisitedSitesNow;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (float)_scoreForHistoryItem:(id)arg1;
- (id)_canonicalizedFavoritesURLStringSet;
- (_Bool)_saveFrequentlyVisitedSites:(id)arg1;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2;
- (_Bool)recomputeFrequentlyVisitedSitesIfNecessary;
- (void)clearFrequentlyVisitedSites;

@end
