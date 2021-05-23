/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest

{
    NSMutableArray *_wrappingKeyIds;
}

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addWrappingKeyIds:(id)arg1;
- (void)clearWrappingKeyIds;
- (unsigned long long)wrappingKeyIdsCount;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)arg1;

@end
