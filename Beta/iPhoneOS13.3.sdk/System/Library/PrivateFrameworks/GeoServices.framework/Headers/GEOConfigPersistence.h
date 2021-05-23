/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODefaultsDBDict, GEOSQLiteDB, geo_isolater;

@interface GEOConfigPersistence : NSObject

{
    GEOSQLiteDB *_db;
    GEODefaultsDBDict *_cache;
    geo_isolater *_cacheIsolator;
}

+ (id)shared;
+ (_Bool)_setup:(id)arg1;

- (void)dealloc;
- (void)tearDown;
- (id)initWithDBPath:(id)arg1;
- (id)_valueForKeyPath:(id)arg1 key:(id *)arg2 createOrUpdate:(CDUnknownBlockType)arg3;
- (void)setDefault:(id)arg1 forKeyPath:(id)arg2;
- (id)defaultForKeyPath:(id)arg1;

@end
