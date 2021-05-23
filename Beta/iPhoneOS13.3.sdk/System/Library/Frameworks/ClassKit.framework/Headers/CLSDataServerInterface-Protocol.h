/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/Swift-Protocol.h>

@protocol CLSDataServerInterface <Swift>

- (unsigned short)remote_mainAppContextWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_executeQuery:forClassNamed:predicate:sortDescriptors:state:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_executeQuery:forSpecification:state:limit:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_saveObjects:saveResponse:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_contextsMatchingIdentifierPath:parentContextID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_canSearchRostersWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_currentUserWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_registerDataObserver:withID:forClassNamed:predicate:sortDescriptors:oldChangeTag:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_deregisterDataObserverWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchTransparencyMessageInfoWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_shouldSyncTeacherBrowsedContextsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setShouldSyncTeacherBrowsedContexts:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchDeletedObjectIDsNewerThanDate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_authTreeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAndCompleteActiveAssignedActivitiesForContextPath:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_publishHandoutGraph:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_publishClass:membersToInsert:membersToDelete:completion: /* Error: Ran out of types for this method. */;

@end
