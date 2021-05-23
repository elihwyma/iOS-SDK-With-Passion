/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDPersistenceDatabaseSchema.h>

@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema

+ (id)_messagesTableSchemaAndAssociationsToResolve:(id *)arg1;
+ (id)mailboxesTableSchema;
+ (id)messageDataTableSchema;
+ (id)messageDataDeletedTableSchema;
+ (id)popUIDsTableSchema;
+ (id)accountsTableSchema;
+ (id)additionalSchemaProviders;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;

@end
