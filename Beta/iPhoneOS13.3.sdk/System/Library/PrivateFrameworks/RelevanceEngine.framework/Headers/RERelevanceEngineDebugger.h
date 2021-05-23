/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSArray, NSObject, REObserverStore;

@protocol OS_dispatch_queue;

@interface RERelevanceEngineDebugger : RESingleton

{
    REObserverStore *_observerStore;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSArray *availableEngines;

- (id)_init;
- (_Bool)_isValidEngine:(id)arg1;
- (id)engineWithName:(id)arg1;
- (id)firstEngine;
- (id)diagnosticLogsForEngine:(id)arg1;
- (void)reloadDataSourceForEngine:(id)arg1;
- (id)dataSourceElementsForEngine:(id)arg1;
- (id)allRelevanceProviderValuesForEngine:(id)arg1;
- (id)orderedElementsForEngine:(id)arg1;
- (void)_registerEngine:(id)arg1;
- (void)_unregisterEngine:(id)arg1;

@end
