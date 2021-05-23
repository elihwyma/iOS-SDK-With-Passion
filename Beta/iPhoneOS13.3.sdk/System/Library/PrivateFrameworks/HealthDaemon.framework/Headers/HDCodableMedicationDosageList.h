/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray;

@interface HDCodableMedicationDosageList : PBCodable <Swift>

{
    NSMutableArray *_items;
}

@property (retain, nonatomic) NSMutableArray *items;

+ (Class)itemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)arg1;

@end
