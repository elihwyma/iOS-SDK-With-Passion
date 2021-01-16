//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying>
{
    GEOMapRegion *_mapRegion;
    double _zoomLevel;
    int _mapType;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_mapType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsMapType:(id)arg1;
- (id)mapTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapType;
@property(nonatomic) int mapType;
@property(nonatomic) BOOL hasZoomLevel;
@property(nonatomic) double zoomLevel;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) BOOL hasMapRegion;

@end
