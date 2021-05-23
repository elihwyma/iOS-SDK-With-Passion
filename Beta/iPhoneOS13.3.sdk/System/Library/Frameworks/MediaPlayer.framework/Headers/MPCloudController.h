/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICCloudClient, ICConnectionConfiguration, ICUserIdentity, MSVDistributedNotificationObserver;

@protocol ICCloudAvailability, OS_dispatch_queue;

@interface MPCloudController : NSObject

{
    _Bool _active;
    _Bool _cloudEnabled;
    _Bool _jaliscoGeniusEnabled;
    _Bool _preferencesChangedNotifyTokenIsValid;
    _Bool _canShowCloudDownloadButtons;
    _Bool _canDefaultMediaLibraryShowCloudContent;
    _Bool _canShowCloudMusic;
    _Bool _canShowCloudVideo;
    _Bool _cloudLockerAccount;
    _Bool _purchaseHistoryAccount;
    _Bool _updateInProgress;
    _Bool _initialImport;
    _Bool _cloudLibraryUpdateInProgress;
    _Bool _cloudLibraryInitialImport;
    _Bool _jaliscoUpdateInProgress;
    _Bool _jaliscoInitialImport;
    int _preferencesChangedNotifyToken;
    ICCloudClient *_cloudClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<ICCloudAvailability> *_cloudAvailabilityController;
    long long _activeCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_cloudClientCallbackQueue;
    NSObject<OS_dispatch_queue> *_highPriorityQueue;
    MSVDistributedNotificationObserver *_addToPlaylistBehaviorChangedObserver;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSObject<ICCloudAvailability> *cloudAvailabilityController;
@property (nonatomic, readonly) ICConnectionConfiguration *configuration;
@property (nonatomic) long long activeCount;
@property (nonatomic) int preferencesChangedNotifyToken;
@property (nonatomic) _Bool preferencesChangedNotifyTokenIsValid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudClientCallbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *highPriorityQueue;
@property (nonatomic, readonly) MSVDistributedNotificationObserver *addToPlaylistBehaviorChangedObserver;
@property (nonatomic) _Bool canShowCloudDownloadButtons;
@property (nonatomic) _Bool canDefaultMediaLibraryShowCloudContent;
@property (nonatomic) _Bool canShowCloudMusic;
@property (nonatomic) _Bool canShowCloudVideo;
@property (nonatomic, getter=isCloudEnabled) _Bool cloudEnabled;
@property (nonatomic, getter=hasCloudLockerAccount) _Bool cloudLockerAccount;
@property (nonatomic, getter=hasPurchaseHistoryAccount) _Bool purchaseHistoryAccount;
@property (nonatomic, getter=isUpdateInProgress) _Bool updateInProgress;
@property (nonatomic, getter=isInitialImport) _Bool initialImport;
@property (nonatomic, getter=isCloudLibraryUpdateInProgress) _Bool cloudLibraryUpdateInProgress;
@property (nonatomic, getter=isCloudLibraryInitialImport) _Bool cloudLibraryInitialImport;
@property (nonatomic, getter=isJaliscoUpdateInProgress) _Bool jaliscoUpdateInProgress;
@property (nonatomic, getter=isJaliscoInitialImport) _Bool jaliscoInitialImport;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) ICCloudClient *cloudClient;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly, getter=isEnablingCloudLibraryDestructive) _Bool enablingCloudLibraryDestructive;
@property (nonatomic, readonly) _Bool isGeniusEnabled;
@property (nonatomic, readonly, getter=isJaliscoGeniusEnabled) _Bool jaliscoGeniusEnabled;
@property (nonatomic, readonly) _Bool enablingJaliscoGeniusRequiresTerms;

+ (id)controllers;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2;
+ (id)controllerWithUserIdentity:(id)arg1;
+ (void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3;
+ (id)globalSerialQueue;
+ (id)_controllerWithUserIdentity:(id)arg1 createIfRequired:(_Bool)arg2;
+ (id)sharedCloudController;
+ (_Bool)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_resignActive;
- (_Bool)_handlesSameAccountAs:(id)arg1;
- (_Bool)isCloudLibraryEnabled;
- (void)_copyObservationStateFrom:(id)arg1;
- (void)_performBlockOnControllerHandlingTheSameAccount:(CDUnknownBlockType)arg1;
- (void)becomeActive;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)authenticatedDidChangeNotification:(id)arg1;
- (void)activeUserDidChangeNotification:(id)arg1;
- (void)enableICMLErrorReasonChange:(id)arg1;
- (_Bool)hasProperNetworkConditionsToPlayMedia;
- (_Bool)hasProperNetworkConditionsToShowCloudMedia;
- (_Bool)isCellularDataRestrictedForMusic;
- (_Bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForVideos;
- (_Bool)shouldProhibitVideosActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestrictedForStoreApps;
- (_Bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (_Bool)isCellularDataRestricted;
- (_Bool)shouldProhibitActionsForCurrentNetworkConditions;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 toPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadCloudPlaylistProperties;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)uploadCloudItemProperties;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 referralObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadArtworkInfoForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (void)becomeActiveAndWaitUntilDone:(_Bool)arg1;
- (void)resignActive;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadCloudMusicLibraryUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoLibraryUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(CDUnknownBlockType)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)cloudAddToPlaylistBehavior;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)updateJaliscoMediaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadIsJaliscoGeniusSupportedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadIsSagaAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_initializeUpdateInProgressState;
- (id)_referralForModelObject:(id)arg1;
- (void)_becomeActiveAndWaitUntilDone:(_Bool)arg1;

@end
