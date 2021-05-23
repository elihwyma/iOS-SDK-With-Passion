/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOCoverageExtent : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOCoverageException *_coverageExceptions;
    unsigned long long _coverageExceptionsCount;
    unsigned long long _coverageExceptionsSpace;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minX;
    unsigned int _minY;
    unsigned int _zoom;
    struct {
        unsigned int has_maxX:1;
        unsigned int has_maxY:1;
        unsigned int has_minX:1;
        unsigned int has_minY:1;
        unsigned int has_zoom:1;
    } _flags;
}

@property (nonatomic) _Bool hasMinX;
@property (nonatomic) unsigned int minX;
@property (nonatomic) _Bool hasMinY;
@property (nonatomic) unsigned int minY;
@property (nonatomic) _Bool hasMaxX;
@property (nonatomic) unsigned int maxX;
@property (nonatomic) _Bool hasMaxY;
@property (nonatomic) unsigned int maxY;
@property (nonatomic) _Bool hasZoom;
@property (nonatomic) unsigned int zoom;
@property (nonatomic, readonly) unsigned long long coverageExceptionsCount;
@property (nonatomic, readonly) struct GEOCoverageException *coverageExceptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearCoverageExceptions;
- (struct GEOCoverageException)coverageExceptionAtIndex:(unsigned long long)arg1;
- (void)addCoverageException:(struct GEOCoverageException)arg1;
- (void)setCoverageExceptions:(struct GEOCoverageException *)arg1 count:(unsigned long long)arg2;

@end
