/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

@interface EKInviteeAlternativeTimeSearcher : NSObject

{
    _Bool _noConflictRequired;
    _Bool _availabilityRequestInProgress;
    _Bool _internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
    _Bool _internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSDate *_internalOriginalStartDate;
    NSDate *_internalOriginalEndDate;
    NSDate *_originalRangeStartDate;
    NSMutableArray *_internalProposedStarts;
    EKSource *_source;
    NSString *_ignoredEventID;
    NSOperationQueue *_availabilityRequestsQueue;
    NSMutableDictionary *_participantAddressesToParticipants;
    NSString *_organizerAddress;
    NSDate *_nextAvailabilityRangeStartDate;
    double _availabilitySearchDurationMultiplier;
    unsigned long long _remainingSearchAttempts;
    NSMutableArray *_leftoverSpans;
    NSMutableArray *_internalTimesWhenAllAttendeesCanAttend;
    NSMutableArray *_internalTimesWhenSomeAttendeesCanAttend;
    NSMutableArray *_internalProposedTimes;
    NSMutableArray *_internalOriginalConflictedParticipants;
    CDUnknownBlockType _stateChanged;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSDate *internalOriginalStartDate;
@property (retain, nonatomic) NSDate *internalOriginalEndDate;
@property (retain, nonatomic) NSDate *originalRangeStartDate;
@property (retain, nonatomic) NSMutableArray *internalProposedStarts;
@property (retain, nonatomic) EKSource *source;
@property (retain, nonatomic) NSString *ignoredEventID;
@property (retain, nonatomic) NSOperationQueue *availabilityRequestsQueue;
@property (retain, nonatomic) NSMutableDictionary *participantAddressesToParticipants;
@property (retain, nonatomic) NSString *organizerAddress;
@property (nonatomic) _Bool availabilityRequestInProgress;
@property (retain, nonatomic) NSDate *nextAvailabilityRangeStartDate;
@property (nonatomic) double availabilitySearchDurationMultiplier;
@property (nonatomic) unsigned long long remainingSearchAttempts;
@property (retain, nonatomic) NSMutableArray *leftoverSpans;
@property (retain, nonatomic) NSMutableArray *internalTimesWhenAllAttendeesCanAttend;
@property (retain, nonatomic) NSMutableArray *internalTimesWhenSomeAttendeesCanAttend;
@property (retain, nonatomic) NSMutableArray *internalProposedTimes;
@property (retain, nonatomic) NSMutableArray *internalOriginalConflictedParticipants;
@property (nonatomic) _Bool internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property (nonatomic) _Bool internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (copy, nonatomic) CDUnknownBlockType stateChanged;
@property (nonatomic, readonly) NSDate *originalStartDate;
@property (nonatomic, readonly) NSDate *originalEndDate;
@property (nonatomic, readonly) NSArray *originalConflictedParticipants;
@property (nonatomic, readonly) NSArray *timesWhenAllAttendeesCanAttend;
@property (nonatomic, readonly) NSArray *timesWhenSomeAttendeesCanAttend;
@property (nonatomic, readonly) NSArray *proposedTimes;
@property (nonatomic, readonly) _Bool searchingForMoreTimesWhenAllAttendeesCanAttend;
@property (nonatomic, readonly) _Bool searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property (nonatomic) _Bool noConflictRequired;

+ (id)stateAsString:(long long)arg1;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;
+ (long long)_invalidBinarySearchIndex;
+ (void)_validateSpans:(id)arg1;
+ (id)_addressesForParticipants:(id)arg1;
+ (_Bool)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;
+ (id)_allButLastItemInArray:(id)arg1;
+ (id)_allButFirstItemInArray:(id)arg1;
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;
+ (id)_rankNonOptimalTimeSpans:(id)arg1;
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;

- (void)dealloc;
- (id)initWithStateChangedCallback:(CDUnknownBlockType)arg1;
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;
- (void)_resetSearchFallbackNumbers;
- (void)_attemptSearch;
- (void)_sendStateChange:(long long)arg1;
- (void)_transitionToConflictFoundStateAndSearch;
- (id)_participantforParticipantAddress:(id)arg1;
- (void)_haltSearchWithError:(_Bool)arg1;
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;

@end
