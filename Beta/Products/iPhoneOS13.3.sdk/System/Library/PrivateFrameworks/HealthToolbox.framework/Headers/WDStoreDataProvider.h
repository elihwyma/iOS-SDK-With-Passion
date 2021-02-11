/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDStoreDataProvider : NSObject {
    NSDictionary * _adamIdsByType;
    bool  _didSuccessfullyDownloadAssets;
    _HKMobileAssetDownloadManager * _downloadManager;
    NSMutableDictionary * _isRequestingAppsForType;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _storeDataByType;
}

@property (nonatomic, retain) NSDictionary *adamIdsByType;
@property (nonatomic) bool didSuccessfullyDownloadAssets;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allCompatabilityVersions;
- (void)_downloadAssetsForCurrentLocale;
- (void)_downloadStoreDataForIdentifierIfNecessary:(id)arg1;
- (bool)_hasLocalStoreDataForIdentifier:(id)arg1;
- (void)_loadAppsInfoFromStoreForIdentifier:(id)arg1 onLoadingCompletion:(id /* block */)arg2;
- (void)_localeChanged:(id)arg1;
- (id)_matchOrderOfStoreResults:(id)arg1 withAdamIDList:(id)arg2;
- (void)_storeDataForIdentifier:(id)arg1 onLoadingCompletion:(id /* block */)arg2;
- (id)_typeIdentifierForHKDisplayCategoryIdentifier:(long long)arg1;
- (id)adamIdsByType;
- (bool)didSuccessfullyDownloadAssets;
- (void)downloadStoreDataForHKCategoryIfNecessary:(id)arg1;
- (void)downloadStoreDataForHKDisplayTypeIfNecessary:(id)arg1;
- (bool)hasLocalStoreDataForHKDisplayCategory:(id)arg1;
- (bool)hasLocalStoreDataForHKDisplayType:(id)arg1;
- (id)init;
- (void)purgeOldAppsInHealthAssets;
- (id)queue;
- (void)setAdamIdsByType:(id)arg1;
- (void)setDidSuccessfullyDownloadAssets:(bool)arg1;
- (void)startDownloadAssetTimeoutTimer;
- (void)storeDataForHKDisplayCategory:(id)arg1 onLoadingCompletion:(id /* block */)arg2;
- (void)storeDataForHKDisplayType:(id)arg1 onLoadingCompletion:(id /* block */)arg2;
- (id)typeIdentifierForHKDisplayCategory:(id)arg1;
- (id)typeIdentifierForHKDisplayType:(id)arg1;

@end