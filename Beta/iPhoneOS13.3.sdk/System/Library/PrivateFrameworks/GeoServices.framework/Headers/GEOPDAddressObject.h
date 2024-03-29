/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObject : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSData *_addressObject;
}

@property (nonatomic, readonly) _Bool hasAddressObject;
@property (retain, nonatomic) NSData *addressObject;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
