/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUUID, PFCloudKitFetchedAssetBytesMetric, PFCloudKitFetchedRecordBytesMetric;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImporterWorkItem

{
    NSArray *_changedRecordZoneIDs;
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSUUID *_importOperationIdentifier;
    NSMutableArray *_updatedRecords;
    unsigned long long _totalOperationBytes;
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_allRecordIDs;
    NSMutableArray *_encounteredErrors;
    NSMutableDictionary *_fetchedZoneIDToChangeToken;
    NSMutableArray *_failedRelationships;
    NSMutableArray *_incrementalResults;
    unsigned long long _currentOperationBytes;
}

@property (nonatomic, readonly) NSArray *changedRecordZoneIDs;
@property (nonatomic, readonly) NSUUID *importOperationIdentifier;
@property (nonatomic, readonly) NSDictionary *assetPathToSafeSaveURL;
@property (nonatomic, readonly) NSArray *encounteredErrors;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSDictionary *recordTypeToDeletedRecordID;
@property (nonatomic, readonly) NSArray *allRecordIDs;
@property (nonatomic, readonly) unsigned long long currentOperationBytes;
@property (nonatomic, readonly) unsigned long long totalOperationBytes;
@property (nonatomic, readonly) unsigned long long totalRecordBytes;
@property (nonatomic, readonly) NSDictionary *fetchedZoneIDToChangeToken;
@property (nonatomic, readonly) NSArray *incrementalResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithChangedRecordZoneIDs:(id)arg1 options:(id)arg2 request:(id)arg3;
- (void)fetchOperationFinishedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDownloadedAssetFiles;
- (void)addUpdatedRecord:(id)arg1;
- (id)newMirroringResultByApplyingAccumulatedChanges:(id *)arg1;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (void)addDeletedRecordID:(id)arg1 ofType:(id)arg2;
- (void)serverChangeTokenUpdated:(id)arg1 forRecordZoneWithID:(id)arg2;
- (void)fetchFinishedForZoneWithID:(id)arg1 serverChangeToken:(id)arg2 error:(id)arg3;
- (_Bool)applyAccumulatedChanges:(_Bool *)arg1 error:(id *)arg2;
- (void)checkAndApplyChangesIfNeeded:(id)arg1;

@end
