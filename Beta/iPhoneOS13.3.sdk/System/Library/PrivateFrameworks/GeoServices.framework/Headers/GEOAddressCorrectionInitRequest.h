/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSString, PBDataReader;

@interface GEOAddressCorrectionInitRequest : PBRequest

{
    PBDataReader *_reader;
    NSString *_personID;
    NSString *_token;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _supportsMultipleAddresses;
    struct {
        unsigned int has_supportsMultipleAddresses:1;
        unsigned int read_personID:1;
        unsigned int read_token:1;
        unsigned int wrote_personID:1;
        unsigned int wrote_token:1;
        unsigned int wrote_supportsMultipleAddresses:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic, readonly) _Bool hasPersonID;
@property (retain, nonatomic) NSString *personID;
@property (nonatomic) _Bool hasSupportsMultipleAddresses;
@property (nonatomic) _Bool supportsMultipleAddresses;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)_readToken;
- (void)_readPersonID;

@end
