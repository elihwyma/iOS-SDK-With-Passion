/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOSimpleTileRequester.h>

@class NSString;

@interface GEOIdentifiedMapDataRequester : GEOSimpleTileRequester

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
+ (unsigned char)tileProviderIdentifier;

- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_urlComponentsForKey:(const struct _GEOTileKey *)arg1 withURLString:(id)arg2 language:(id)arg3;

@end
