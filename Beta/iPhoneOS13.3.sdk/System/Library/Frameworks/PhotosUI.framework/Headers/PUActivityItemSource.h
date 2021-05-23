/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSURL, PHAsset, PHAssetExportRequest, PUActivityItemSourceAnchorOperation, PUActivityItemSourceConfiguration, PUActivityItemSourceOperation;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PUActivityItemSource : PXObservable

{
    PHAsset *_asset;
    NSDictionary *_cachedSharingVariants;
    NSObject<OS_dispatch_group> *_cachedSharingVariantsDisptachGroup;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilenameBase;
    PUActivityItemSourceOperation *_currentOperation;
    PUActivityItemSourceAnchorOperation *_anchorOperation;
    _Bool _shouldSkipPreparation;
    _Bool _shouldAnchorPreparation;
    CDStruct_7f880b36 _sharingPreferences;
    unsigned long long _state;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _postCompletionHandler;
    NSError *_lastPreparationError;
    PUActivityItemSourceConfiguration *_exportConfiguration;
    PHAssetExportRequest *__assetExportRequest;
    NSProgress *__exportProgress;
    CDUnknownBlockType __exportProgressHandler;
    NSDictionary *__pasteboardRepresentation;
    NSURL *__assetsLibraryURL;
    NSObject<OS_dispatch_queue> *_externalIsolation;
}

@property (retain, nonatomic) PUActivityItemSourceConfiguration *exportConfiguration;
@property (retain, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest;
@property (retain, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress;
@property (copy, nonatomic, setter=_setExportProgressHandler:) CDUnknownBlockType _exportProgressHandler;
@property (retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation;
@property (retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalIsolation;
@property (retain, nonatomic) NSError *lastPreparationError;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSString *sharingUUID;
@property (nonatomic, readonly) CDStruct_2a4d9400 sharingPreferences;
@property (nonatomic, readonly) unsigned long long state;
@property (copy) CDUnknownBlockType progressHandler;
@property (copy) CDUnknownBlockType completionHandler;
@property (copy) CDUnknownBlockType postCompletionHandler;
@property (nonatomic) _Bool shouldSkipPreparation;
@property (nonatomic) _Bool shouldAnchorPreparation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (_Bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;
+ (id)activityItemSourceLog;
+ (unsigned long long)assetBundleMediaSubtypesFromPHAssetMediaSubtypes:(unsigned long long)arg1;
+ (unsigned long long)assetBundleReframeVariationFromPHAssetReframeVariation:(unsigned long long)arg1;
+ (unsigned short)assetBundleVideoComplementVisibilityStateFromPHVideoComplementVisibilityState:(unsigned short)arg1;
+ (unsigned long long)assetBundlePlaybackVariationFromPHAssetPlaybackVariation:(unsigned short)arg1;
+ (long long)assetBundlePlaybackStyleFromPHAssetPlaybackStyle:(long long)arg1;
+ (long long)assetBundleMediaTypeFromPHAssetMediaType:(long long)arg1;

- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setState:(unsigned long long)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (void)_resetState;
- (void)assetExportRequest:(id)arg1 didChangeToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageDataForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)_itemForActivityType:(id)arg1;
- (id)_customAccessibilityLabel;
- (void)setSharingPreferences:(CDStruct_2a4d9400)arg1;
- (void)activityItemSourceOperation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)initWithAsset:(id)arg1 sharingPreferences:(CDStruct_2a4d9400)arg2;
- (id)_activityOperationQueue;
- (void)runWithActivityType:(id)arg1;
- (id)_sharingVariants;
- (void)_fetchSharingVariants;
- (void)signalAnchorCompletion;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (id)_createTempLivePhotoBundleWithError:(id *)arg1;
- (id)_createTempAssetBundleForAsset:(id)arg1 withError:(id *)arg2;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchImageWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchVideoWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchLivePhotoWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchAlternateWithOptions:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(CDUnknownBlockType)arg2;
- (void)_stopObservingExportRequest;
- (void)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_outboundResourcesDirectoryURL;
- (id)_generateURLForType:(long long)arg1 withPathExtension:(id)arg2 preferredFilename:(id)arg3;
- (_Bool)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(_Bool)arg3;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(_Bool)arg2 forType:(long long)arg3;
- (id)_resourceURLForType:(long long)arg1;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (void)_removeTempFiles;
- (void)_removeTempLivePhotoBundleFile;
- (void)_removeTempAssetBundleFile;

@end
