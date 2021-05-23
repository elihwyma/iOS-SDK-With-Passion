/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDChildActionDirections, GEOPDChildActionFlyover, GEOPDChildActionSearch, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildAction : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionSearch *_childActionSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _childActionType;
    struct {
        unsigned int has_childActionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_childActionDirections:1;
        unsigned int read_childActionFlyover:1;
        unsigned int read_childActionSearch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_childActionDirections:1;
        unsigned int wrote_childActionFlyover:1;
        unsigned int wrote_childActionSearch:1;
        unsigned int wrote_childActionType:1;
    } _flags;
}

@property (nonatomic) _Bool hasChildActionType;
@property (nonatomic) int childActionType;
@property (nonatomic, readonly) _Bool hasChildActionDirections;
@property (retain, nonatomic) GEOPDChildActionDirections *childActionDirections;
@property (nonatomic, readonly) _Bool hasChildActionFlyover;
@property (retain, nonatomic) GEOPDChildActionFlyover *childActionFlyover;
@property (nonatomic, readonly) _Bool hasChildActionSearch;
@property (retain, nonatomic) GEOPDChildActionSearch *childActionSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readChildActionDirections;
- (void)_readChildActionFlyover;
- (void)_readChildActionSearch;
- (id)childActionTypeAsString:(int)arg1;
- (int)StringAsChildActionType:(id)arg1;

@end
