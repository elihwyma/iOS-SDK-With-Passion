/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOStructuredAddress, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAddress : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _formattedAddressType;
    struct {
        unsigned int has_formattedAddressType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_formattedAddressLines:1;
        unsigned int read_structuredAddress:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_formattedAddressLines:1;
        unsigned int wrote_structuredAddress:1;
        unsigned int wrote_formattedAddressType:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *formattedAddressLines;
@property (nonatomic, readonly) _Bool hasStructuredAddress;
@property (retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property (nonatomic) _Bool hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)addressDictionary;
- (id)postalAddress;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)formattedAddressTypeAsString:(int)arg1;
- (int)StringAsFormattedAddressType:(id)arg1;
- (void)_readFormattedAddressLines;
- (void)_addNoFlagsFormattedAddressLine:(id)arg1;
- (void)_readStructuredAddress;
- (unsigned long long)formattedAddressLinesCount;
- (void)clearFormattedAddressLines;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)urlRepresentation;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)bestName;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithPostalAddress:(id)arg1;

@end
