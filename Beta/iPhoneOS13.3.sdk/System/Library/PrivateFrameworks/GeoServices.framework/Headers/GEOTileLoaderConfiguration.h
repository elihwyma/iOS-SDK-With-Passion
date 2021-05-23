/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale, NSString;

@interface GEOTileLoaderConfiguration : NSObject

{
    Class _serverProxyClass;
    unsigned long long _memoryCacheCountLimit;
    unsigned long long _memoryCacheCostLimit;
    NSString *_diskCacheLocation;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
}

@property (nonatomic) Class serverProxyClass;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (copy, nonatomic) NSString *diskCacheLocation;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
