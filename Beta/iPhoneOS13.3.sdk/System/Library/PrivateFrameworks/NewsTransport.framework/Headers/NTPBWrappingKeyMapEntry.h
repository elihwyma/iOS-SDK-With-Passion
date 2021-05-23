/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable

{
    NSData *_wrappingKey;
    NSData *_wrappingKeyId;
}

@property (nonatomic, readonly) _Bool hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKeyId;
@property (nonatomic, readonly) _Bool hasWrappingKey;
@property (retain, nonatomic) NSData *wrappingKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
