/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMCollection.h>

#import <Email/Swift-Protocol.h>

@class ECMessageFlags, ECSubject, EFQuery, EMMailboxScope, EMMessage, EMMessageListChangeObserverHelper, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString;

@protocol EMCollectionItemID, EMMailboxTypeResolver;

@interface EMThread : EMCollection <Swift>

{
    unsigned long long _isEditable;
    EMMailboxScope *_mailboxScope;
    id <EMMailboxTypeResolver> _mailboxTypeResolver;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s _mailboxScopeLock;
    struct os_unfair_lock_s _mailboxTypeResolverLock;
    struct os_unfair_lock_s _mailboxesLock;
    _Bool _hasUnflagged;
    _Bool _isVIP;
    _Bool _isBocked;
    _Bool _hasAttachments;
    _Bool _isToMe;
    _Bool _isCCMe;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    NSArray *_senderList;
    NSArray *_toList;
    NSArray *_ccList;
    ECMessageFlags *_flags;
    NSIndexSet *_flagColors;
    long long _conversationNotificationLevel;
    unsigned long long _count;
    id <EMCollectionItemID> _displayMessageItemID;
    EFQuery *_originatingQuery;
    EMMessageListChangeObserverHelper *_changeObserverHelper;
}

@property (nonatomic, readonly) EMMessageRepository *repository;
@property (nonatomic, readonly) EFQuery *originatingQuery;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (retain, nonatomic) EMMessageListChangeObserverHelper *changeObserverHelper;
@property (nonatomic, readonly) id <EMCollectionItemID> itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) EMObjectID *objectID;
@property (readonly) NSDate *date;
@property (readonly) ECSubject *subject;
@property (copy, readonly) NSString *summary;
@property (copy, readonly) NSArray *senderList;
@property (copy, readonly) NSArray *toList;
@property (copy, readonly) NSArray *ccList;
@property (readonly) ECMessageFlags *flags;
@property (readonly) _Bool hasUnflagged;
@property (copy, readonly) NSIndexSet *flagColors;
@property (readonly) _Bool isVIP;
@property (readonly) _Bool isBlocked;
@property (readonly) _Bool isToMe;
@property (readonly) _Bool isCCMe;
@property (readonly) _Bool hasAttachments;
@property (readonly) long long conversationNotificationLevel;
@property (readonly) unsigned long long count;
@property (readonly) long long conversationID;
@property (copy, readonly) NSArray *mailboxObjectIDs;
@property (copy, readonly) NSArray *mailboxes;
@property (readonly) id <EMCollectionItemID> displayMessageItemID;
@property (readonly) EMObjectID *displayMessageObjectID;
@property (readonly) EMMessage *displayMessage;
@property (readonly) _Bool deleteMovesToTrash;
@property (readonly) _Bool supportsArchiving;
@property (readonly) _Bool shouldArchiveByDefault;
@property (readonly) _Bool isEditable;
@property long long _internalID;
@property (retain) id <EMMailboxTypeResolver> mailboxTypeResolver;

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)ef_publicDescription;
- (void)setIsVIP:(_Bool)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setSenderList:(id)arg1;
- (void)setToList:(id)arg1;
- (void)setCcList:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setIsBlocked:(_Bool)arg1;
- (void)setHasAttachments:(_Bool)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setIsToMe:(_Bool)arg1;
- (void)setIsCCMe:(_Bool)arg1;
- (void)setRepository:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (_Bool)objectIDBelongsToCollection:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setHasUnflagged:(_Bool)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setDisplayMessageItemID:(id)arg1;
- (void)_commonInitWithOriginatingQuery:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(CDUnknownBlockType)arg3;

@end
