/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitConnection : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entityNameString;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _muid;
    NSMutableArray *_transitLabels;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_entityNameString:1;
        unsigned int read_mapsId:1;
        unsigned int read_transitLabels:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_entityNameString:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_muid:1;
        unsigned int wrote_transitLabels:1;
    } _flags;
}

@property (nonatomic) _Bool hasMuid;
@property (nonatomic) unsigned long long muid;
@property (retain, nonatomic) NSMutableArray *transitLabels;
@property (nonatomic, readonly) _Bool hasEntityNameString;
@property (retain, nonatomic) NSString *entityNameString;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)transitLabelType;

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
- (void)_readMapsId;
- (void)_readTransitLabels;
- (void)_addNoFlagsTransitLabel:(id)arg1;
- (void)_readEntityNameString;
- (unsigned long long)transitLabelsCount;
- (void)clearTransitLabels;
- (id)transitLabelAtIndex:(unsigned long long)arg1;
- (void)addTransitLabel:(id)arg1;

@end
