/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NPKProtoPassSyncState : PBCodable

{
    NSMutableArray *_passSyncStateItems;
}

@property (retain, nonatomic) NSMutableArray *passSyncStateItems;

+ (Class)passSyncStateItemsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPassSyncStateItems:(id)arg1;
- (unsigned long long)passSyncStateItemsCount;
- (void)clearPassSyncStateItems;
- (id)passSyncStateItemsAtIndex:(unsigned long long)arg1;

@end
