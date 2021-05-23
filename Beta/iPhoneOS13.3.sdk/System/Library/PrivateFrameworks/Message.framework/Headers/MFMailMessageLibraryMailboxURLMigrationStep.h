/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryMailboxURLMigrationStep : NSObject

{
    EDPersistenceDatabaseConnection *_sqliteConnection;
}

@property (retain, nonatomic) EDPersistenceDatabaseConnection *sqliteConnection;

- (_Bool)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;
- (_Bool)_renameMailboxDataFolders:(struct sqlite3 *)arg1;
- (_Bool)_renameMailboxURLsForMailAccount:(id)arg1 inSQLiteDB:(struct sqlite3 *)arg2;
- (void)_purgeFoldersMatchingPatterns:(id)arg1;
- (_Bool)_updateMailboxURLsInSQLitedb:(struct sqlite3 *)arg1 withOldURLToNewURLMap:(id)arg2;

@end
