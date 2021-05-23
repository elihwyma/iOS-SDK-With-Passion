/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOPolyLocationShiftResponse : PBCodable

{
    CDStruct_82f37d05 _parameters;
    double _radius;
    int _status;
}

@property (nonatomic) int status;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (nonatomic, readonly) double *parameters;
@property (nonatomic) double radius;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearParameters;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (void)addParameters:(double)arg1;
- (void)setParameters:(double *)arg1 count:(unsigned long long)arg2;

@end
