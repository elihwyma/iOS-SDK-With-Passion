/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBColorGradient : PBCodable

{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _locations;
    double _endPointX;
    double _endPointY;
    double _startPointX;
    double _startPointY;
    NSMutableArray *_colors;
    struct {
        unsigned int endPointX:1;
        unsigned int endPointY:1;
        unsigned int startPointX:1;
        unsigned int startPointY:1;
    } _has;
}

@property (nonatomic) _Bool hasStartPointX;
@property (nonatomic) double startPointX;
@property (nonatomic) _Bool hasStartPointY;
@property (nonatomic) double startPointY;
@property (nonatomic) _Bool hasEndPointX;
@property (nonatomic) double endPointX;
@property (nonatomic) _Bool hasEndPointY;
@property (nonatomic) double endPointY;
@property (retain, nonatomic) NSMutableArray *colors;
@property (nonatomic, readonly) unsigned long long locationsCount;
@property (nonatomic, readonly) double *locations;

+ (Class)colorType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)colorsCount;
- (void)clearColors;
- (void)addLocation:(double)arg1;
- (void)clearLocations;
- (double)locationAtIndex:(unsigned long long)arg1;
- (void)addColor:(id)arg1;
- (id)colorAtIndex:(unsigned long long)arg1;
- (void)setLocations:(double *)arg1 count:(unsigned long long)arg2;

@end
