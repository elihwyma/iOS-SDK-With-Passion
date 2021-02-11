/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetInfo : PBCodable <NSCopying> {
    unsigned int  _count;
    struct { 
        unsigned int has_count : 1; 
        unsigned int has_style : 1; 
        unsigned int has_zoom : 1; 
    }  _flags;
    int  _style;
    unsigned int  _zoom;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasStyle;
@property (nonatomic) bool hasZoom;
@property (nonatomic) int style;
@property (nonatomic) unsigned int zoom;

+ (bool)isValid:(id)arg1;

- (int)StringAsStyle:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasStyle;
- (bool)hasZoom;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasZoom:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setZoom:(unsigned int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (unsigned int)zoom;

@end