/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManager, GEOResourceManifestManager, NSDictionary, NSSet, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOPOITypeMapping : NSObject

{
    NSSet *_alwaysVisibleTypes;
    NSDictionary *_categoryToTypeMapping;
    NSDictionary *_typeToCategoryMapping;
    geo_isolater *_accessLock;
    GEOResourceManifestManager *_manifestManager;
    GEOResourceManager *_resourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedMapping;

- (id)init;
- (void)dealloc;
- (void)_tearDown;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)typesForPOICategories:(id)arg1;
- (_Bool)isAlwaysVisiblePOIType:(int)arg1;
- (id)categoryForPOIType:(int)arg1;
- (id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2;
- (id)alwaysVisibleTypes;
- (id)typeToCategoryMapping;
- (id)categoryToTypeMapping;
- (void)parsePOICategoriesJSON:(id)arg1;
- (id)parseVisiblePOITypesJSON:(id)arg1;
- (_Bool)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(struct NSDictionary **)arg2 POITypeToCategory:(struct NSDictionary **)arg3;
- (void)loadPOICategoriesJSON;
- (void)clearCachedValues;

@end
