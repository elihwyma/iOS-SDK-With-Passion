/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPGroundViewCorrections, GEORPGroundViewFeedbackContext, PBDataReader, PBUnknownFields;

@interface GEORPGroundViewFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPGroundViewFeedbackContext *_groundViewContext;
    GEORPGroundViewCorrections *_groundViewCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_groundViewContext:1;
        unsigned int read_groundViewCorrections:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_groundViewContext:1;
        unsigned int wrote_groundViewCorrections:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasGroundViewContext;
@property (retain, nonatomic) GEORPGroundViewFeedbackContext *groundViewContext;
@property (nonatomic, readonly) _Bool hasGroundViewCorrections;
@property (retain, nonatomic) GEORPGroundViewCorrections *groundViewCorrections;
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
- (void)_readGroundViewContext;
- (void)_readGroundViewCorrections;

@end
