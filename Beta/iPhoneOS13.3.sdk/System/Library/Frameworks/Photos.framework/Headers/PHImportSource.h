/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImportExceptionRecorder.h>

@class NSDateFormatter, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSProgress, NSString, NSURL, PHImportDuplicateChecker, PHImportOptions;

@protocol OS_dispatch_queue;

@interface PHImportSource : PHImportExceptionRecorder

{
    NSMutableDictionary *_assetsByImportIdentifier;
    NSMutableDictionary *_representationsByImportIdentifier;
    NSMutableDictionary *_audioByImportIdentifier;
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    _Bool _ejecting;
    _Bool _canAutolaunch;
    unsigned char _sourceAccessState;
    _Bool _rampBatchInterval;
    _Bool _open;
    _Bool _canShowProgress;
    _Bool _deleteContentAllowed;
    NSString *_uuid;
    unsigned long long _batchSize;
    double _batchInterval;
    NSURL *_autolaunchApplicationURL;
    unsigned long long _currentItemIndex;
    unsigned long long _nextItemIndex;
    unsigned long long _inFlight;
    unsigned long long _completedItems;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSObject<OS_dispatch_queue> *_itemQueue;
    NSObject<OS_dispatch_queue> *_batchQueue;
    NSObject<OS_dispatch_queue> *_dupPathCollectionQueue;
    CDUnknownBlockType _completion;
    NSMutableArray *_duplicateAssets;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_queue> *_itemProcessingQueue;
    unsigned long long _processingConcurrency;
    NSMutableArray *_removedSourceFileIdentifiers;
    NSDateFormatter *_dupeDateFormatter;
    PHImportDuplicateChecker *_duplicateChecker;
    NSMutableArray *_processed;
    double _batchStart;
    unsigned long long _batchCount;
    NSMutableDictionary *_importIdentifierToLivePhotoStateMap;
    NSMutableArray *_items;
    NSMutableSet *_folders;
    NSMutableArray *_errors;
    PHImportOptions *_options;
    NSMutableArray *_assets;
    NSProgress *_progress;
    long long _assetLoadOrder;
    NSString *_prefix;
}

@property (nonatomic) unsigned long long currentItemIndex;
@property (nonatomic) unsigned long long nextItemIndex;
@property (nonatomic) unsigned long long inFlight;
@property (nonatomic) unsigned long long completedItems;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controlQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dupPathCollectionQueue;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSMutableArray *duplicateAssets;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *itemProcessingQueue;
@property (nonatomic) unsigned long long processingConcurrency;
@property (nonatomic, readonly) NSMutableArray *removedSourceFileIdentifiers;
@property (retain, nonatomic) NSDateFormatter *dupeDateFormatter;
@property (retain, nonatomic) PHImportDuplicateChecker *duplicateChecker;
@property (retain, nonatomic) NSMutableArray *processed;
@property (nonatomic) double batchStart;
@property (nonatomic) unsigned long long batchCount;
@property (nonatomic) _Bool rampBatchInterval;
@property (retain, nonatomic) NSMutableDictionary *importIdentifierToLivePhotoStateMap;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableSet *folders;
@property (retain) NSMutableArray *errors;
@property (nonatomic) _Bool open;
@property (readonly) _Bool canShowProgress;
@property (nonatomic) _Bool deleteContentAllowed;
@property (retain, nonatomic) PHImportOptions *options;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic, readonly) _Bool stalled;
@property (nonatomic) long long assetLoadOrder;
@property (nonatomic) unsigned char sourceAccessState;
@property (retain, nonatomic) NSString *prefix;
@property (readonly) _Bool canReference;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *productKind;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) struct CGImage *icon;
@property (nonatomic, readonly) _Bool isCamera;
@property (nonatomic, readonly) _Bool isAppleDevice;
@property (nonatomic, readonly) _Bool canEject;
@property (nonatomic, readonly) _Bool isConnectedDevice;
@property (nonatomic, readonly, getter=isEjecting) _Bool ejecting;
@property (nonatomic, readonly) _Bool canAutolaunch;
@property (nonatomic, readonly) _Bool isAvailable;
@property (nonatomic, readonly) NSString *volumePath;
@property (nonatomic, readonly) _Bool canDeleteContent;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) double batchInterval;
@property (copy, nonatomic) NSURL *autolaunchApplicationURL;

- (id)init;
- (id)description;
- (void)addItems:(id)arg1;
- (id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(_Bool)arg2;
- (void)checkForDuplicates:(id)arg1 considerItemsInTrash:(_Bool)arg2 forEach:(CDUnknownBlockType)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)generatePPTData;
- (void)beginWork;
- (id)assetsByProcessingItem:(id)arg1;
- (void)endWork;
- (void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeAssets:(id)arg1;
- (void)cancelAssetLoading;
- (id)deleteImportAssets:(id)arg1 isConfirmed:(_Bool)arg2 isCancelable:(_Bool)arg3 atEnd:(CDUnknownBlockType)arg4;
- (void)eject;
- (void)addImportSourceObserver:(id)arg1;
- (void)removeImportSourceObserver:(id)arg1;
- (void)notifyObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)requestDeleteAssetsForRecords:(id)arg1;
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 atEnd:(CDUnknownBlockType)arg5;
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchInterval:(double)arg4 atEnd:(CDUnknownBlockType)arg5;
- (id)loadAssetsForLibrary:(id)arg1 allowDuplicates:(_Bool)arg2 order:(long long)arg3 batchSize:(unsigned long long)arg4 batchInterval:(double)arg5 atEnd:(CDUnknownBlockType)arg6;
- (void)processNextItems;
- (void)endBatch;
- (void)incrementInFlight;
- (void)decrementInFlight;
- (_Bool)batchComplete;
- (void)addSourceFileIdentifiersForRemovedFiles:(id)arg1;
- (_Bool)date:(id)arg1 matchesDate:(id)arg2;
- (_Bool)processPotentialJpegAsset:(id)arg1 plusRawAsset:(id)arg2;
- (id)processAssets:(id)arg1;
- (void)processRepresentation:(id)arg1;
- (void)processResource:(id)arg1;
- (void)addRepresentationsForAsset:(id)arg1;
- (_Bool)isLivePhotoForImportIdentifier:(id)arg1;
- (void)setIsLivePhotoForImportIdentifier:(id)arg1;
- (_Bool)confirmAsset:(id)arg1 isRenderOf:(id)arg2;
- (_Bool)confirmAsset:(id)arg1 isSocOf:(id)arg2;
- (_Bool)confirmAsset:(id)arg1 isBaseOf:(id)arg2;
- (_Bool)confirmAsset:(id)arg1 isSidecarOfAsset:(id)arg2;
- (void)loadSidecarsFor:(id)arg1;
- (id)additionalQueues;
- (void)pauseAssetLoading;
- (void)resumeAssetLoading;
- (id)assetsDescription;

@end
