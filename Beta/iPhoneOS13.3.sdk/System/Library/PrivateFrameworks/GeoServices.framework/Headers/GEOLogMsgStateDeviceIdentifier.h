/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateDeviceIdentifier : PBCodable

{
    PBDataReader *_reader;
    NSString *_deviceHwIdentifier;
    NSString *_deviceOsVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _deviceDarkMode;
    _Bool _isInternalInstall;
    _Bool _isInternalTool;
    struct {
        unsigned int has_deviceDarkMode:1;
        unsigned int has_isInternalInstall:1;
        unsigned int has_isInternalTool:1;
        unsigned int read_deviceHwIdentifier:1;
        unsigned int read_deviceOsVersion:1;
        unsigned int wrote_deviceHwIdentifier:1;
        unsigned int wrote_deviceOsVersion:1;
        unsigned int wrote_deviceDarkMode:1;
        unsigned int wrote_isInternalInstall:1;
        unsigned int wrote_isInternalTool:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDeviceOsVersion;
@property (retain, nonatomic) NSString *deviceOsVersion;
@property (nonatomic, readonly) _Bool hasDeviceHwIdentifier;
@property (retain, nonatomic) NSString *deviceHwIdentifier;
@property (nonatomic) _Bool hasIsInternalTool;
@property (nonatomic) _Bool isInternalTool;
@property (nonatomic) _Bool hasIsInternalInstall;
@property (nonatomic) _Bool isInternalInstall;
@property (nonatomic) _Bool hasDeviceDarkMode;
@property (nonatomic) _Bool deviceDarkMode;

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
- (void)_readDeviceOsVersion;
- (void)_readDeviceHwIdentifier;

@end
