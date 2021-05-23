/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject

{
    EDPersistenceDatabaseConnection *_connection;
}

@property (retain, nonatomic) EDPersistenceDatabaseConnection *connection;

+ (id)log;

- (_Bool)performMigrationStep;
- (id)_serverMessagesTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverLabelsTableDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionFlagsActionIndexDefinition;
- (_Bool)_populateServerMessages;
- (id)_offlineCacheOperations;
- (id)initWithSQLiteConnection:(id)arg1;

@end
