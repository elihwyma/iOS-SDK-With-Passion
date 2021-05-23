/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable

{
    NSString *_accountId;
    NSString *_defaultEmail;
    NSString *_displayName;
    NSMutableArray *_emails;
    unsigned int _fullSyncVersion;
    NSString *_localId;
    NSMutableArray *_mailboxes;
    NSString *_parentId;
    NSString *_username;
    _Bool _shouldArchive;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int shouldArchive:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasShouldArchive;
@property (nonatomic) _Bool shouldArchive;
@property (retain, nonatomic) NSMutableArray *emails;
@property (retain, nonatomic) NSMutableArray *mailboxes;
@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDefaultEmail;
@property (retain, nonatomic) NSString *defaultEmail;
@property (nonatomic, readonly) _Bool hasUsername;
@property (retain, nonatomic) NSString *username;
@property (nonatomic, readonly) _Bool hasLocalId;
@property (retain, nonatomic) NSString *localId;
@property (nonatomic, readonly) _Bool hasParentId;
@property (retain, nonatomic) NSString *parentId;

+ (Class)mailboxesType;
+ (Class)emailType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)emailAtIndex:(unsigned long long)arg1;
- (void)addEmail:(id)arg1;
- (void)addMailboxes:(id)arg1;
- (unsigned long long)mailboxesCount;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailsCount;
- (void)clearEmails;

@end
