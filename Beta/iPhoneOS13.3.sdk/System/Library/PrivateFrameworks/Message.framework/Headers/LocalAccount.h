/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MailAccount.h>

@interface LocalAccount : MailAccount

+ (id)accountTypeString;
+ (id)localAccount;
+ (id)accountTypeIdentifier;
+ (id)csAccountTypeString;
+ (id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;

- (_Bool)isActive;
- (void)setPassword:(id)arg1;
- (id)uniqueID;
- (id)displayName;
- (void)setUsername:(id)arg1;
- (void)setHostname:(id)arg1;
- (_Bool)isLocalAccount;
- (_Bool)canGoOffline;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (void)resetSpecialMailboxes;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_URLScheme;
- (id)mailboxUidForRelativePath:(id)arg1 create:(_Bool)arg2 withOption:(int)arg3;
- (id)primaryMailboxUid;
- (Class)storeClass;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)mailboxPathExtension;
- (id)_infoForMatchingURL:(id)arg1;
- (id)pushedMailboxUids;
- (_Bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (id)transientDraftsFolderShouldCreate:(_Bool)arg1;
- (id)legacySQLExpressionToMatchAllMailboxes;
- (_Bool)canFetch;
- (_Bool)_shouldConfigureMailboxCache;
- (_Bool)supportsPurge;
- (id)mailboxUidForFileSystemPath:(id)arg1;
- (id)transientDraftsFolder;
- (_Bool)deleteInPlaceForMailbox:(id)arg1;
- (_Bool)supportsAppend;
- (_Bool)supportsArchiving;

@end
