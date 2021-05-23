/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, SSDownloadManager, VUIMediaEntitiesFetchController, VUIMediaLibrary;

@protocol VUIDownloadDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface VUIDownloadDataSource : NSObject

{
    _Bool _hasFetchedAllDownloadEntities;
    _Bool _hasFetchedAllDownloadedEntities;
    _Bool _performingRentalExpirationFetch;
    id <VUIDownloadDataSourceDelegate> _delegate;
    NSArray *_downloadEntities;
    VUIMediaLibrary *_mediaLibrary;
    VUIMediaEntitiesFetchController *_downloadedEntitiesFetchController;
    VUIMediaEntitiesFetchController *_activeDownloadingEntitiesFetchController;
    SSDownloadManager *_sDownloadManager;
    NSArray *_localMediaItems;
    NSArray *_activelyDownloadingAdamIds;
    NSArray *_activelyDownloadingMediaItems;
    NSMutableDictionary *_episodesDownloadingForShow;
    NSMutableDictionary *_groupingByShowIdentifier;
}

@property (nonatomic, readonly) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *downloadedEntitiesFetchController;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *activeDownloadingEntitiesFetchController;
@property (retain, nonatomic) SSDownloadManager *sDownloadManager;
@property (nonatomic) _Bool hasFetchedAllDownloadEntities;
@property (nonatomic) _Bool hasFetchedAllDownloadedEntities;
@property (nonatomic) _Bool performingRentalExpirationFetch;
@property (retain, nonatomic) NSArray *localMediaItems;
@property (retain, nonatomic) NSArray *activelyDownloadingAdamIds;
@property (retain, nonatomic) NSArray *activelyDownloadingMediaItems;
@property (retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow;
@property (retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier;
@property (weak, nonatomic) id <VUIDownloadDataSourceDelegate> delegate;
@property (retain, nonatomic) NSArray *downloadEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)loadDownloadData;
- (void)_addNotificationObservers;
- (void)_loadDownloadedEntities;
- (void)_loadActiveDownloads;
- (void)_removeNotifcationObservers;
- (id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)arg1;
- (id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;
- (void)_sortDownloadEntitiesByTitle;
- (void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(_Bool)arg1;
- (void)_handleDownloadingStateDidChange;
- (id)_getActivelyDownloadingAdamIDs;
- (void)_rentalsDidExpire;
- (_Bool)_doesEpisodeSet:(id)arg1 containMediaEntity:(id)arg2;
- (id)_createDownloadEntitiesFromLatestDownloads:(id)arg1;
- (void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)arg1;
- (id)_getDownloadEntityInDownloadEntities:(id)arg1 containingMediaEntity:(id)arg2;
- (id)_upsertDownloadEntities:(id)arg1 withEpisodesDownloadingForShow:(id)arg2;
- (void)_updateDownloadEntity:(id *)arg1 withLatestMediaEntity:(id)arg2;

@end
