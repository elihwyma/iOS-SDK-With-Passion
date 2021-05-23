/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebStorageManager : NSObject

+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
+ (void)setStorageDatabaseIdleInterval:(double)arg1;
+ (void)closeIdleLocalStorageDatabases;

- (id)init;
- (unsigned long long)diskUsageForOrigin:(id)arg1;
- (id)origins;
- (void)deleteOrigin:(id)arg1;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;

@end
