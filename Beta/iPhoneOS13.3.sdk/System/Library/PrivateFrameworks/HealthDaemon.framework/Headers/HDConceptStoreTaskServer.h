/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class NSString;

@interface HDConceptStoreTaskServer : HDStandardTaskServer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_ontologyVersionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_conceptByResolvingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_displayNamesByResolvingContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_queryConceptsByAttribute:(long long)arg1 withValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryConceptByID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_unitTest_queryConceptByExactNameMatch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_queryConceptsByRelationship:(id)arg1 toNodeWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryConceptsByRelationship:(id)arg1 fromNodeWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryNodeNameForAttributeWithKeyID:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryRelationshipsForNodeWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_makeAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_breakAssociationFromSample:(id)arg1 toConcept:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_queryConceptsAssociatedToUserRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_cleanUpAfterUnitTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_currentIndexingState:(CDUnknownBlockType)arg1;
- (void)remote_testTaskServerWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)conceptIndexManagerDidBecomeQuiescent:(id)arg1 samplesProcessedCount:(long long)arg2;
- (void)conceptIndexManagerDidChangeExecutionState:(unsigned long long)arg1;

@end
