/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/Swift-Protocol.h>

@protocol MLMediaLibraryServiceProtocol <Swift>

- (unsigned short)performDatabaseOperation:withAttributes:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)validateDatabaseAtPath:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)attemptDatabaseFileRecoveryAtPath:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)checkIntegrityOfDatabaseAtPath:repairFaults:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performDiagnosticWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)recreateDatabaseAtPath:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTransactionForDatabaseAtPath:withPriorityLevel:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)executeUpdate:withParameters:onTransaction:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)executeQuery:withParameters:options:onTransaction:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)endTransaction:shouldCommit:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setOptions:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performImport:fromSource:withUUID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelImportOperation:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)lockDatabaseForReason:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unlockDatabaseWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getLanguageResourcesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSpotlightIndexForBundleID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSpotlightIndexMetadataForItemsWithIdentifiers:bundleID:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performBackupOfDatabaseAtPath:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performRestoreOfLatestBackupForDatabaseAtPath:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)performMaintenanceTasksForDatabaseAtPath:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getMediaLibraryResourcesServiceListenerEndpointWithCompletion: /* Error: Ran out of types for this method. */;

@end
