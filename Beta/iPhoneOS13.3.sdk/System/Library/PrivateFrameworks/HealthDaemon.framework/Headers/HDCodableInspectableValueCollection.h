/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableMedicalCodingList, NSMutableArray;

@interface HDCodableInspectableValueCollection : PBCodable <Swift>

{
    long long _collectionType;
    NSMutableArray *_collections;
    HDCodableMedicalCodingList *_elementTags;
    struct {
        unsigned int collectionType:1;
    } _has;
}

@property (nonatomic) _Bool hasCollectionType;
@property (nonatomic) long long collectionType;
@property (retain, nonatomic) NSMutableArray *collections;
@property (nonatomic, readonly) _Bool hasElementTags;
@property (retain, nonatomic) HDCodableMedicalCodingList *elementTags;

+ (Class)collectionType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCollection:(id)arg1;
- (unsigned long long)collectionsCount;
- (void)clearCollections;
- (id)collectionAtIndex:(unsigned long long)arg1;

@end
