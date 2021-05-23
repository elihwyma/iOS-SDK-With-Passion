/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class NSCache;

@interface PXPlacesImageCache : NSObject

{
    NSCache *_cache;
}

- (id)init;
- (void)removeAllObjects;
- (void)removeCachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (id)cachedRenderedImageForGeotaggble:(id)arg1 andKey:(id)arg2;
- (void)cacheRenderedImage:(id)arg1 forGeotaggble:(id)arg2 andKey:(id)arg3;

@end
