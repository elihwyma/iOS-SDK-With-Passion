/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, SYMessageHeader;

@interface SYBatchSyncChunk : PBCodable

{
    unsigned int _chunkIndex;
    SYMessageHeader *_header;
    NSMutableArray *_objects;
    NSString *_syncID;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned int chunkIndex;
@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)objectsCount;
- (void)clearObjects;
- (void)addObjects:(id)arg1;
- (id)objectsAtIndex:(unsigned long long)arg1;

@end
