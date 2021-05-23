/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSearchAttributionManifest, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerRemoteProxy : NSObject

{
    NSObject<OS_dispatch_queue> *_attributionQueue;
    GEOSearchAttributionManifest *_attributionManifest;
    struct os_unfair_lock_s _attributionManifestLock;
    int _attributionManifestUpdatedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_attributionManifest;
- (void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
