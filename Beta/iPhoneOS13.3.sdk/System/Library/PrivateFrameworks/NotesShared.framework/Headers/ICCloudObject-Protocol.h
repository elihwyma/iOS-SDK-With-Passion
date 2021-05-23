/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/Swift-Protocol.h>

@protocol ICCloudObject <Swift>

+ (unsigned short)existingCloudObjectForRecordID:accountID:context: /* Error: Ran out of types for this method. */;
+ (unsigned short)newCloudObjectForRecord:accountID:context: /* Error: Ran out of types for this method. */;
+ (unsigned short)newPlaceholderObjectForRecordName:accountID:context: /* Error: Ran out of types for this method. */;
+ (unsigned short)allCloudObjectsInContext: /* Error: Ran out of types for this method. */;

- (unsigned short)objectID;
- (unsigned short)className;
- (unsigned short)recordType;
- (unsigned short)recordID;
- (unsigned short)loggingDescription;
- (unsigned short)deleteFromLocalDatabase;
- (unsigned short)needsToBePushedToCloud;
- (unsigned short)needsToBeDeletedFromCloud;
- (unsigned short)needsToBeFetchedFromCloud;
- (unsigned short)newlyCreatedRecord;
- (unsigned short)objectWasFetchedFromCloudWithRecord:accountID: /* Error: Ran out of types for this method. */;
- (unsigned short)fixBrokenReferences;
- (unsigned short)mergeDataFromRecord:accountID: /* Error: Ran out of types for this method. */;
- (unsigned short)userSpecificRecordID;
- (unsigned short)didFetchUserSpecificRecord:accountID: /* Error: Ran out of types for this method. */;
- (unsigned short)isInICloudAccount;
- (unsigned short)objectsToBeDeletedBeforeThisObject;
- (unsigned short)newlyCreatedRecordWithObfuscator: /* Error: Ran out of types for this method. */;
- (unsigned short)needsToSaveUserSpecificRecord;
- (unsigned short)wantsUserSpecificRecord;
- (unsigned short)newlyCreatedUserSpecificRecord;
- (unsigned short)didSaveUserSpecificRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)didFailToSaveUserSpecificRecord:accountID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)didDeleteUserSpecificRecordID: /* Error: Ran out of types for this method. */;
- (unsigned short)isValidObject;
- (unsigned short)objectWasDeletedFromCloud;
- (unsigned short)objectWasDeletedFromCloudByAnotherDevice;
- (unsigned short)objectWillBePushedToCloudWithOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)objectWasPushedToCloudWithOperation:serverRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)objectFailedToBePushedToCloudWithOperation:record:error: /* Error: Ran out of types for this method. */;
- (unsigned short)objectWasFetchedButDoesNotExistInCloud;

@end
