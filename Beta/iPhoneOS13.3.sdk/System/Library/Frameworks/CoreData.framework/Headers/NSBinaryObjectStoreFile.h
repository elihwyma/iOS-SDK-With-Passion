/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSBinaryObjectStoreFile : NSObject

{
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}

- (void)dealloc;
- (_Bool)readMetadataFromFile:(id)arg1 securely:(_Bool)arg2 error:(id *)arg3;
- (id)fullMetadata;
- (void)setFullMetadata:(id)arg1;
- (_Bool)writeMetadataToFile:(id)arg1 error:(id *)arg2;
- (void)setDatabaseVersion:(int)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (void)setMapData:(id)arg1;
- (void)clearCurrentValues;
- (_Bool)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id *)arg3;
- (_Bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id *)arg4;
- (int)databaseVersion;
- (unsigned long long)primaryKeyGeneration;
- (id)mapData;
- (_Bool)readFromFile:(id)arg1 error:(id *)arg2;
- (_Bool)writeToFile:(id)arg1 error:(id *)arg2;

@end
