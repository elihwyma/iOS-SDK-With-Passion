/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, NSString, PBDataReader;

@interface GEOAddressCorrectionInitResponse : PBCodable

{
    PBDataReader *_reader;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    NSMutableArray *_address;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int has_numberOfVisitsBucketSize:1;
        unsigned int has_statusCode:1;
        unsigned int read_addressID:1;
        unsigned int read_addressLocation:1;
        unsigned int read_address:1;
        unsigned int wrote_addressID:1;
        unsigned int wrote_addressLocation:1;
        unsigned int wrote_address:1;
        unsigned int wrote_numberOfVisitsBucketSize:1;
        unsigned int wrote_statusCode:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) _Bool hasAddressLocation;
@property (retain, nonatomic) GEOLocation *addressLocation;
@property (nonatomic, readonly) _Bool hasAddressID;
@property (retain, nonatomic) NSString *addressID;
@property (nonatomic) _Bool hasNumberOfVisitsBucketSize;
@property (nonatomic) unsigned int numberOfVisitsBucketSize;
@property (retain, nonatomic) NSMutableArray *address;

+ (_Bool)isValid:(id)arg1;
+ (Class)addressType;

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
- (void)clearSensitiveFields;
- (void)_readAddress;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (void)_readAddressID;
- (void)_readAddressLocation;
- (void)_addNoFlagsAddress:(id)arg1;
- (unsigned long long)addressCount;
- (void)clearAddress;
- (id)addressAtIndex:(unsigned long long)arg1;
- (void)addAddress:(id)arg1;

@end
