/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

@protocol ASAccountActorMessages

- (unsigned short)setAccount: /* Error: Ran out of types for this method. */;
- (unsigned short)mailNumberOfPastDaysToSync;
- (unsigned short)shutdown;
- (unsigned short)supportsConversations;
- (unsigned short)cancelTaskWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMessageWithRFC822Data:messageID:outgoingMessageType:originalMessageFolderID:originalMessageItemID:originalMessageLongID:originalAccountID:useSmartTasksIfPossible:isUserRequested:consumer:context: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxes;
- (unsigned short)inboxFolder;
- (unsigned short)sentItemsFolder;
- (unsigned short)deletedItemsFolder;
- (unsigned short)draftsFolder;
- (unsigned short)performFolderChange:isUserRequested: /* Error: Ran out of types for this method. */;
- (unsigned short)encryptionIdentityPersistentReference;
- (unsigned short)supportsMailboxSearch;
- (unsigned short)supportsEmailFlagging;
- (unsigned short)performMailboxRequests:mailbox:previousTag:clientWinsOnSyncConflict:isUserRequested:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsDraftFolderSync;
- (unsigned short)supportsUniqueServerId;
- (unsigned short)reattemptInvitationLinkageForMetaData:inFolderWithId: /* Error: Ran out of types for this method. */;
- (unsigned short)unactionableICSRepresentationForMetaData:inFolderWithId:outSummary: /* Error: Ran out of types for this method. */;
- (unsigned short)folderIDsThatExternalClientsCareAboutForDataclasses:withTag: /* Error: Ran out of types for this method. */;
- (unsigned short)monitorFoldersForUpdates:persistent: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringAllFolders;
- (unsigned short)performSearchQuery: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSearchQuery: /* Error: Ran out of types for this method. */;
- (unsigned short)setFolderIdsThatExternalClientsCareAboutAdded:deleted:foldersTag: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringFoldersForUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)signingIdentityPersistentReference;
- (unsigned short)setSigningIdentityPersistentReference: /* Error: Ran out of types for this method. */;
- (unsigned short)setEncryptionIdentityPersistentReference: /* Error: Ran out of types for this method. */;
- (unsigned short)performResolveRecipientsRequest:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)customSignature;
- (unsigned short)setCustomSignature: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchMessageSearchResultRequests:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)performFetchAttachmentRequest:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)performMoveRequests:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAllSearchQueries;
- (unsigned short)searchQueriesRunning;
- (unsigned short)performMailboxRequest:mailbox:previousTag:clientWinsOnSyncConflict:isUserRequested:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)startup;
- (unsigned short)supportsSmartForwardReply;
- (unsigned short)setMailNumberOfPastDaysToSync: /* Error: Ran out of types for this method. */;
- (unsigned short)generatesBulletins;
- (unsigned short)setGeneratesBulletins: /* Error: Ran out of types for this method. */;
- (unsigned short)monitorFoldersForUpdates: /* Error: Ran out of types for this method. */;
- (unsigned short)folderIDsThatExternalClientsCareAboutWithTag: /* Error: Ran out of types for this method. */;
- (unsigned short)sendSmartMessageWithRFC822Data:messageID:outgoingMessageType:originalMessageFolderID:originalMessageItemID:originalMessageLongID:originalAccountID:replaceOriginalMime:isUserRequested:consumer:context: /* Error: Ran out of types for this method. */;
- (unsigned short)performMailboxRequest:mailbox:previousTag:isUserRequested:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)performMailboxRequests:mailbox:previousTag:isUserRequested:consumer: /* Error: Ran out of types for this method. */;
- (unsigned short)_newASPolicyKeyNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)_daemonDiedNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)_folderUpdatedNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)_folderHierarchyChanged;
- (unsigned short)_foldersThatExternalClientsCareAboutChanged;
- (unsigned short)_accountPasswordChanged;

@end
