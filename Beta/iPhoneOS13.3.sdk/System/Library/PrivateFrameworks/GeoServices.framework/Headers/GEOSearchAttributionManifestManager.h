/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject

{
    id <GEOSearchAttributionServerProxy> _serverProxy;
}

@property (nonatomic, readonly) id <GEOSearchAttributionServerProxy> serverProxy;

+ (id)sharedManager;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)setUseLocalProxy:(_Bool)arg1;

- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
