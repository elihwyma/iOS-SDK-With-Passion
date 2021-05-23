/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPConfiguration : PBCodable

{
    unsigned long long _created;
    unsigned long long _expires;
    NSMutableArray *_fields;
    struct {
        unsigned int created:1;
        unsigned int expires:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic) _Bool hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) _Bool hasExpires;
@property (nonatomic) unsigned long long expires;

+ (Class)fieldsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFields:(id)arg1;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)arg1;

@end
