/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSArray, NSDate, NSNumber, NSPredicate, NSString;

@protocol SyncManagerProtocol;

@interface CHManager : CHSynchronizedLoggable

{
    _Bool _showsTelephonyCalls;
    _Bool _showsFaceTimeVideoCalls;
    _Bool _showsFaceTimeAudioCalls;
    _Bool _generateSyncTransactions;
    _Bool _cacheIsDirty;
    _Bool _reCoalesce;
    unsigned int _limitingCallTypes;
    NSDate *_limitingStartDate;
    NSDate *_limitingEndDate;
    NSArray *_limitingCallKinds;
    NSPredicate *_postFetchingPredicate;
    NSString *_coalescingStrategy;
    NSArray *_recentCalls;
    long long _numberOfUnseenMissedCalls;
    id <SyncManagerProtocol> _syncManager;
    NSArray *_uncoalescedRecentCalls;
    NSArray *_uncoalescedUnFilteredRecentCalls;
    NSNumber *_unreadCallCount;
}

@property (retain, nonatomic) NSArray *recentCalls;
@property long long numberOfUnseenMissedCalls;
@property (retain) id <SyncManagerProtocol> syncManager;
@property _Bool cacheIsDirty;
@property _Bool reCoalesce;
@property (retain, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls;
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls;
@property (retain) NSNumber *unreadCallCount;
@property (nonatomic) _Bool showsFaceTimeVideoCalls;
@property (nonatomic) _Bool showsFaceTimeAudioCalls;
@property (nonatomic) _Bool showsTelephonyCalls;
@property (nonatomic) _Bool generateSyncTransactions;
@property (nonatomic) unsigned int limitingCallTypes;
@property (copy, nonatomic) NSDate *limitingStartDate;
@property (copy, nonatomic) NSDate *limitingEndDate;
@property (copy, nonatomic) NSArray *limitingCallKinds;
@property (retain, nonatomic) NSPredicate *postFetchingPredicate;
@property (copy, nonatomic) NSString *coalescingStrategy;

+ (id)limitingCallKindsForCallType:(unsigned int)arg1;
+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(_Bool)arg2 isAnswered:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (void)flush;
- (void)clearDatabase;
- (id)latestCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1;
- (void)registerForNotifications;
- (void)deleteCall:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)setRead:(_Bool)arg1 forCallsWithPredicate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recentCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setDefaultInitValues;
- (void)setInitialLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKindsSync:(id)arg1;
- (void)handleCallHistoryContactStoreChangedInternalNotification:(id)arg1;
- (void)handleCallHistoryDatabaseChangedInternalNotification:(id)arg1;
- (void)currentLocaleChanged:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(_Bool)arg1;
- (id)unCoalesceCall:(id)arg1;
- (id)coalesceCalls:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (id)getLimitsDictionary;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (void)deleteAllCallsSync;
- (id)callsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;
- (id)latestRecentCallMatchingPredicate:(id)arg1;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (void)addToCallHistory:(id)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteAllCalls;
- (double)callTimersGetIncoming;
- (double)callTimersGetOutgoing;
- (double)callTimersGetLifetime;
- (void)callTimersReset;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (long long)setRead:(_Bool)arg1 forCallsWithPredicate:(id)arg2;
- (long long)deleteCallsWithPredicate:(id)arg1;
- (void)deleteCallsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)callCountWithPredicate:(id)arg1;
- (unsigned long long)coalescedCallCountWithPredicate:(id)arg1;
- (id)coalescedCallsWithPredicate:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 batchSize:(unsigned long long)arg4;

@end
