/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, WBSHistory, WBSHistorySessionIntervalCache;

@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject

{
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    WBSHistory *_history;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

@property (copy, nonatomic, readonly) NSArray *orderedSessions;
@property (nonatomic, readonly) unsigned long long numberOfSessions;

+ (id)sharedSessionController;

- (void)_historyItemsWereRemoved:(id)arg1;
- (id)initWithHistory:(id)arg1;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_timeZoneDidChange:(id)arg1;
- (void)_loadSessionCache;
- (_Bool)_getKey:(id *)arg1 forDate:(double)arg2;
- (id)_orderedSessionKeys;
- (unsigned long long)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (void)_addItemsToSessionCache:(id)arg1 shouldPostChangeNotification:(_Bool)arg2;
- (void)_removeItemsFromSessionCache:(id)arg1;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)orderedItemsNewerThanDate:(id)arg1 maxCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sessionForItem:(id)arg1;
- (void)_requestSessionKeyForDate:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
