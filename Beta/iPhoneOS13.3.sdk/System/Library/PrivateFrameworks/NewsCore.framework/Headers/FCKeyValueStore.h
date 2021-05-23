/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStoreClassRegistry, NSDictionary, NSMutableDictionary, NSString;

@protocol FCKeyValueStoreMigrating, NFLocking;

@interface FCKeyValueStore : NSObject

{
    _Bool _shouldExportJSONSidecar;
    _Bool _unsafeWaitingOnSave;
    NSString *_name;
    unsigned long long _storeSize;
    NSMutableDictionary *_unsafeObjectsByKey;
    id <NFLocking> _lock;
    NSString *_storeDirectory;
    unsigned long long _clientVersion;
    unsigned long long _optionsMask;
    FCKeyValueStoreClassRegistry *_classRegistry;
    id <FCKeyValueStoreMigrating> _migrator;
    CDUnknownBlockType _objectHandler;
    CDUnknownBlockType _arrayObjectHandler;
    CDUnknownBlockType _dictionaryKeyHandler;
    CDUnknownBlockType _dictionaryValueHandler;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long storeSize;
@property (retain, nonatomic) NSMutableDictionary *unsafeObjectsByKey;
@property (nonatomic) _Bool unsafeWaitingOnSave;
@property (retain, nonatomic) id <NFLocking> lock;
@property (retain, nonatomic) NSString *storeDirectory;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned long long optionsMask;
@property (retain, nonatomic) FCKeyValueStoreClassRegistry *classRegistry;
@property (retain, nonatomic) id <FCKeyValueStoreMigrating> migrator;
@property (copy, nonatomic) CDUnknownBlockType objectHandler;
@property (copy, nonatomic) CDUnknownBlockType arrayObjectHandler;
@property (copy, nonatomic) CDUnknownBlockType dictionaryKeyHandler;
@property (copy, nonatomic) CDUnknownBlockType dictionaryValueHandler;
@property (nonatomic) _Bool shouldExportJSONSidecar;
@property (nonatomic, readonly) NSDictionary *asDictionary;

+ (id)persistenceQueue;
+ (_Bool)shouldDumpToJSON;

- (id)init;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (id)_dictionary;
- (void)save;
- (id)objectsForKeys:(id)arg1;
- (_Bool)containsObjectForKey:(id)arg1;
- (void)_save;
- (id)_loadFromDisk;
- (void)_clearStore;
- (_Bool)_threadSafe;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_isCloudBackupEnabled;
- (void)setCloudBackupEnabled:(_Bool)arg1;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (_Bool)_shouldMigrateOnUpgrade;
- (_Bool)_persistOnlyInMemoryEnabled;
- (void)_logCacheStatus;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolValueForKey:(id)arg1;
- (void)addAllEntriesToDictionary:(id)arg1;
- (void)setJSONEncodingHandlersWithObjectHandler:(CDUnknownBlockType)arg1 arrayObjectHandler:(CDUnknownBlockType)arg2 dictionaryKeyHandler:(CDUnknownBlockType)arg3 dictionaryValueHandler:(CDUnknownBlockType)arg4;
- (id)jsonEncodableObject;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonString;
- (void)_maybeWriteObjectsByKey:(CDUnknownBlockType)arg1;
- (void)_writeObjectsByKey:(CDUnknownBlockType)arg1;
- (void)_readObjectsByKey:(CDUnknownBlockType)arg1;
- (id)fc_jsonStringWithDictionary:(id)arg1;
- (void)_maybeSaveJSONRepresentationWithDictionary:(id)arg1;
- (id)fc_jsonEncodableDictionaryWithDictionary:(id)arg1;

@end
