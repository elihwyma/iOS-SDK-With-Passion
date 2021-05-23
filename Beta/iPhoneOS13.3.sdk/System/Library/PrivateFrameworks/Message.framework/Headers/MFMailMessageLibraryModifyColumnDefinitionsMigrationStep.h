/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject

{
    EDPersistenceDatabaseConnection *_connection;
}

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (nonatomic, readonly) EFSQLSchema *schema;

- (_Bool)performMigrationStep;
- (id)initWithSQLiteConnection:(id)arg1;
- (id)messagesTableStubSchema;
- (id)mailboxesTableStubSchema;
- (id)serverMessagesTableSchema;
- (id)serverLabelsTableSchema;
- (id)localMessageActionsTableSchema;
- (id)actionMessagesTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionFlagsTableSchema;

@end
