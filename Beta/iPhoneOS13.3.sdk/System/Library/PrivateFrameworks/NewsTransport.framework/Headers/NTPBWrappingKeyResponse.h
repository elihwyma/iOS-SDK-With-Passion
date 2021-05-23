/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable

{
    NSMutableArray *_wrappingKeyMapEntries;
}

@property (retain, nonatomic) NSMutableArray *wrappingKeyMapEntries;

+ (Class)wrappingKeyMapEntriesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addWrappingKeyMapEntries:(id)arg1;
- (void)clearWrappingKeyMapEntries;
- (unsigned long long)wrappingKeyMapEntriesCount;
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1;

@end
