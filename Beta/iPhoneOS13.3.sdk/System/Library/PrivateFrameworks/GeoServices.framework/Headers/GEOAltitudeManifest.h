/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject

{
    GEOAltitudeManifestReserved *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)commonInit;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)_reloadManifest;
- (void)parseManifest:(id)arg1;
- (id)initWithoutObserver;
- (_Bool)parseXml:(id)arg1;
- (_Bool)isValidTourId:(unsigned long long)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (_Bool)hasDataVersionForRegion:(unsigned int)arg1;
- (unsigned int)dataVersionForRegion:(unsigned int)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)tripIdsForRegion:(unsigned int)arg1;
- (id)availableRegions;

@end
