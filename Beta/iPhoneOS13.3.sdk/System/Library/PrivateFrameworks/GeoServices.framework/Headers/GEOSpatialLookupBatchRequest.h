/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchRequest : PBRequest

{
    PBDataReader *_reader;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_requests;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_requests:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_requests:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *requests;
@property (nonatomic, readonly) _Bool hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (nonatomic, readonly) _Bool hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;

+ (Class)requestType;
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
- (void)clearRequests;
- (void)addRequest:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readDeviceCountryCode;
- (void)_readDeviceSku;
- (void)_readRequests;
- (void)_addNoFlagsRequest:(id)arg1;
- (unsigned long long)requestsCount;
- (id)requestAtIndex:(unsigned long long)arg1;

@end
