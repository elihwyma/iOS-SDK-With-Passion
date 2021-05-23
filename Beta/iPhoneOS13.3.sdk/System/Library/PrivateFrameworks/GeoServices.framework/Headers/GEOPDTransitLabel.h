/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPBTransitArtwork, NSString, PBDataReader, PBUnknownFields;

@protocol GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface GEOPDTransitLabel : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _labelType;
    struct {
        unsigned int has_labelType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelArtwork:1;
        unsigned int read_labelTextString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labelArtwork:1;
        unsigned int wrote_labelTextString:1;
        unsigned int wrote_labelType:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) id <GEOTransitArtworkDataSource> labelArtwork;
@property (nonatomic) _Bool hasLabelType;
@property (nonatomic) int labelType;
@property (nonatomic, readonly) _Bool hasLabelTextString;
@property (retain, nonatomic) NSString *labelTextString;
@property (nonatomic, readonly) _Bool hasLabelArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *labelArtwork;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)labelTypeAsString:(int)arg1;
- (int)StringAsLabelType:(id)arg1;
- (void)_readLabelTextString;
- (void)_readLabelArtwork;

@end
