/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, WBSHistoryVisit;

@interface WBSHistoryItem : NSObject

{
    WBSHistoryVisit *_lastVisit;
    NSMutableSet *_visitsPendingWriteToDataStore;
    long long _databaseID;
    unsigned long long _visitCount;
    Vector_3b5d2a9f _dailyVisitCountScores;
    Vector_3b5d2a9f _weeklyVisitCountScores;
    NSMutableArray *_redirectSourceItems;
    NSMutableArray *_autocompleteTriggers;
    NSMutableArray *_visits;
    _Bool _shouldRecomputeDerivedVisitCountScores;
    float _cachedTopSitesURLPenalty;
    float _cachedTopSitesVisitScore;
    NSURL *_url;
    NSString *_userVisibleURLString;
    NSString *_urlString;
    unsigned long long _visitCountScore;
    double _lastTimeTopSitesScoreWasComputed;
}

@property (nonatomic, readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (nonatomic, readonly) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic, readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (nonatomic, readonly) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSString *userVisibleURLString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSArray *redirectSourceItems;
@property (nonatomic, readonly) NSArray *autocompleteTriggers;
@property (nonatomic, readonly) NSString *stringForUserTypedDomainExpansion;
@property (nonatomic, readonly) WBSHistoryVisit *lastVisit;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) NSDate *lastVisitedDate;
@property (nonatomic, readonly) NSArray *visits;
@property (nonatomic, readonly) unsigned long long visitCount;
@property (nonatomic, readonly) unsigned long long visitCountScore;
@property (nonatomic, readonly) _Bool shouldRecomputeDerivedVisitCountScores;
@property (nonatomic, readonly) _Bool lastVisitWasHTTPNonGet;
@property (nonatomic) _Bool lastVisitWasFailure;
@property (nonatomic, readonly) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (nonatomic, readonly) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (nonatomic, readonly) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (nonatomic, readonly) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (nonatomic, readonly) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (nonatomic, readonly) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (nonatomic, readonly) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (nonatomic, readonly) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property (nonatomic) float cachedTopSitesURLPenalty;
@property (nonatomic) float cachedTopSitesVisitScore;
@property (nonatomic) double lastTimeTopSitesScoreWasComputed;
@property (copy, nonatomic, readonly) NSString *userVisibleHostOrFallbackURLString;

+ (void)initialize;
+ (id)synchronizationQueue;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;

- (id).cxx_construct;
- (id)initWithURLString:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (_Bool)addAutocompleteTrigger:(id)arg1;
- (void)mergeDataFromItem:(id)arg1;
- (void)wasVisited:(id)arg1;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)addExistingVisit:(id)arg1;
- (void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2;
- (void)_collapseDailyVisitsToWeekly;
- (id)_autocompleteTriggersFromSynchronizationQueue;
- (_Bool)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1 indexOfNewVisit:(int *)arg2;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (void)_addVisit:(id)arg1;
- (void)_addExistingVisit:(id)arg1;
- (void)visitWasModified:(id)arg1;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1;

@end
