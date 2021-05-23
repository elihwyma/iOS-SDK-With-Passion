/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceConnection : PBCodable

{
    PBDataReader *_reader;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _cellularDataState;
    int _deviceNetworkConnectivity;
    struct {
        unsigned int has_cellularDataState:1;
        unsigned int has_deviceNetworkConnectivity:1;
        unsigned int read_deviceCarrierName:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int wrote_deviceCarrierName:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_cellularDataState:1;
        unsigned int wrote_deviceNetworkConnectivity:1;
    } _flags;
}

@property (nonatomic) _Bool hasDeviceNetworkConnectivity;
@property (nonatomic) int deviceNetworkConnectivity;
@property (nonatomic, readonly) _Bool hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (nonatomic, readonly) _Bool hasDeviceCarrierName;
@property (retain, nonatomic) NSString *deviceCarrierName;
@property (nonatomic) _Bool hasCellularDataState;
@property (nonatomic) int cellularDataState;

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
- (void)_readDeviceCountryCode;
- (void)_readDeviceCarrierName;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (id)cellularDataStateAsString:(int)arg1;
- (int)StringAsCellularDataState:(id)arg1;

@end
