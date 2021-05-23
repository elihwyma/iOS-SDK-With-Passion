/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSearchAttributionManifest, NSMapTable, NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject

{
    NSMapTable *_listeners;
    struct os_unfair_lock_s _listenersLock;
    _Bool _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
    struct os_unfair_lock_s _attributionManifestLock;
    geo_isolater *_isolater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_attributionManifest;
- (void)_sendInfo:(id)arg1 toListener:(id)arg2;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_loadAttributionInfoForListener:(id)arg1;

@end
