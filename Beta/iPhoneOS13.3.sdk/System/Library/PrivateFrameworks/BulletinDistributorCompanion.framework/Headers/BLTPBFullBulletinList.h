/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface BLTPBFullBulletinList : PBCodable

{
    NSMutableArray *_sectionBulletinLists;
}

@property (retain, nonatomic) NSMutableArray *sectionBulletinLists;

+ (Class)sectionBulletinListType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSectionBulletinList:(id)arg1;
- (unsigned long long)sectionBulletinListsCount;
- (void)clearSectionBulletinLists;
- (id)sectionBulletinListAtIndex:(unsigned long long)arg1;

@end
