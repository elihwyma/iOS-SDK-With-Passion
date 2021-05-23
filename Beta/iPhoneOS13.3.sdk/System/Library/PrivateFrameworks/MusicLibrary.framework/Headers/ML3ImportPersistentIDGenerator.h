/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator

{
    NSMutableDictionary *_pregeneratedIdMappings;
}

- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;
- (void)removePersistentIDFromIdMapping:(long long)arg1;

@end
