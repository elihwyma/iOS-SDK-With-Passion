/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBDataReader;

@interface GEORPUserCredentials : PBCodable

{
    PBDataReader *_reader;
    NSString *_icloudUserMapsAuthToken;
    NSString *_icloudUserPersonId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_icloudUserMapsAuthToken:1;
        unsigned int read_icloudUserPersonId:1;
        unsigned int wrote_icloudUserMapsAuthToken:1;
        unsigned int wrote_icloudUserPersonId:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasIcloudUserPersonId;
@property (retain, nonatomic) NSString *icloudUserPersonId;
@property (nonatomic, readonly) _Bool hasIcloudUserMapsAuthToken;
@property (retain, nonatomic) NSString *icloudUserMapsAuthToken;

+ (_Bool)isValid:(id)arg1;
+ (id)_credentialsForPrimaryICloudAccount;

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
- (void)_readIcloudUserPersonId;
- (void)_readIcloudUserMapsAuthToken;

@end
