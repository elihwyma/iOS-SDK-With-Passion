/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (HealthDaemon)

- (_Bool)hd_removeSQLiteDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
- (_Bool)hd_removeHFDDatabaseAtURL:(id)arg1 preserveCopy:(_Bool)arg2;
- (_Bool)_hd_removeDatabaseFilesAtDatabaseURL:(id)arg1 extensionSuffixes:(id)arg2 preserveCopy:(_Bool)arg3;

@end
