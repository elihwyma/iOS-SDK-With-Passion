/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPManifestURL : PBCodable

{
    PBDataReader *_reader;
    NSString *_urlName;
    NSString *_urlValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_urlName:1;
        unsigned int read_urlValue:1;
        unsigned int wrote_urlName:1;
        unsigned int wrote_urlValue:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUrlName;
@property (retain, nonatomic) NSString *urlName;
@property (nonatomic, readonly) _Bool hasUrlValue;
@property (retain, nonatomic) NSString *urlValue;

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
- (void)_readUrlName;
- (void)_readUrlValue;

@end
