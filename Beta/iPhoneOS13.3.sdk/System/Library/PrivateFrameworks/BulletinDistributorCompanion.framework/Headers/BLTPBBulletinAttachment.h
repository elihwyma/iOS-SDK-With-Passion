/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface BLTPBBulletinAttachment : PBCodable

{
    NSString *_identifier;
    unsigned int _type;
    NSString *_uRL;
    _Bool _isUpdated;
    struct {
        unsigned int type:1;
        unsigned int isUpdated:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic, readonly) _Bool hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) _Bool hasIsUpdated;
@property (nonatomic) _Bool isUpdated;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)attachmentURLURL;

@end
