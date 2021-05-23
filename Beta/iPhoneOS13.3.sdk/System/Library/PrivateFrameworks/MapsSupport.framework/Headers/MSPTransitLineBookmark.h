/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class MSPTransitStorageLine, PBUnknownFields;

@interface MSPTransitLineBookmark : PBCodable

{
    PBUnknownFields *_unknownFields;
    MSPTransitStorageLine *_transitLineStorage;
}

@property (nonatomic, readonly) _Bool hasTransitLineStorage;
@property (retain, nonatomic) MSPTransitStorageLine *transitLineStorage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
