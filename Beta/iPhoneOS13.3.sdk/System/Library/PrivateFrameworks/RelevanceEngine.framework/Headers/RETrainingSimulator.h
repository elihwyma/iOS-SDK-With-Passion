/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, RETrainingSimulationClient;

@interface RETrainingSimulator : NSObject

{
    RETrainingSimulationClient *_client;
    NSString *_targetProcessName;
    NSString *_relevanceEngineName;
}

@property (nonatomic, readonly) NSString *targetProcessName;
@property (nonatomic, readonly) NSString *relevanceEngineName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)allElements;
- (id)availableRelevanceEngines;
- (void)trainingSimulationClientWasInterrupted:(id)arg1;
- (void)trainingSimulationClientWasInvalidated:(id)arg1;
- (id)initWithTargetProcess:(id)arg1 relevanceEngine:(id)arg2;
- (void)createElementFromDescription:(id)arg1;
- (_Bool)performCommand:(id)arg1 withOptions:(id)arg2;
- (id)allElementIdentifiers;
- (_Bool)runActionOfElementWithDescription1:(id)arg1;
- (id)storedDiagnosticLogsPath;
- (id)encodedObjectAtPath:(id)arg1;

@end
