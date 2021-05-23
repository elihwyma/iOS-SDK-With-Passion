/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSTimer, PHAssetCollection, PHImportSource, PHPhotoLibrary, PXImportAssetsDataSourceManager, PXImportDeleteAction, PXImportMediaLoadingCoordinator, PXImportMediaProvider, PXImportSessionInfo, PXPowerController, PXSectionedSelectionManager, PXSelectionSnapshot;

@protocol OS_dispatch_queue, PXImportControllerImportCompletionDelegate;

@interface PXImportController : PXObservable <Swift>

{
    NSArray *_lastSelectedModels;
    _Bool _loadingContent;
    _Bool _hasLoadedInitialBatchOfAssets;
    _Bool _loadingInitialBatchOfAssets;
    _Bool _userRequiredToTrustHostOnSourceDevice;
    _Bool _importingAssets;
    _Bool _deletingAssets;
    _Bool _alreadyImportedItemsSelectable;
    _Bool _hasLoadedAssets;
    _Bool _hasReceivedImportSourceAssetChanges;
    _Bool _isLoadingInitialBatchOfAssets;
    unsigned short _imageFormat;
    unsigned int _importAssetsPowerAssertionIdentifier;
    unsigned int _deleteAssetsPowerAssertionIdentifier;
    unsigned int _loadAssetsPowerAssertionIdentifier;
    PHImportSource *_importSource;
    PHPhotoLibrary *_photoLibrary;
    NSObject<PXImportControllerImportCompletionDelegate> *_importCompletionDelegate;
    PXImportMediaProvider *_importMediaProvider;
    PXImportAssetsDataSourceManager *_dataSourceManager;
    PXImportSessionInfo *_importSessionInfo;
    NSProgress *_importProgress;
    PHAssetCollection *_importDestinationAlbum;
    PXImportDeleteAction *_deleteAction;
    PXSectionedSelectionManager *_selectionManager;
    NSTimer *_initialBatchOfAssetsTimer;
    NSMutableDictionary *_sharedViewModelsById;
    NSObject<OS_dispatch_queue> *_sharedViewModelsUpdateQueue;
    NSMutableSet *_otherDataSourceManagers;
    NSObject<OS_dispatch_queue> *_otherDataSourceManagersQueue;
    PXPowerController *_powerController;
    NSTimer *_assetLoadingPowerAssertionTimer;
    CDUnknownBlockType _importCompletionHandler;
    CDUnknownBlockType _deleteCompletionHandler;
    PXSelectionSnapshot *_lastSelectionSnapshot;
    PXImportMediaLoadingCoordinator *_mediaLoadingCoordinator;
}

@property (nonatomic) _Bool hasLoadedAssets;
@property (nonatomic) _Bool hasReceivedImportSourceAssetChanges;
@property (nonatomic) _Bool hasLoadedInitialBatchOfAssets;
@property (nonatomic) _Bool isLoadingInitialBatchOfAssets;
@property (retain, nonatomic) NSTimer *initialBatchOfAssetsTimer;
@property (nonatomic, readonly) NSMutableDictionary *sharedViewModelsById;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedViewModelsUpdateQueue;
@property (nonatomic, readonly) NSMutableSet *otherDataSourceManagers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *otherDataSourceManagersQueue;
@property (nonatomic, getter=isUserRequiredToTrustHostOnSourceDevice) _Bool userRequiredToTrustHostOnSourceDevice;
@property (retain, nonatomic) PXPowerController *powerController;
@property (nonatomic) unsigned int importAssetsPowerAssertionIdentifier;
@property (nonatomic) unsigned int deleteAssetsPowerAssertionIdentifier;
@property (nonatomic) unsigned int loadAssetsPowerAssertionIdentifier;
@property (retain, nonatomic) NSTimer *assetLoadingPowerAssertionTimer;
@property (retain, nonatomic) PXImportSessionInfo *importSessionInfo;
@property (retain, nonatomic) NSProgress *importProgress;
@property (copy, nonatomic) CDUnknownBlockType importCompletionHandler;
@property (retain, nonatomic) PXImportDeleteAction *deleteAction;
@property (copy, nonatomic) CDUnknownBlockType deleteCompletionHandler;
@property (retain, nonatomic) PXSelectionSnapshot *lastSelectionSnapshot;
@property (nonatomic, readonly) PXImportMediaLoadingCoordinator *mediaLoadingCoordinator;
@property (nonatomic, readonly) PHImportSource *importSource;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned short imageFormat;
@property (weak, nonatomic) NSObject<PXImportControllerImportCompletionDelegate> *importCompletionDelegate;
@property (nonatomic, readonly) PXImportMediaProvider *importMediaProvider;
@property (nonatomic, readonly) PXImportAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly, getter=isLoadingContent) _Bool loadingContent;
@property (nonatomic, readonly, getter=isLoadingInitialBatchOfAssets) _Bool loadingInitialBatchOfAssets;
@property (nonatomic, readonly, getter=isImportingAssets) _Bool importingAssets;
@property (retain, nonatomic) PHAssetCollection *importDestinationAlbum;
@property (nonatomic, readonly, getter=isDeletingAssets) _Bool deletingAssets;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) _Bool alreadyImportedItemsSelectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)importOperationQueue;
+ (id)assetsForModels:(id)arg1;
+ (id)itemsConstrainedByAvailableDiskSpaceFromItems:(id)arg1 additionalBytesRequired:(inout long long *)arg2;
+ (void)favoriteAssetsFromImportResults:(id)arg1 photoLibrary:(id)arg2;
+ (id)importFilesAtURLs:(id)arg1 photoLibrary:(id)arg2 collection:(id)arg3 checkDuplicates:(_Bool)arg4 referenced:(_Bool)arg5 delegate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)registerPXImportControllerNotificationsReceiver:(struct NSObject *)arg1;
+ (void)unregisterPXImportControllerNotificationsReceiver:(struct NSObject *)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)shutdown;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (long long)importAsset:(id)arg1 asDuplicateOfLibraryAsset:(id)arg2 applyToAll:(_Bool *)arg3;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (void)completedImportRecord:(id)arg1;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (id)selectedItems;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)sendActionProgress:(double)arg1;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)setLoadingContent:(_Bool)arg1;
- (void)setImportingAssets:(_Bool)arg1;
- (void)setDeletingAssets:(_Bool)arg1;
- (void)setLoadingInitialBatchOfAssets:(_Bool)arg1;
- (id)viewModelMapForImportAssetsDataSourceManager:(id)arg1;
- (id)initWithImportSource:(id)arg1 photoLibrary:(id)arg2 imageFormat:(unsigned short)arg3;
- (void)loadAssets;
- (void)handleImportSourceModifiedAssets;
- (void)startInitialBatchOfAssetsTimerWithTimeout:(double)arg1;
- (id)createDataSourceManager;
- (void)removeDataSourceManager:(id)arg1;
- (void)importItems:(id)arg1 configuration:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopImport;
- (void)finishImportingWithResults:(id)arg1;
- (void)deleteItems:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)finishDeletingItems;
- (void)setSelected:(_Bool)arg1 forItems:(id)arg2;
- (void)selectItem:(id)arg1;
- (void)deselectItem:(id)arg1;
- (void)startObservingImportProgress;
- (void)stopObservingImportProgress;
- (void)restartTimedAssetsLoadingPowerAssertion;
- (void)stopTimedAssetsLoadingPowerAssertion;
- (void)assetLoadingPowerAssertionTimerFired;

@end
