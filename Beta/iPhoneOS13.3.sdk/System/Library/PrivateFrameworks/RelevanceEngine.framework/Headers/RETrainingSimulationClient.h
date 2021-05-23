/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, RETrainingSimulationClientDelegate;

@interface RETrainingSimulationClient : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSString *_targetProcessName;
    id <RETrainingSimulationClientDelegate> _delegate;
}

@property (nonatomic, readonly) NSString *targetProcessName;
@property (weak, nonatomic, readonly) id <RETrainingSimulationClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (void)availableRelevanceEnginesDidChange;
- (id)initWithTargetProcessName:(id)arg1 delegate:(id)arg2;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2;
- (_Bool)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3;
- (id)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1;
- (id)fetchAllElementsInRelevanceEngine:(id)arg1;
- (id)availableRelevanceEngines;
- (_Bool)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2;
- (id)diagnosticLogFileForRelevanceEngine:(id)arg1;
- (id)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;

@end
