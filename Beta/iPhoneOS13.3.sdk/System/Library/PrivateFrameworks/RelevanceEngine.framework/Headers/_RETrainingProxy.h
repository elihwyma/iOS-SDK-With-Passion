/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, RETrainingSimulationClient, RETrainingSimulationServer;

@interface _RETrainingProxy : NSObject

{
    RETrainingSimulationClient *_client;
    NSString *_serviceName;
    RETrainingSimulationServer *_server;
}

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) RETrainingSimulationServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithServiceName:(id)arg1;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)availableRelevanceEngines:(CDUnknownBlockType)arg1;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
