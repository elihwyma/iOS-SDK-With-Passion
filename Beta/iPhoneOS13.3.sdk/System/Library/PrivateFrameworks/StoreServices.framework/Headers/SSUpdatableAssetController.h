/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, NSURL, SSUpdatableAssetCacheManager, SSUpdatableAssetManifest, SSXPCConnection;

@protocol OS_dispatch_queue;

@interface SSUpdatableAssetController : NSObject

{
    NSString *_bundledManifestVersion;
    SSUpdatableAssetManifest *_bundledManifest;
    SSUpdatableAssetManifest *_currentManifest;
    SSUpdatableAssetCacheManager *_cacheManager;
    SSXPCConnection *_connection;
    NSURL *_manifestURL;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSURL *_bundledManifestURL;
}

@property (nonatomic, readonly) SSUpdatableAssetManifest *currentManifest;
@property (nonatomic, readonly) SSUpdatableAssetManifest *newestCachedManifest;
@property (nonatomic, readonly) NSURL *bundledManifestURL;
@property (copy, nonatomic) NSURL *manifestURL;

- (void)dealloc;
- (id)_connection;
- (id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2;
- (id)_bundledManifestVersion;
- (id)_bundledManifest;
- (id)initWithBundledManifestURL:(id)arg1;
- (void)clearCache:(CDUnknownBlockType)arg1;
- (void)refreshCachedManifest:(CDUnknownBlockType)arg1;

@end
