/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NNMKProtoMailbox : PBCodable

{
    NSString *_accountId;
    NSString *_customName;
    unsigned int _filterType;
    NSString *_mailboxId;
    unsigned int _type;
    _Bool _syncEnabled;
    _Bool _syncRequested;
    struct {
        unsigned int filterType:1;
        unsigned int type:1;
        unsigned int syncEnabled:1;
        unsigned int syncRequested:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (nonatomic, readonly) _Bool hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic, readonly) _Bool hasCustomName;
@property (retain, nonatomic) NSString *customName;
@property (nonatomic) _Bool hasFilterType;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) _Bool hasSyncEnabled;
@property (nonatomic) _Bool syncEnabled;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) _Bool hasSyncRequested;
@property (nonatomic) _Bool syncRequested;

+ (id)protoMailboxFromMailbox:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)mailbox;

@end
