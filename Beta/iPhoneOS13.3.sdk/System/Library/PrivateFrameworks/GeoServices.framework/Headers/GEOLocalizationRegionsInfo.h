/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject

{
    NSDictionary *_regions;
    struct os_unfair_lock_s _regionsLock;
}

- (id)init;
- (void)reset;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1 language:(id)arg2;

@end
