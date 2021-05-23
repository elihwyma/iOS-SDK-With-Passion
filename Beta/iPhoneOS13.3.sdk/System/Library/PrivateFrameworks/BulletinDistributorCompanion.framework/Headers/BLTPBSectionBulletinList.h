/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable

{
    NSMutableArray *_bulletinIdentifiers;
    NSString *_sectionID;
}

@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *bulletinIdentifiers;

+ (Class)bulletinIdentifierType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addBulletinIdentifier:(id)arg1;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;
- (id)bulletinIdentifierAtIndex:(unsigned long long)arg1;

@end
