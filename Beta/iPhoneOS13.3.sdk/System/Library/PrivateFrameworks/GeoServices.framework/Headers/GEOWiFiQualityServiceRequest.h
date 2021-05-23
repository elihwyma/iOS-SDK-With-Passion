/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOPDClientMetadata, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityServiceRequest : PBRequest

{
    PBDataReader *_reader;
    GEOPDClientMetadata *_clientMetadata;
    NSMutableArray *_locationSearches;
    NSMutableArray *_networkSearches;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_clientMetadata:1;
        unsigned int read_locationSearches:1;
        unsigned int read_networkSearches:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_locationSearches:1;
        unsigned int wrote_networkSearches:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *locationSearches;
@property (retain, nonatomic) NSMutableArray *networkSearches;

+ (_Bool)isValid:(id)arg1;
+ (Class)locationSearchesType;
+ (Class)networkSearchesType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)_readClientMetadata;
- (void)addNetworkSearches:(id)arg1;
- (void)addLocationSearches:(id)arg1;
- (void)_readLocationSearches;
- (void)_addNoFlagsLocationSearches:(id)arg1;
- (void)_readNetworkSearches;
- (void)_addNoFlagsNetworkSearches:(id)arg1;
- (unsigned long long)locationSearchesCount;
- (void)clearLocationSearches;
- (id)locationSearchesAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkSearchesCount;
- (void)clearNetworkSearches;
- (id)networkSearchesAtIndex:(unsigned long long)arg1;

@end
