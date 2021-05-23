/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface BLTPBBulletinSummaryKey : PBCodable

{
    NSString *_key;
    NSData *_value;
    NSData *_valueNulls;
}

@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic, readonly) _Bool hasValueNulls;
@property (retain, nonatomic) NSData *valueNulls;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
