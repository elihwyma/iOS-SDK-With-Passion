/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepositoryObject.h>

#import <Email/Swift-Protocol.h>

@class EMMailboxCollection, EMMailboxObjectID, EMMailboxRepository, EMObjectID, EMReceivingAccount, NSString;

@interface EMMailbox : EMRepositoryObject <Swift>

{
    EMReceivingAccount *_account;
    _Bool _descriptionUsesRealName;
    _Bool _canContainMessages;
    _Bool _canArchive;
    EMMailboxObjectID *_parentID;
    EMObjectID *_accountIdentifier;
    EMMailbox *_parent;
    EMMailboxCollection *_children;
    NSString *_name;
    NSString *_redactedName;
    long long _type;
}

@property (weak, nonatomic) EMMailbox *parent;
@property (nonatomic, readonly) EMMailboxObjectID *parentID;
@property (retain, nonatomic) EMMailboxCollection *children;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) _Bool canContainMessages;
@property (nonatomic) _Bool canArchive;
@property (retain, nonatomic) EMMailboxRepository *repository;
@property (nonatomic, readonly) EMReceivingAccount *account;
@property (nonatomic, readonly) EMObjectID *accountIdentifier;
@property (copy, nonatomic, readonly) NSString *redactedName;
@property (nonatomic, readonly) _Bool isTopLevelMailbox;
@property (nonatomic, readonly) _Bool isSmartMailbox;
@property (nonatomic, readonly) _Bool isInboxMailbox;
@property (nonatomic, readonly) _Bool isOutgoingMailbox;
@property (nonatomic, readonly) _Bool isSentMailbox;
@property (nonatomic, readonly) _Bool supportsSelectAll;
@property (nonatomic, readonly) _Bool shouldArchiveByDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool descriptionUsesRealName;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (_Bool)supportsSecureCoding;
+ (_Bool)typeIsValidTransferDestination:(long long)arg1;
+ (id)sortDescriptorForNameAscending:(_Bool)arg1;
+ (_Bool)deleteMovesToTrashForMailboxes:(id)arg1;
+ (_Bool)supportsArchivingForMailboxes:(id)arg1;
+ (_Bool)shouldArchiveByDefaultForMailboxes:(id)arg1;
+ (_Bool)supportsSelectAllForMailboxes:(id)arg1;
+ (_Bool)_isOutgoingMailboxType:(long long)arg1;
+ (id)predicateForMailboxAccount:(id)arg1 topLevelOnly:(_Bool)arg2;
+ (id)predicateForMailboxChildren:(id)arg1;
+ (id)predicateForTopLevelMailboxes;
+ (id)predicateForMailboxType:(long long)arg1;
+ (id)_predicateForSmartMailboxes:(_Bool)arg1;
+ (id)predicateForMailboxName:(id)arg1;
+ (id)predicateForMailboxAccount:(id)arg1;
+ (id)predicateForPrimaryMailboxWithAccount:(id)arg1;
+ (id)predicateForSmartMailboxes;
+ (id)predicateForRegularMailboxes;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1 repository:(id)arg2 name:(id)arg3 accountIdentifier:(id)arg4 type:(long long)arg5 builder:(CDUnknownBlockType)arg6;
- (void)_commonInitName:(id)arg1 accountIdentifier:(id)arg2 type:(long long)arg3 canContainMessages:(_Bool)arg4 children:(id)arg5 parentID:(id)arg6 builder:(CDUnknownBlockType)arg7;
- (_Bool)_canArchiveForMailboxType:(long long)arg1;
- (_Bool)_shouldArchiveByDefault;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 accountIdentifier:(id)arg3 type:(long long)arg4 builder:(CDUnknownBlockType)arg5;
- (void)setParentFromMailboxes:(id)arg1;

@end
