/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PFCloudKitExporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitExportContext : NSObject

{
    PFCloudKitExporterOptions *_options;
    unsigned long long _totalBytes;
    unsigned long long _totalRecords;
    unsigned long long _totalRecordIDs;
    NSMutableArray *_writtenAssetURLs;
}

@property (nonatomic, readonly) NSArray *writtenAssetURLs;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly) unsigned long long totalRecords;
@property (nonatomic, readonly) unsigned long long totalRecordIDs;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (_Bool)processAnalyzedHistoryInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)checkForObjectsNeedingExportInStore:(id)arg1 andReturnCount:(unsigned long long *)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
- (id)newOperationBySerializingDirtyObjectsInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)modifyRecordsOperationFinishedForStore:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 managedObjectContext:(id)arg5 error:(id *)arg6;
- (_Bool)currentBatchExceedsThresholds:(id)arg1;

@end
