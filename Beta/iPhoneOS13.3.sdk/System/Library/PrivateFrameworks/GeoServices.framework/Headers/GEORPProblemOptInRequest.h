/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEORPUserCredentials, NSData, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEORPProblemOptInRequest : PBRequest

{
    PBDataReader *_reader;
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _didOptIn;
    struct {
        unsigned int has_didOptIn:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_problemId:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_problemId:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
        unsigned int wrote_didOptIn:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) _Bool hasDidOptIn;
@property (nonatomic) _Bool didOptIn;
@property (nonatomic, readonly) _Bool hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (nonatomic, readonly) _Bool hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic, readonly) _Bool hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;

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
- (void)_readUserCredentials;
- (void)_readDevicePushToken;
- (void)_readUserEmail;
- (void)_readProblemId;
- (id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3;

@end
