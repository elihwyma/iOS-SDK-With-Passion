/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPUserCredentials, NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSData *_devicePushToken;
    NSString *_preferredEmail;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_preferredEmail:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_preferredEmail:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (nonatomic, readonly) _Bool hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic, readonly) _Bool hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (nonatomic, readonly) _Bool hasPreferredEmail;
@property (retain, nonatomic) NSString *preferredEmail;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readUserCredentials;
- (void)_readDevicePushToken;
- (void)_readUserEmail;
- (void)_readPreferredEmail;

@end
