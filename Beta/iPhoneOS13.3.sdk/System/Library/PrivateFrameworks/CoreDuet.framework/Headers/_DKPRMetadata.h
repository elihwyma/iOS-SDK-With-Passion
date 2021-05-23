/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _DKPRMetadata : PBCodable

{
    NSMutableArray *_entrys;
}

@property (retain, nonatomic) NSMutableArray *entrys;

+ (Class)entryType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEntry:(id)arg1;
- (unsigned long long)entrysCount;
- (void)clearEntrys;
- (id)entryAtIndex:(unsigned long long)arg1;

@end
