/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterFetchRecordsWorkItem : PFCloudKitImporterWorkItem

{
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_updatedRecordIDs;
    unsigned long long _totalAssetBytes;
    NSMutableArray *_encounteredErrors;
}

@property (nonatomic, readonly) NSDictionary *assetPathToSafeSaveURL;
@property (nonatomic, readonly) NSArray *encounteredErrors;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSArray *updatedRecordIDs;
@property (nonatomic, readonly) unsigned long long totalAssetBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;
- (void)doWorkWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchRecordsRequest;
- (void)fetchFinishedForRecord:(id)arg1 withID:(id)arg2 error:(id)arg3;
- (void)fetchOperationFinishedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDownloadedAssetFiles;
- (void)addUpdatedRecord:(id)arg1;
- (id)newMirroringResultByApplyingAccumulatedChanges:(id *)arg1;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;

@end
