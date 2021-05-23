/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOMapFeatureTileFinder, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapFeatureTileFinderRequest : NSObject

{
    GEOMapFeatureTileFinder *_tileFinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithTileFinder:(id)arg1;

@end
