/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepositoryObject.h>

#import <Email/Swift-Protocol.h>

@class ECMessageFlags, ECSubject, EMMailDropMetadata, EMMessageRepository, EMObjectID, NSArray, NSDate, NSIndexSet, NSString, NSUUID;

@protocol ECEmailAddressConvertible, EMCollectionItemID;

@interface EMMessage : EMRepositoryObject <Swift>

{
    unsigned long long _isEditable;
    NSArray *_mailboxes;
    NSArray *_mailboxObjectIDs;
    struct os_unfair_lock_s _mailboxesLock;
    _Bool _isVIP;
    _Bool _isBlocked;
    _Bool _hasAttachments;
    _Bool _isToMe;
    _Bool _isCCMe;
    _Bool _isAvailableLocally;
    int _exchangeEventUID;
    NSDate *_date;
    ECSubject *_subject;
    NSString *_summary;
    ECMessageFlags *_flags;
    long long _conversationNotificationLevel;
    long long _conversationID;
    NSArray *_toList;
    NSArray *_ccList;
    long long _dataTransferByteCount;
    long long _storageByteCount;
    EMMailDropMetadata *_mailDropMetadata;
    CDUnknownBlockType _loaderBlock;
    long long __internalID;
    id <ECEmailAddressConvertible> _senderAddress;
    NSArray *_bccList;
    NSUUID *_documentID;
}

@property (nonatomic, readonly) EMMessageRepository *repository;
@property (retain, nonatomic) id <ECEmailAddressConvertible> senderAddress;
@property (copy, nonatomic) NSArray *bccList;
@property (copy, nonatomic) NSUUID *documentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) EMObjectID *objectID;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;
@property (copy, nonatomic, readonly) NSArray *availableRepresentations;
@property (nonatomic, readonly) _Bool isAvailableLocally;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (copy, nonatomic, readonly) NSString *contentID;
@property (copy, nonatomic, readonly) NSString *UTType;
@property (nonatomic, readonly) long long dataTransferByteCount;
@property (nonatomic, readonly) long long storageByteCount;
@property (copy, nonatomic, readonly) EMMailDropMetadata *mailDropMetadata;
@property (nonatomic, readonly) int exchangeEventUID;
@property (copy, nonatomic) CDUnknownBlockType loaderBlock;
@property (nonatomic) _Bool isSinglePagePDF;
@property (nonatomic, readonly) id <EMCollectionItemID> itemID;
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

+ (_Bool)supportsSecureCoding;
+ (id)log;
+ (id)UTType;
+ (id)combinedFlagsForMessageListItemFlags:(id)arg1 forDisplay:(_Bool)arg2;
+ (id)externalDataTypeIdentifiers;
+ (id)combinedFlagsForMessageListItems:(id)arg1 forDisplay:(_Bool)arg2;
+ (id)combinedFlagsForMessageListItems:(id)arg1;
+ (id)predicateForMessageWithObjectID:(id)arg1;
+ (id)_predicateForMessagesWithObjectIDConstantValue:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)predicateForMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForMessageWithItemID:(id)arg1 mailboxPredicate:(id)arg2 mailboxTypeResolver:(id)arg3;
+ (id)predicateForMessageWithInternalID:(long long)arg1;
+ (id)predicateForExcludingMessageWithObjectID:(id)arg1;
+ (id)predicateForExcludingMessagesWithObjectIDs:(id)arg1;
+ (id)predicateForMessageWithMIMEMessageIDHeader:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setFlags:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setIsVIP:(_Bool)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setSenderList:(id)arg1;
- (void)setToList:(id)arg1;
- (void)setCcList:(id)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setUTType:(id)arg1;
- (void)setIsAvailableLocally:(_Bool)arg1;
- (void)setDataTransferByteCount:(long long)arg1;
- (void)setStorageByteCount:(long long)arg1;
- (void)setExchangeEventUID:(int)arg1;
- (void)setAvailableRepresentations:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setIsBlocked:(_Bool)arg1;
- (void)setHasAttachments:(_Bool)arg1;
- (void)setConversationNotificationLevel:(long long)arg1;
- (void)setIsToMe:(_Bool)arg1;
- (void)setIsCCMe:(_Bool)arg1;
- (id)initWithObjectID:(id)arg1 builder:(CDUnknownBlockType)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestRepresentationWithOptions:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRepository:(id)arg1;
- (void)_commonInitWithBuilder:(CDUnknownBlockType)arg1;
- (void)setMailboxObjectIDs:(id)arg1;
- (void)setHasUnflagged:(_Bool)arg1;
- (void)setFlagColors:(id)arg1;
- (void)setDisplayMessageItemID:(id)arg1;
- (void)setCachedMetadata:(id)arg1 forKey:(id)arg2;
- (id)cachedMetadataOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)isInManagedAccountWithSourceMailboxScope:(id)arg1;

@end
