/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSCache, NSDictionary, NSString, NSURL, SSUpdatableAsset;

@interface SSUpdatableAssetManifest : NSObject

{
    NSDictionary *_assetsByName;
    NSCache *_imageCache;
    NSArray *_assets;
    SSUpdatableAsset *_bootstrapAsset;
    NSURL *_cacheURL;
    NSDictionary *_extraInfo;
    double _lastModifiedTimestamp;
    NSString *_name;
    double _pollInterval;
    long long _reloadUrgencyType;
    NSURL *_serverURL;
    NSString *_version;
}

@property (copy, nonatomic, setter=_setAssets:) NSArray *assets;
@property (retain, nonatomic, setter=_setBootstrapAsset:) SSUpdatableAsset *bootstrapAsset;
@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL;
@property (copy, nonatomic, setter=_setExtraInfo:) NSDictionary *extraInfo;
@property (nonatomic, setter=_setLastModifiedTimestamp:) double lastModifiedTimestamp;
@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (nonatomic, setter=_setPollInterval:) double pollInterval;
@property (nonatomic, setter=_setReloadUrgencyType:) long long reloadUrgencyType;
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL;
@property (copy, nonatomic, setter=_setVersion:) NSString *version;

+ (id)_osVersionString;

- (id)assetWithName:(id)arg1;

@end
