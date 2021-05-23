/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPClientCapabilities, GEORPProblem, GEORPUserCredentials, NSData, NSString, PBDataReader;

@interface GEORPProblemRequest : PBRequest

{
    PBDataReader *_reader;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    NSString *_problemUuid;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _debugUserType;
    struct {
        unsigned int has_debugUserType:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_inputLanguage:1;
        unsigned int read_problemUuid:1;
        unsigned int read_problem:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_inputLanguage:1;
        unsigned int wrote_problemUuid:1;
        unsigned int wrote_problem:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
        unsigned int wrote_debugUserType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasProblem;
@property (retain, nonatomic) GEORPProblem *problem;
@property (nonatomic, readonly) _Bool hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (nonatomic, readonly) _Bool hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, readonly) _Bool hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readonly) _Bool hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic, readonly) _Bool hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (nonatomic, readonly) _Bool hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (nonatomic, readonly) _Bool hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, readonly) _Bool hasProblemUuid;
@property (retain, nonatomic) NSString *problemUuid;
@property (nonatomic) _Bool hasDebugUserType;
@property (nonatomic) int debugUserType;

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
- (void)_readClientCapabilities;
- (void)_readAnalyticMetadata;
- (void)_readClientMetadata;
- (void)_readInputLanguage;
- (id)initWithProblem:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (void)_readUserCredentials;
- (void)_readDevicePushToken;
- (void)_readUserEmail;
- (void)_readProblem;
- (void)_readProblemUuid;
- (id)debugUserTypeAsString:(int)arg1;
- (int)StringAsDebugUserType:(id)arg1;

@end
