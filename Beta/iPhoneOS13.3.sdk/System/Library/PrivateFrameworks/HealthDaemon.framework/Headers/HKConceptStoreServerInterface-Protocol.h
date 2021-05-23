/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HKConceptStoreServerInterface <Swift>

- (unsigned short)remote_startTaskServerIfNeeded;
- (unsigned short)remote_ontologyVersionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_conceptByResolvingContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_displayNamesByResolvingContexts:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryConceptsByAttribute:withValue:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryConceptByID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_unitTest_queryConceptByExactNameMatch:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryConceptsByRelationship:toNodeWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryConceptsByRelationship:fromNodeWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryNodeNameForAttributeWithKeyID:value:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryRelationshipsForNodeWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_makeAssociationFromSample:toConcept:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_breakAssociationFromSample:toConcept:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_queryConceptsAssociatedToUserRecordsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_cleanUpAfterUnitTestWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_resetOntologyUsingAssetAtLocation:rememberLocation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_currentIndexingState: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_testTaskServerWithCompletion: /* Error: Ran out of types for this method. */;

@end
