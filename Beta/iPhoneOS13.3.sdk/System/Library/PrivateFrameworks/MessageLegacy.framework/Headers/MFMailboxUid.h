/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFInvocationQueue, MFMessageCriterion, MFWeakReferenceHolder, MailAccount, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MFMailboxUid : NSObject

{
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    _Bool allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSArray *_extraAttributes;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
}

@property (nonatomic, readonly) MFInvocationQueue *attachmentDownloadQueue;
@property (retain, nonatomic) NSArray *extraAttributes;
@property (nonatomic, readonly) unsigned long long suggestionsLostMessageSearchResultCount;
@property (nonatomic, readonly) double suggestionsLostMessageSearchTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)parent;
- (int)type;
- (void)setType:(int)arg1;
- (void)setParent:(id)arg1;
- (_Bool)isValid;
- (void)setName:(id)arg1;
- (unsigned int)attributes;
- (id)dictionaryRepresentation;
- (void)setAttributes:(unsigned int)arg1;
- (id)URL;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)displayName;
- (id)store;
- (id)account;
- (id)fullPath;
- (id)URLString;
- (id)_dictionaryRepresentation;
- (_Bool)isVisible;
- (id)initWithAccount:(id)arg1;
- (id)children;
- (_Bool)setChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)_loadUserInfo;
- (id)uniqueId;
- (_Bool)isShared;
- (_Bool)hasChildren;
- (unsigned long long)numberOfChildren;
- (id)childAtIndex:(unsigned long long)arg1;
- (_Bool)isContainer;
- (id)_privacySafeDescription;
- (void)setRepresentedAccount:(id)arg1;
- (_Bool)shouldRestoreMessagesAfterFailedDelete;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;
- (_Bool)mergeWithUserInfo:(id)arg1;
- (void)saveUserInfo;
- (void)flushCriteria;
- (id)userInfoObjectForKey:(id)arg1;
- (id)mutableDictionaryRepresentation;
- (unsigned int)mailboxID;
- (id)criterion;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)unreadCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;
- (id)childWithName:(id)arg1;
- (_Bool)isStore;
- (id)mutableCopyOfChildren;
- (_Bool)isStandardizedMailboxUid;
- (id)depthFirstEnumerator;
- (id)accountRelativePath;
- (id)childWithExtraAttribute:(id)arg1;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;
- (id)representedAccount;
- (id)_mutableChildren;
- (id)childEnumeratorIncludingHiddenChildren:(_Bool)arg1;
- (unsigned long long)numberOfDescendants;
- (id)URLStringNonNil;
- (id)fullPathNonNil;
- (id)topMailbox;
- (id)rootMailbox;
- (id)ancestralAccount;
- (void)addToPostOrderTraversal:(id)arg1;
- (id)displayNameUsingSpecialNames;
- (id)accountDisplayName;
- (unsigned long long)nonDeletedCount;
- (long long)statusCountDelta;
- (void)updateMostRecentStatusCount:(unsigned long long)arg1;
- (_Bool)shouldUseNonDeletedForUnreadCount;
- (id)childEnumerator;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)descendantWithExtraAttribute:(id)arg1;
- (void)sortChildren;
- (_Bool)isSpecialMailboxUid;
- (_Bool)isSentMailboxUid;
- (_Bool)isOutgoingMailboxUid;
- (_Bool)isNotesMailboxUid;
- (id)realFullPath;
- (id)pathRelativeToMailboxForDisplay:(id)arg1;
- (id)oldURLString;
- (long long)compareWithMailboxUid:(id)arg1;
- (long long)indexToInsertChildMailboxUid:(id)arg1;
- (_Bool)isDescendantOfMailbox:(id)arg1;
- (_Bool)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoBool:(_Bool)arg1 forKey:(id)arg2;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoForSerialization;
- (void)setCriterion:(id)arg1;
- (_Bool)alwaysWriteFullMessageFile;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1;
- (id)tildeAbbreviatedPath;
- (id)URLStringWithAccount:(id)arg1;
- (id)lastViewedMessageID;
- (id)lastViewedMessageDate;
- (void)setLastViewedMessageID:(id)arg1;

@end
