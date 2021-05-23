/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/Swift-Protocol.h>

@protocol CKSyncEngineDataSource <Swift>

- (unsigned short)syncEngine:didUpdateMetadata: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:didSaveRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:failedToSaveRecord:error: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:didDeleteRecordWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:failedToDeleteRecordWithID:error: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:recordToSaveForRecordID: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:didFetchRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEngine:recordWithIDWasDeleted:recordType: /* Error: Ran out of types for this method. */;

@end
