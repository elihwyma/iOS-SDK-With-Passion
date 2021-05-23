/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable

{
    int _destination;
    int _origin;
    int _purpose;
    _Bool _navStarted;
    struct {
        unsigned int has_destination:1;
        unsigned int has_origin:1;
        unsigned int has_purpose:1;
        unsigned int has_navStarted:1;
    } _flags;
}

@property (nonatomic) _Bool hasNavStarted;
@property (nonatomic) _Bool navStarted;
@property (nonatomic) _Bool hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) _Bool hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) _Bool hasDestination;
@property (nonatomic) int destination;

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
- (id)originAsString:(int)arg1;
- (int)StringAsOrigin:(id)arg1;
- (id)purposeAsString:(int)arg1;
- (int)StringAsPurpose:(id)arg1;
- (id)destinationAsString:(int)arg1;
- (int)StringAsDestination:(id)arg1;

@end
