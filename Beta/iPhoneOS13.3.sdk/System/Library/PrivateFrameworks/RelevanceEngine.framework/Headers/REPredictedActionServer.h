/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSXPCConnection, REObserverStore, REUpNextScheduler;

@protocol OS_dispatch_queue;

@interface REPredictedActionServer : NSObject

{
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _fetchingData;
    NSMutableArray *_fetchCompletionBlocks;
    REObserverStore *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_invalidateConnection;
- (void)_clearConnection;
- (void)_notifyObservers;
- (void)_requestPredictions;
- (void)_queue_fetchPredicitions;
- (void)_accessOrEnqueueDataRequest:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)_queue_setupConnection;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishProcessingData;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchPredictedActions:(CDUnknownBlockType)arg1;

@end
