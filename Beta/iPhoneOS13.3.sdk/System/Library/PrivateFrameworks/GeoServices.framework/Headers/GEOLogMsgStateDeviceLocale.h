/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceLocale : PBCodable

{
    PBDataReader *_reader;
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    NSString *_deviceSettingsLocale;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_deviceInputLocale:1;
        unsigned int read_deviceOutputLocale:1;
        unsigned int read_deviceSettingsLocale:1;
        unsigned int wrote_deviceInputLocale:1;
        unsigned int wrote_deviceOutputLocale:1;
        unsigned int wrote_deviceSettingsLocale:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDeviceSettingsLocale;
@property (retain, nonatomic) NSString *deviceSettingsLocale;
@property (nonatomic, readonly) _Bool hasDeviceInputLocale;
@property (retain, nonatomic) NSString *deviceInputLocale;
@property (nonatomic, readonly) _Bool hasDeviceOutputLocale;
@property (retain, nonatomic) NSString *deviceOutputLocale;

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
- (void)_readDeviceSettingsLocale;
- (void)_readDeviceInputLocale;
- (void)_readDeviceOutputLocale;

@end
