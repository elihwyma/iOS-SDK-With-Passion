/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSMapTable, NSMutableDictionary, NSString, RETrainingSimulationServer;

@interface RETrainingSimulationCoordinator : RESingleton

{
    RETrainingSimulationServer *_server;
    NSMutableDictionary *_elementsAddedByEngine;
    NSMapTable *_actionCompletionBlocks;
    _Bool _isActivelyTraining;
}

@property _Bool isActivelyTraining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)prewarm;

- (void)dealloc;
- (id)_init;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)availableRelevanceEngines:(CDUnknownBlockType)arg1;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_relevanceEnginesDidChange;
- (id)_engineWithName:(id)arg1;
- (id)_unavailableEngineWithNameError:(id)arg1;
- (void)_accesssEngineWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)elementAction:(id)arg1 wantsToPerformTapActionForComplicationSlot:(id)arg2;
- (void)elementAction:(id)arg1 wantsViewControllerDisplayed:(id)arg2;
- (void)elementAction:(id)arg1 didFinishTask:(_Bool)arg2;

@end
