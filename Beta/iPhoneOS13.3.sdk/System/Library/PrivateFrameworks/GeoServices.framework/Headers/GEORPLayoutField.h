/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackLayoutFieldName, NSString, PBDataReader, PBUnknownFields;

@interface GEORPLayoutField : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayText;
    GEORPFeedbackLayoutFieldName *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _ordinal;
    int _type;
    _Bool _enabled;
    struct {
        unsigned int has_ordinal:1;
        unsigned int has_type:1;
        unsigned int has_enabled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayText:1;
        unsigned int read_name:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayText:1;
        unsigned int wrote_name:1;
        unsigned int wrote_ordinal:1;
        unsigned int wrote_type:1;
        unsigned int wrote_enabled:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) GEORPFeedbackLayoutFieldName *name;
@property (nonatomic, readonly) _Bool hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (nonatomic) _Bool hasEnabled;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool hasOrdinal;
@property (nonatomic) unsigned int ordinal;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readName;
- (void)_readDisplayText;

@end
