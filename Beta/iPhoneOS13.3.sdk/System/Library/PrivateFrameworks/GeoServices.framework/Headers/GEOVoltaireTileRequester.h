/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOTileRequester.h>

@class GEOVoltaireSimpleTileRequester, NSString, NSTimer;

@interface GEOVoltaireTileRequester : GEOTileRequester

{
    NSTimer *_activeTileGroupTimeoutTimer;
    GEOVoltaireSimpleTileRequester *_simpleRequester;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned char)tileProviderIdentifier;
+ (unsigned long long)expiringTilesetsCount;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (Class)simpleRequesterClass;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)cleanup;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)tileRequesterFinished:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(struct _GEOTileKey)arg3;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSetDB:(unsigned int)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(struct _GEOTileKey)arg7 userInfo:(id)arg8;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_startWithTileKeys:(id)arg1;
- (void)_failedToReceiveActiveTileGroup:(id)arg1;
- (void)tryFinish;

@end
