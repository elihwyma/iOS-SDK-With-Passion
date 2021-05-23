/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, PUImportActionCoordinator, PUImportPPTImportSource, PUTabbedLibraryViewController, PXImportAssetsDataSourceManager, PXImportController, PXImportMediaProvider;

@protocol OS_dispatch_semaphore;

@interface PUImportPPTDriver : NSObject

{
    CDUnknownBlockType _insertDatasourceReply;
    CDUnknownBlockType _thumbnailTestReply;
    CDUnknownBlockType _importToLibraryTestReply;
    NSMutableDictionary *_extraResults;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportController *_importController;
    PUImportPPTImportSource *_currentImportSource;
    PXImportMediaProvider *_mediaProvider;
    PUImportActionCoordinator *_actionCoordinator;
    NSObject<OS_dispatch_semaphore> *_importSemaphore;
    _Bool _importComplete;
    long long _iteration;
    double _startTime;
    double _endTime;
    _Bool _loadingContentStarted;
    _Bool _hasSeenAbsolulteLastThumbnailMarker;
    PUTabbedLibraryViewController *_tabbedLibraryViewController;
    NSDictionary *_testOptions;
    NSDictionary *_options;
}

@property (retain) NSDictionary *options;
@property (weak) PUTabbedLibraryViewController *tabbedLibraryViewController;
@property (copy) NSDictionary *testOptions;
@property (nonatomic, readonly) NSDictionary *additionalResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mediaProvider;
- (id)importController;
- (void)ppt_mediaProviderDidProcessAsset:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_performImportToLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)importViewController;
- (id)modelBatchesForOptions:(id)arg1;
- (void)_updateLoadingContentState;
- (double)_contentLoadingCheckInterval;
- (void)signalInsertDatasourceReply:(_Bool)arg1;
- (void)signalThumbnailTestReply:(_Bool)arg1;
- (void)signalImportToLibraryTestReply:(_Bool)arg1;

@end
