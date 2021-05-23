/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDStorefrontPresentation, NSMutableArray, PBDataReader;

@interface GEOPDStorefrontBundle : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_faces;
    unsigned long long _identifier;
    unsigned long long _matchedMuid;
    GEOPDStorefrontPresentation *_presentation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_matchedMuid:1;
        unsigned int read_faces:1;
        unsigned int read_presentation:1;
        unsigned int wrote_faces:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_matchedMuid:1;
        unsigned int wrote_presentation:1;
    } _flags;
}

@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, readonly) _Bool hasPresentation;
@property (retain, nonatomic) GEOPDStorefrontPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *faces;
@property (nonatomic) _Bool hasMatchedMuid;
@property (nonatomic) unsigned long long matchedMuid;

+ (_Bool)isValid:(id)arg1;
+ (Class)faceType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readPresentation;
- (void)_readFaces;
- (void)_addNoFlagsFace:(id)arg1;
- (unsigned long long)facesCount;
- (void)clearFaces;
- (id)faceAtIndex:(unsigned long long)arg1;
- (void)addFace:(id)arg1;

@end
