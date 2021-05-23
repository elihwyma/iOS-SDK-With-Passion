/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class CHManager, NSArray, NSMutableSet, NSString, TUCallProviderManager, TUDispatcher;

@interface TUCallHistoryController : NSObject

{
    unsigned long long _coalescingStrategy;
    unsigned long long _options;
    NSArray *_recentCalls;
    unsigned long long _unreadCallCount;
    unsigned long long _unreadVideoCallCount;
    unsigned long long _unreadAudioCallCount;
    CHManager *_callHistoryManager;
    TUCallProviderManager *_callProviderManager;
    TUDispatcher *_dispatcher;
    TUDispatcher *_simpleIvarDispatcher;
    NSMutableSet *_metadataPreCachedOptions;
}

@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (nonatomic) unsigned long long unreadVideoCallCount;
@property (nonatomic) unsigned long long unreadAudioCallCount;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;
+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)tuHandleFromCHHandle:(id)arg1;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)boostQualityOfService;
- (id)initWithCoalescingStrategy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)arg1;
- (CDUnknownBlockType)callHistoryManagerRecentCallsDispatchBlock;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)markRecentCallsAsReadWithPredicate:(id)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)dispatcherDidFinishBoost:(id)arg1;
- (void)loadDispatchQueue;
- (CDUnknownBlockType)callHistoryManagerInitializationDispatchBlock;
- (void)callHistoryDatabaseChanged:(id)arg1;
- (void)deleteAllRecentCalls;
- (void)deleteRecentCall:(id)arg1;
- (void)deleteRecentCalls:(id)arg1;
- (void)markRecentCallsAsRead;
- (void)markRecentVideoCallsAsRead;
- (void)markRecentAudioCallsAsRead;
- (void)reloadWithOptions:(unsigned long long)arg1;
- (_Bool)canCoalesceCall:(id)arg1 withCall:(id)arg2;
- (_Bool)coalesceCall:(id)arg1 withCall:(id)arg2;
- (id)mostRecentCallWithHandle:(id)arg1;

@end
