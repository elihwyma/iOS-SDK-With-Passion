/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject, NSURL;

@protocol OS_dispatch_queue;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader

{
    struct OpaqueFigAsset *_figAsset;
    int _figAssetCreationStatus;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    AVDispatchOnce *_assetInspectorOnce;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_loadingBatches;
    _Bool _loadingCanceled;
    _Bool _registeredForFigAssetNotifications;
    long long _fragmentMinderAssociationCount;
    NSURL *_URL;
}

+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;
+ (id)_figAssetTrackMediaSelectionPropertiesArray;
+ (id)_figAssetMediaSelectionPropertiesArray;
+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;

- (void)dealloc;
- (id)URL;
- (CDStruct_1b6d18a9)duration;
- (id)asset;
- (unsigned long long)downloadToken;
- (id)resolvedURL;
- (_Bool)hasProtectedContent;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (struct OpaqueFigAsset *)_figAsset;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (_Bool)_isStreaming;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)_fragmentMindingInterval;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (id)lyrics;
- (_Bool)isPlayable;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1 forAsset:(id)arg2;
- (id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4;
- (id)assetInspector;
- (id)originalNetworkContentURL;
- (_Bool)isAssociatedWithFragmentMinder;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (long long)_statusOfValueForKey:(id)arg1 error:(id *)arg2 firstNonLoadedDependencyKey:(id *)arg3;
- (long long)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset *)arg2 error:(id *)arg3;
- (id)_completionHandlerQueue;
- (id)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;

@end
