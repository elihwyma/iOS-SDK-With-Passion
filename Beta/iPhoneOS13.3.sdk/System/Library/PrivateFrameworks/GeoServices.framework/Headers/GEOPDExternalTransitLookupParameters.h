/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalTransitLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transactionTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_externalTransitStationCodes:1;
        unsigned int read_sourceId:1;
        unsigned int read_transactionLocation:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_externalTransitStationCodes:1;
        unsigned int wrote_sourceId:1;
        unsigned int wrote_transactionLocation:1;
        unsigned int wrote_transactionTimestamp:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransactionTimestamp;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic, readonly) _Bool hasTransactionLocation;
@property (retain, nonatomic) GEOLocation *transactionLocation;
@property (nonatomic, readonly) _Bool hasSourceId;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSMutableArray *externalTransitStationCodes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)externalTransitStationCodeType;

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
- (void)clearSensitiveFields;
- (void)_readSourceId;
- (void)_readTransactionLocation;
- (void)_readExternalTransitStationCodes;
- (void)_addNoFlagsExternalTransitStationCode:(id)arg1;
- (unsigned long long)externalTransitStationCodesCount;
- (void)clearExternalTransitStationCodes;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (void)addExternalTransitStationCode:(id)arg1;

@end
