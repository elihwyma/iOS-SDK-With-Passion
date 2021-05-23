/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSString, UNSBundleLibrarian;

@protocol UNSContentProtectionStrategy;

@interface UNSKeyedDataStoreRepository : NSObject

{
    NSString *_directory;
    NSString *_fileName;
    NSString *_pathExtension;
    UNSBundleLibrarian *_librarian;
    id <UNSContentProtectionStrategy> _protectionStrategy;
    NSString *_objectIdentifierKey;
    long long _maxObjectsPerKey;
    _Bool _shouldExcludeFromBackup;
}

- (id)allKeys;
- (id)replaceObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 forKey:(id)arg2;
- (id)objectsForKey:(id)arg1;
- (void)setObjects:(id)arg1 forKey:(id)arg2;
- (id)directoryPath;
- (id)_pathForKey:(id)arg1;
- (id)_directoryForKey:(id)arg1;
- (id)_dataAtPath:(id)arg1;
- (id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 repositoryProtectionStrategy:(id)arg5 objectIdentifierKey:(id)arg6 maxObjectsPerKey:(long long)arg7 shouldExcludeFromBackup:(_Bool)arg8;
- (void)protectionStateChanged;
- (void)removeStoreForKey:(id)arg1;
- (id)_objectsAtPath:(id)arg1;
- (id)_objectsForData:(id)arg1 identifier:(id)arg2;
- (id)_objectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;
- (_Bool)_saveObjects:(id)arg1 atPath:(id)arg2;
- (id)_removeObjectsPassingTest:(CDUnknownBlockType)arg1 atPath:(id)arg2;
- (void)_setObjects:(id)arg1 atPath:(id)arg2;
- (id)addObject:(id)arg1 mustReplace:(_Bool)arg2 forKey:(id)arg3;
- (id)_addObject:(id)arg1 mustReplace:(_Bool)arg2 atPath:(id)arg3;
- (id)_addObject:(id)arg1 toObjects:(id)arg2 mustReplace:(_Bool)arg3 receipt:(id *)arg4;
- (_Bool)_isReplacementSupported;
- (void)_removeItemAtPath:(id)arg1;
- (_Bool)_useReplacementToImport:(id)arg1 into:(id)arg2;
- (id)objectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeAllObjectsForKey:(id)arg1;
- (id)removeObjectsPassingTest:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)removeDataStoreRepository;
- (void)migrateStoreAtPath:(id)arg1 forKey:(id)arg2;

@end
