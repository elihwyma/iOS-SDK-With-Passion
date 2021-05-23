/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, NSString, PBUnknownFields;

@interface MSPRegionBookmark : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_region;
    NSString *_title;
}

@property (nonatomic, readonly) _Bool hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
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
