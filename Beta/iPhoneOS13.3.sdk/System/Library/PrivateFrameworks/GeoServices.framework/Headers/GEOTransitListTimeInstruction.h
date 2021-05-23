/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitListTimeInstruction : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_primaryText;
    GEOFormattedString *_secondaryText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _hideWhenListCollapsed;
    struct {
        unsigned int has_hideWhenListCollapsed:1;
        unsigned int read_unknownFields:1;
        unsigned int read_primaryText:1;
        unsigned int read_secondaryText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_primaryText:1;
        unsigned int wrote_secondaryText:1;
        unsigned int wrote_hideWhenListCollapsed:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasPrimaryText;
@property (retain, nonatomic) GEOFormattedString *primaryText;
@property (nonatomic, readonly) _Bool hasSecondaryText;
@property (retain, nonatomic) GEOFormattedString *secondaryText;
@property (nonatomic) _Bool hasHideWhenListCollapsed;
@property (nonatomic) _Bool hideWhenListCollapsed;
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
- (void)_readPrimaryText;
- (void)_readSecondaryText;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

@end
