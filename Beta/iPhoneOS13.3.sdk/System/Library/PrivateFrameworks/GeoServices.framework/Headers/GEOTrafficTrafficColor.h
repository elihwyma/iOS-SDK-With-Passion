/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTrafficPath;

__attribute__((visibility("hidden")))
@interface GEOTrafficTrafficColor : PBCodable

{
    GEOTrafficPath *_path;
    int _color;
    struct {
        unsigned int has_color:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPath;
@property (retain, nonatomic) GEOTrafficPath *path;
@property (nonatomic) _Bool hasColor;
@property (nonatomic) int color;

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
- (id)colorAsString:(int)arg1;
- (int)StringAsColor:(id)arg1;

@end
