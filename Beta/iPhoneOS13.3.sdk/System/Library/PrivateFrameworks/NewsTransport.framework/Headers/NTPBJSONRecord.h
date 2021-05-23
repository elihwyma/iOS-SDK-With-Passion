/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NTPBRecordBase;

@interface NTPBJSONRecord : PBCodable

{
    NTPBRecordBase *_base;
    NSData *_json;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasJson;
@property (retain, nonatomic) NSData *json;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
