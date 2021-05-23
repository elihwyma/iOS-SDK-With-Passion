/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDModuleOptions, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModule : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_debugDescription;
    GEOPDModuleOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_debugDescription:1;
        unsigned int read_options:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_debugDescription:1;
        unsigned int wrote_options:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasOptions;
@property (retain, nonatomic) GEOPDModuleOptions *options;
@property (nonatomic, readonly) _Bool hasDebugDescription;
@property (retain, nonatomic) NSString *debugDescription;
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
- (void)_readOptions;
- (void)_readDebugDescription;

@end
