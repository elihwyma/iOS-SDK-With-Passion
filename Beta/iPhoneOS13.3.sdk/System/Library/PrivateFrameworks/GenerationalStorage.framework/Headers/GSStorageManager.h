/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@interface GSStorageManager : NSObject

+ (void)initialize;
+ (id)manager;
+ (_Bool)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg1 error:(id *)arg2;
+ (_Bool)_isPermanentStorageSupportedForFD:(int)arg1 error:(id *)arg2;

- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(_Bool)arg2 error:(id *)arg3;
- (id)persistentIdentifierInStorage:(struct NSObject *)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;
- (_Bool)isPermanentStorageSupportedAtURL:(id)arg1 error:(id *)arg2;
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id *)arg3;
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)removeTemporaryStorage:(id)arg1 error:(id *)arg2;
- (void)_connectionWithDaemonWasLost;
- (id)stagingPrefixForDocumentID:(id)arg1;
- (_Bool)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id *)arg2;
- (_Bool)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)isItemAtURLValidInsidePermanentStorage:(id)arg1 error:(id *)arg2;

@end
