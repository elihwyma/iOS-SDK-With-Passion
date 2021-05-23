/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

__attribute__((visibility("hidden")))
@interface CKDPLocation : PBCodable

{
    CKDPLocationBound *_bounds;
    CKDPLocationCoordinate *_coordinate;
}

@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate *coordinate;
@property (nonatomic, readonly) _Bool hasBounds;
@property (retain, nonatomic) CKDPLocationBound *bounds;

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
