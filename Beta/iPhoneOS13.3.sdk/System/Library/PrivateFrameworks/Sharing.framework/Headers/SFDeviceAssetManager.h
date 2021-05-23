/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUReachabilityMonitor, MAAsset, NSDictionary, NSMutableDictionary, NSString, NSURL;

@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    MAAsset *_deviceAssetManagement;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSDictionary *_productTypesMappingTable;
    NSDictionary *_cachedProductMappingsTable;
    NSURL *_cacheDirectory;
    NSMutableDictionary *_cachedQueryPaths;
    _Bool _useProcessLocalCache;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_networkStatus;
}

@property (nonatomic, readonly) NSString *networkStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool useProcessLocalCache;

- (id)init;
- (void)invalidate;
- (void)activate;
- (void)onqueue_activate;
- (void)onqueue_invalidate;
- (void)logNetworkStatus;
- (void)onqueue_updateMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onqueue_updateSharingManagementAssetIfNecessary;
- (id)onqueue_sharingManagementAsset;
- (void)onqueue_variantsMatchingQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 withRequestConfiguration:(id)arg2;
- (id)locallyCachedQueryResults;
- (void)clearQueryResultFromLocalCache:(id)arg1;
- (void)onqueue_getCachedAssetBundleForTask:(id)arg1;
- (_Bool)canUseMobileAssetSPI;
- (void)onqueue_executeNextMAQueryForTask:(id)arg1;
- (void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 ucat:(struct LogCategory *)arg2 queryType:(id)arg3 fallback:(_Bool)arg4 retryAttempt:(_Bool)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (id)localCacheWithFileName:(id)arg1;
- (void)storeEntries:(id)arg1 inLocalCacheWithFileName:(id)arg2;
- (void)addQueryResultToLocalCache:(id)arg1 url:(id)arg2 isFallback:(_Bool)arg3;
- (_Bool)pathInLocalCache:(id)arg1;
- (void)onqueue_downloadAsset:(id)arg1 ucat:(struct LogCategory *)arg2 queryLogString:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (id)hardcodedMappedProducts;
- (id)locallyCachedProductMappings;
- (id)onqueue_assetMappedProductTypeForProductType:(id)arg1;
- (void)storeProductMappingsInLocalCache:(id)arg1;
- (id)cacheDirectory;
- (void)variantsMatchingQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAssetBundleForDeviceQuery:(id)arg1 withRequestConfiguration:(id)arg2;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (void)mappedProductTypeForProductType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
