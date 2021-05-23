/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema, NSString;

@interface MFMailMessageLibraryAdoptSharedSchemaMigrationStep : NSObject

{
    EDPersistenceDatabaseConnection *_connection;
    NSString *_protectedDatabaseName;
}

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (copy, nonatomic, readonly) NSString *protectedDatabaseName;
@property (nonatomic, readonly) EFSQLSchema *schema;
@property (nonatomic, readonly) EFSQLSchema *protectedSchema;

+ (void)cleanUpAfterMigrationWithConnection:(id)arg1;

- (id)_messagesTableSchema;
- (id)_recipientsTableSchema;
- (id)_messageReferencesTableSchema;
- (id)_conversationsTableSchema;
- (id)_conversationIDMessageIDTableSchema;
- (id)_spotlightMessageReindexTableSchema;
- (id)_mailboxesTableSchema;
- (id)_propertiesTableSchema;
- (id)_messageDataTableSchema;
- (id)_messageDataDeletedTableSchema;
- (id)_popUIDsTableSchema;
- (id)_accountsTableSchema;
- (id)_spotlightTombstonesTableSchema;
- (id)_addressesTableSchema;
- (id)_subjectsTableSchema;
- (id)_summariesTableSchema;
- (id)_protectedMessageDataTableSchema;
- (_Bool)_initializeOldProtectedSchema;
- (_Bool)_transformSchema;
- (_Bool)_transformProtectedSchema;
- (_Bool)_createTemporaryTables;
- (_Bool)_migrateData;
- (_Bool)_dropTemporaryTables;
- (_Bool)_createIndexes;
- (_Bool)_cleanupOldSchema;
- (_Bool)_migrateNonMessages;
- (_Bool)_migrateSubjects;
- (_Bool)_migrateSummaries;
- (_Bool)_migrateSendersAndRecipients;
- (_Bool)_migrateMessages;
- (id)initWithSQLiteConnection:(id)arg1 protectedDatabaseName:(id)arg2;
- (_Bool)performMigrationStep;

@end
