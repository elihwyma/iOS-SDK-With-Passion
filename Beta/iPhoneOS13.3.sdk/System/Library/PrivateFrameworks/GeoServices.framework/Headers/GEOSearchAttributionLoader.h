/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSearchAttributionManifest;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionLoader : NSObject

{
    GEOSearchAttributionManifest *_attributionManifest;
}

- (id)initWithAttributionManifest:(id)arg1;
- (void)loadAttributionInfoForIdentifier:(id)arg1 allowNetwork:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
