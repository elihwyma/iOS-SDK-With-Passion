/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface BLTPBBulletinIdentifier : PBCodable

{
    NSString *_publisherBulletinID;
    NSString *_recordID;
}

@property (nonatomic, readonly) _Bool hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (nonatomic, readonly) _Bool hasRecordID;
@property (retain, nonatomic) NSString *recordID;

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
