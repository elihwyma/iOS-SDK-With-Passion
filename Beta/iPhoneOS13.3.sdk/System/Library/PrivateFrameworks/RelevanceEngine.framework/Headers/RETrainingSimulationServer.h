/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, REObserverStore;

@protocol OS_dispatch_queue;

@interface RETrainingSimulationServer : NSObject

{
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    REObserverStore *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServer;

- (void)dealloc;
- (id)_init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)availableRelevanceEnginesDidChange;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)availableRelevanceEngines:(CDUnknownBlockType)arg1;
- (void)_safelyEnumerateObserversWithBlock:(CDUnknownBlockType)arg1 observerAccessBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
