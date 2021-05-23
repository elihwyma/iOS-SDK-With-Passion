/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@interface WebDatabaseManager : NSObject

+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;
+ (void)scheduleEmptyDatabaseRemoval;

- (id)init;
- (id)origins;
- (id)databasesWithOrigin:(id)arg1;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (void)deleteAllDatabases;
- (_Bool)deleteOrigin:(id)arg1;
- (_Bool)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (void)deleteAllIndexedDatabases;
- (void)setIDBPerOriginQuota:(unsigned long long)arg1;

@end
