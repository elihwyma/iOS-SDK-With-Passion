/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton

{
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}

- (void)dealloc;
- (id)_init;
- (id)lastPerformedDateForAction:(id)arg1;
- (unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1;
- (_Bool)actionWasPerformedLocally:(id)arg1;
- (void)_handleRecentActionNotification:(id)arg1;
- (void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(_Bool)arg3;
- (id)_dataForAction:(id)arg1;
- (void)didPerformAction:(id)arg1;

@end
