/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL, PFUbiquityLocation;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityFilePresenter : NSObject

{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_presentedItemURL;
    NSObject<OS_dispatch_queue> *_processingQueue;
    _Bool _scheduledProcessingBlock;
    NSMutableArray *_pendingURLs;
    int _pendingURLsLock;
    NSMutableDictionary *_locationToSafeSaveFile;
    NSMutableDictionary *_locationToStatus;
}

@property (readonly) PFUbiquityLocation *ubiquityRootLocation;
@property (readonly) NSString *localPeerID;
@property (copy, readonly) NSURL *presentedItemURL;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, readonly) NSDictionary *locationToStatus;
@property (nonatomic, readonly) NSDictionary *locationToSafeSaveFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

+ (void)initialize;
+ (int)usesCloudDocsFramework;
+ (void)startDownloadForItems:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)sharedPrivateOperationQueue;
+ (id)cloudDocsRootFolder;
+ (void)registerInitialSyncHandlerForURL:(id)arg1 andContainerID:(id)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

- (id)init;
- (void)dealloc;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (void)presentedSubitemUbiquityDidChangeAtURL:(id)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (id)copyStatusDictionary;
- (void)logWasExported:(id)arg1;
- (void)logWasImported:(id)arg1;
- (void)logImportWasCancelled:(id)arg1;
- (void)logsWereScheduled:(id)arg1;
- (void)setupAssistantDiscoveredPathsFromMetadataQuery:(id)arg1;
- (void)printStatus:(id)arg1;
- (void)processPendingURLs;
- (_Bool)isiCloudExtension:(id)arg1;
- (id)retainedStatusForLocation:(id)arg1;
- (id)initWithUbiquityRootLocation:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 processingQueue:(id)arg4;
- (void)exporterDidMoveLog:(id)arg1;
- (void)registerSafeSaveFile:(id)arg1;
- (void)unregisterSafeSaveFile:(id)arg1;

@end
