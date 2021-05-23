/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOMuninTileRequester.h>

@interface GEOMuninMeshRequester : GEOMuninTileRequester

+ (unsigned char)tileProviderIdentifier;

- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;

@end
