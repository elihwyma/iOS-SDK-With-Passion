/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccessExpress/DADisableableObject.h>

@interface ASAccountActor : DADisableableObject

- (oneway void)setAccount:(id)arg1;
- (int)mailNumberOfPastDaysToSync;
- (oneway void)shutdown;
- (int)supportsConversations;
- (oneway void)cancelTaskWithID:(int)arg1;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (id)mailboxes;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (id)initWithDAAccount:(id)arg1;
- (void)performFolderChange:(id)arg1 isUserRequested:(_Bool)arg2;
- (id)encryptionIdentityPersistentReference;
- (int)supportsMailboxSearch;
- (int)supportsEmailFlagging;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 isUserRequested:(_Bool)arg5 consumer:(id)arg6;
- (int)supportsDraftFolderSync;
- (int)supportsUniqueServerId;
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(_Bool)arg2;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)performSearchQuery:(id)arg1;
- (oneway void)cancelSearchQuery:(id)arg1;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (id)signingIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (id)customSignature;
- (oneway void)setCustomSignature:(id)arg1;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (oneway void)cancelAllSearchQueries;
- (_Bool)searchQueriesRunning;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 isUserRequested:(_Bool)arg5 consumer:(id)arg6;
- (oneway void)startup;
- (int)supportsSmartForwardReply;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (_Bool)generatesBulletins;
- (oneway void)setGeneratesBulletins:(_Bool)arg1;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_accountPasswordChanged;
- (id)foldersTag;

@end
