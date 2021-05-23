/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOVoltaireTileRequester.h>

@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester

+ (unsigned char)tileProviderIdentifier;

- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end
