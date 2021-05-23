/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@protocol BCCloudDataSyncManagerDelegate <Swift>

- (unsigned short)entityName;
- (unsigned short)syncManager:startSyncToCKWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)signalSyncToCKForSyncManager: /* Error: Ran out of types for this method. */;
- (unsigned short)syncManager:removeCloudDataForIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncManager:updateSyncGenerationFromCloudData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncManager:resolveConflictsForRecords:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncManager:failedRecordIDs:completion: /* Error: Ran out of types for this method. */;

@end
