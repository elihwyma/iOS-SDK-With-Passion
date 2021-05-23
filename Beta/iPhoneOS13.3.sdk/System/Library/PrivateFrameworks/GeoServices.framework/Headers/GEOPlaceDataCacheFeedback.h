/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequest, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataCacheFeedback : PBCodable

{
    PBDataReader *_reader;
    NSString *_bundleIdentifier;
    GEOPDPlaceRequest *_request;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_bundleIdentifier:1;
        unsigned int read_request:1;
        unsigned int wrote_bundleIdentifier:1;
        unsigned int wrote_request:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *request;
@property (nonatomic, readonly) _Bool hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

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
- (void)readAll:(_Bool)arg1;
- (void)_readRequest;
- (void)_readBundleIdentifier;

@end
