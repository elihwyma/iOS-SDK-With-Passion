/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable

{
    PBDataReader *_reader;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _appDarkMode;
    struct {
        unsigned int has_appDarkMode:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int wrote_appIdentifier:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_appDarkMode:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (nonatomic, readonly) _Bool hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (nonatomic, readonly) _Bool hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic) _Bool hasAppDarkMode;
@property (nonatomic) _Bool appDarkMode;

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
- (void)_readAppMajorVersion;
- (void)_readAppMinorVersion;
- (void)_readAppIdentifier;

@end
