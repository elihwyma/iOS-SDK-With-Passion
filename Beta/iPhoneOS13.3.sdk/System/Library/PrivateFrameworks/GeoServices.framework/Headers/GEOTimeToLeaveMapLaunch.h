/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOTimeToLeaveMapLaunch : PBCodable

{
    double _minutesUntilEvent;
    struct {
        unsigned int has_minutesUntilEvent:1;
    } _flags;
}

@property (nonatomic) _Bool hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;

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

@end
