/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDGmailLabelPersistence, EDPersistenceDatabase, NSString;

@interface EDLocalActionPersistence : NSObject

{
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)localMessageActionsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionFlagsTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;

- (id)init;
- (_Bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (id)messageForDatabaseID:(long long)arg1;
- (id)messageActionsForAccountURL:(id)arg1 previousActionID:(long long)arg2;
- (id)_transferActionForRow:(id)arg1 connection:(id)arg2 failedMessages:(id)arg3;
- (id)_flagChangeActionForRow:(id)arg1 connection:(id)arg2;
- (id)_flagChangeAllActionForRow:(id)arg1 connection:(id)arg2;
- (id)_transferUndownloadedActionForRow:(id)arg1 connection:(id)arg2;
- (id)_labelChangeActionForRow:(id)arg1 connection:(id)arg2;
- (void)_findMessagesForAction:(long long)arg1 remoteIDs:(id)arg2 messages:(id)arg3 connection:(id)arg4;
- (id)_flagChangeForAction:(long long)arg1 connection:(id)arg2;
- (_Bool)_addFlagChange:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (_Bool)_addActionMessageForMessage:(id)arg1 destinationMessage:(id)arg2 actionID:(long long)arg3 actionPhase:(long long)arg4 connection:(id)arg5;
- (_Bool)_addActionMessageForSourceRemoteID:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (_Bool)_setLabelsOnAction:(long long)arg1 labels:(id)arg2 add:(_Bool)arg3 connection:(id)arg4;
- (void)_deleteCopyItems:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (void)_updateCopyItems:(id)arg1 toPhase:(long long)arg2 actionID:(long long)arg3 connection:(id)arg4;
- (void)removeMessageAction:(long long)arg1;
- (id)_whereClauseToFindCopyItems:(id)arg1;
- (_Bool)persistFlagChangeAction:(id)arg1;
- (_Bool)persistFlagChangeUndownloadedAction:(id)arg1;
- (_Bool)persistTransferAction:(id)arg1;
- (_Bool)persistTransferUndownloadedAction:(id)arg1;
- (_Bool)persistLabelChangeAction:(id)arg1;
- (_Bool)updateTransferAction:(id)arg1 withResults:(id)arg2;
- (id)_sourceRemoteIDListForCopyItems:(id)arg1;
- (_Bool)updateTransferUndownloadedMessageAction:(id)arg1 withResults:(id)arg2;

@end
