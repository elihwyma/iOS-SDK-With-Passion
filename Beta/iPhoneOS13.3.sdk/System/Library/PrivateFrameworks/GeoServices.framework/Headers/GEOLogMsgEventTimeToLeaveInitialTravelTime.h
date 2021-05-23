/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable

{
    int _travelTime;
    CDStruct_b5054928 _flags;
}

@property (nonatomic) _Bool hasTravelTime;
@property (nonatomic) int travelTime;

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
- (id)travelTimeAsString:(int)arg1;
- (int)StringAsTravelTime:(id)arg1;

@end
