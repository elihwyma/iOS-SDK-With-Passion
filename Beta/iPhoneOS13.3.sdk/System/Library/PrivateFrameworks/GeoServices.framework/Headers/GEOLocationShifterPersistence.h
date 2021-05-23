/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOSQLiteDB, NSString;

@interface GEOLocationShifterPersistence : NSObject

{
    NSString *_dbPath;
    GEOSQLiteDB *_db;
}

+ (id)sharedPersister;

- (id)init;
- (void)removeAllEntries;
- (void)tearDown;
- (_Bool)_setup:(id)arg1;
- (void)findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)storeResponse:(id)arg1;
- (void)pruneEntriesOlderThan:(id)arg1 maximumEntriesToKeep:(int)arg2;
- (void)removeAllEntriesSync;
- (id)initWithDBFilePath:(id)arg1;
- (void)_findResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 usingFunction:(CDUnknownFunctionPointerType)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)findExactResponseForCoordinate:(CDStruct_c3b9c2ee)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAllEntries:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
