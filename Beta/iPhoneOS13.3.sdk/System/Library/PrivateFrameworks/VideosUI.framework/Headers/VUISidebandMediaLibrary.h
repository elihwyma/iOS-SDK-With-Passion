/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIDeviceMediaLibrary.h>

@class NSManagedObjectContext, NSObject, NSPersistentContainer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary

{
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_backgroundManagedObjectContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundManagedObjectContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)initialize;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(_Bool)arg1;

- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)title;
- (id)enqueueFetchRequests:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dumpDatabaseToLogIfEnabled;
- (void)_mainQueueManagedObjectContextDidSave:(id)arg1;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_pruneVideosAtAppLaunchWithCompletion:(CDUnknownBlockType)arg1;
- (id)_movieForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;
- (id)_tvEpisodeForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;
- (id)_tvSeriesForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;
- (id)imageInfoForSeries:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;
- (id)_tvSeasonForCanonicalID:(id)arg1 createIfNeeded:(_Bool)arg2 wasCreated:(_Bool *)arg3;
- (id)imageInfoForVideo:(id)arg1 imageType:(unsigned long long)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;
- (void)saveChangesToManagedObjects;
- (id)_managedObjectWithEntityName:(id)arg1 predicate:(id)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;
- (void)deleteFPSKeyDeletionInfos:(id)arg1;
- (void)removeDownloadedMediaForVideoManagedObjects:(id)arg1;
- (id)mainContextVideoForVideo:(id)arg1;
- (_Bool)_removeDownloadedMediaForVideoManagedObject:(id)arg1 saveWhenDone:(_Bool)arg2;
- (id)_mainContextManagedObjectsForObjects:(id)arg1;
- (void)_deleteVideoManagedObjects:(id)arg1;
- (id)videosWithDownloadState:(long long)arg1;
- (id)_downloadedVideosForNonSignedInUsers;
- (void)_deleteOrphanedDownloads;
- (void)_removeDownloadsForNonSignedInUsers;
- (id)videoForPlayable:(id)arg1;
- (id)videoForCanonicalID:(id)arg1;
- (id)fpsKeyInfoForVideo:(id)arg1 keyURI:(id)arg2 createIfNeeded:(_Bool)arg3 wasCreated:(_Bool *)arg4;
- (id)existingFpsKeyInfoForKeyURI:(id)arg1;
- (id)allFpsKeyDeletionInfos;
- (void)deleteFPSKeyDeletionInfo:(id)arg1;
- (void)removeDownloadedMediaForVideoManagedObject:(id)arg1;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;

@end
