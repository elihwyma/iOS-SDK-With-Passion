/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDMailboxPersistence.h>

@class EDPersistenceDatabase, MFMailMessageLibrary, MFMailboxProvider;

@interface MFMailboxPersistence_iOS : EDMailboxPersistence

{
    EDPersistenceDatabase *_database;
    MFMailMessageLibrary *_library;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (weak, nonatomic, readonly) MFMailMessageLibrary *library;
@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;

- (_Bool)deleteMailbox:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)initWithMailboxProvider:(id)arg1 database:(id)arg2 library:(id)arg3;
- (_Bool)createMailbox:(id)arg1 parentMailboxID:(id)arg2;
- (_Bool)moveMailbox:(id)arg1 newParentMailboxID:(id)arg2;
- (void)serverCountsForMailboxScope:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
