/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTileRequester.h>

@class GEOTileKeyMap, NSMutableArray, geo_isolater;

@interface GEORegionalResourcesTileRequester : GEOTileRequester

{
    NSMutableArray *_loaders;
    geo_isolater *_loadersIsolater;
    GEOTileKeyMap *_signpostIDs;
    geo_isolater *_signpostIDsIsolater;
}

+ (unsigned char)tileProviderIdentifier;

- (void)cancel;
- (void)start;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)_generateEndSignpostEventIfNecessary:(struct _GEOTileKey)arg1;

@end
