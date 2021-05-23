/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordZone, NSCloudKitMirroringDelegateOptions, NSURL, PFCloudKitStoreMonitor;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFCloudKitImporterOptions : NSObject

{
    CKDatabase *_database;
    CKRecordZone *_recordZone;
    PFCloudKitStoreMonitor *_monitor;
    NSCloudKitMirroringDelegateOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_assetStorageURL;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *monitor;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSURL *assetStorageURL;

- (void)dealloc;
- (id)copy;
- (id)initWithOptions:(id)arg1 monitor:(id)arg2 assetStorageURL:(id)arg3 workQueue:(id)arg4 zone:(id)arg5 andDatabase:(id)arg6;

@end
