/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable

{
    unsigned int _destinations;
    NSMutableArray *_keys;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property (nonatomic, readonly) _Bool hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (nonatomic, readonly) _Bool hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) unsigned int destinations;
@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keyType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addKey:(id)arg1;
- (unsigned long long)keysCount;
- (void)clearKeys;

@end
