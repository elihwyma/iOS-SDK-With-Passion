//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

@interface NTPBColorGradient : PBCodable <NSCopying>
{
    struct {
        double list;
        NSUInteger count;
        NSUInteger size;
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

+ (Class)colorType;
@property(retain, nonatomic) NSMutableArray *colors; // @synthesize colors=_colors;
@property(nonatomic) double endPointY; // @synthesize endPointY=_endPointY;
@property(nonatomic) double endPointX; // @synthesize endPointX=_endPointX;
@property(nonatomic) double startPointY; // @synthesize startPointY=_startPointY;
@property(nonatomic) double startPointX; // @synthesize startPointX=_startPointX;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setLocations:(double )arg1 count:(NSUInteger)arg2;
- (double)locationAtIndex:(NSUInteger)arg1;
- (void)addLocation:(double)arg1;
- (void)clearLocations;
@property(readonly, nonatomic) double locations;
@property(readonly, nonatomic) NSUInteger locationsCount;
- (id)colorAtIndex:(NSUInteger)arg1;
- (NSUInteger)colorsCount;
- (void)addColor:(id)arg1;
- (void)clearColors;
@property(nonatomic) BOOL hasEndPointY;
@property(nonatomic) BOOL hasEndPointX;
@property(nonatomic) BOOL hasStartPointY;
@property(nonatomic) BOOL hasStartPointX;
- (void)dealloc;

@end

