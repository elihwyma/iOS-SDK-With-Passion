/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKServerChangeToken, NSArray, NSCloudKitMirroringImportRequest, NSMutableArray, PFCloudKitImporterOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporter : NSObject

{
    PFCloudKitImporterOptions *_options;
    NSCloudKitMirroringImportRequest *_request;
    NSArray *_workItems;
    NSMutableArray *_workItemResults;
    CKServerChangeToken *_updatedDatabaseChangeToken;
    unsigned long long _totalImportedBytes;
}

@property (copy, nonatomic, readonly) PFCloudKitImporterOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *request;
@property (nonatomic, readonly) NSArray *workItems;
@property (nonatomic, readonly) NSArray *workItemResults;
@property (nonatomic, readonly) CKServerChangeToken *updatedDatabaseChangeToken;
@property (nonatomic, readonly) unsigned long long totalImportedBytes;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;
- (void)processWorkItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)databaseFetchFinishWithContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processDatabaseImportContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dequeueWorkItem;
- (void)workItemFinished:(id)arg1 withResult:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)importIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
