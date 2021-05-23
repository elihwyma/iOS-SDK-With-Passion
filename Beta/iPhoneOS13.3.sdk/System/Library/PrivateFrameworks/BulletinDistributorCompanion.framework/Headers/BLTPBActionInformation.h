/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface BLTPBActionInformation : PBCodable

{
    NSData *_context;
    NSData *_contextNulls;
}

@property (nonatomic, readonly) _Bool hasContext;
@property (retain, nonatomic) NSData *context;
@property (nonatomic, readonly) _Bool hasContextNulls;
@property (retain, nonatomic) NSData *contextNulls;

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
