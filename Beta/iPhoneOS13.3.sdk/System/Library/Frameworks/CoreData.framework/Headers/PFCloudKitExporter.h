/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringRequest, NSDictionary, NSMutableDictionary, PFCloudKitExportContext, PFCloudKitExporterOptions, PFCloudKitStoreMonitor;

@protocol OS_dispatch_queue, PFCloudKitExporterDelegate;

__attribute__((visibility("hidden")))
@interface PFCloudKitExporter : NSObject

{
    NSMutableDictionary *_operationIDToResult;
    CDUnknownBlockType _exportCompletionBlock;
    PFCloudKitExporterOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSCloudKitMirroringRequest *_request;
    NSObject<PFCloudKitExporterDelegate> *_delegate;
    PFCloudKitExportContext *_exportContext;
    PFCloudKitStoreMonitor *_monitor;
}

@property (copy, nonatomic, readonly) PFCloudKitExporterOptions *options;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (weak, nonatomic) NSObject<PFCloudKitExporterDelegate> *delegate;
@property (nonatomic, readonly) PFCloudKitExportContext *exportContext;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *monitor;
@property (nonatomic, readonly) NSDictionary *operationIDToResult;

- (void)dealloc;
- (void)exportIfNecessary;
- (_Bool)analyzeHistoryInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)executeOperation:(id)arg1;
- (void)finishExportWithResult:(id)arg1;
- (void)exportOperationFinished:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4;
- (void)updateMetadataForSavedRecords:(id)arg1 deletedRecordIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4;
- (id)initWithOptions:(id)arg1 request:(id)arg2 monitor:(id)arg3 workQueue:(id)arg4;
- (void)exportIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
