/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSMutableArray, NSString, PBDataReader;

@interface GEORPSuggestionList : PBCodable

{
    PBDataReader *_reader;
    GEOPDPlaceRequest *_autocompleteRequest;
    GEOPDPlaceResponse *_autocompleteResponse;
    NSMutableArray *_entrys;
    NSString *_query;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_autocompleteRequest:1;
        unsigned int read_autocompleteResponse:1;
        unsigned int read_entrys:1;
        unsigned int read_query:1;
        unsigned int wrote_autocompleteRequest:1;
        unsigned int wrote_autocompleteResponse:1;
        unsigned int wrote_entrys:1;
        unsigned int wrote_query:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (nonatomic, readonly) _Bool hasAutocompleteRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *autocompleteRequest;
@property (nonatomic, readonly) _Bool hasAutocompleteResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *autocompleteResponse;

+ (Class)entryType;
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
- (void)addEntry:(id)arg1;
- (unsigned long long)entrysCount;
- (void)clearEntrys;
- (id)entryAtIndex:(unsigned long long)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readQuery;
- (void)_readEntrys;
- (void)_addNoFlagsEntry:(id)arg1;
- (void)_readAutocompleteRequest;
- (void)_readAutocompleteResponse;

@end
