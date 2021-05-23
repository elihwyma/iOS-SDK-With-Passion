/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBLRUCache : PBCodable

{
    NSMutableArray *_entries;
}

@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (void)addEntries:(id)arg1;

@end
