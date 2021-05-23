/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject

{
    NSString *_clientIdentifier;
}

- (id)initWithClientIdentifier:(id)arg1;
- (id)manifestsDirectoryURL;
- (id)currentManifestFileURL;
- (_Bool)setCacheURLsOnManifestAndAssets:(id)arg1 error:(id *)arg2;
- (id)cacheRoot;
- (id)assetsDirectoryURL;
- (id)assetFileName:(id)arg1;
- (id)manifestFileName:(id)arg1;
- (id)manifestFileURL:(id)arg1;
- (id)validatePath:(id)arg1;
- (id)assetFileURL:(id)arg1;
- (id)allCachedManifests;
- (id)loadCurrentCachedManifest;

@end
