/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOLocation, GEORPUserCredentials, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemCollectionRequest : PBRequest

{
    PBDataReader *_reader;
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_countryCode:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_hwMachine:1;
        unsigned int read_inputLanguage:1;
        unsigned int read_osRelease:1;
        unsigned int read_requestElements:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_countryCode:1;
        unsigned int wrote_devicePushToken:1;
        unsigned int wrote_hwMachine:1;
        unsigned int wrote_inputLanguage:1;
        unsigned int wrote_osRelease:1;
        unsigned int wrote_requestElements:1;
        unsigned int wrote_userCredentials:1;
        unsigned int wrote_userEmail:1;
        unsigned int wrote_userLocation:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *requestElements;
@property (nonatomic, readonly) _Bool hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (nonatomic, readonly) _Bool hasOsRelease;
@property (retain, nonatomic) NSString *osRelease;
@property (nonatomic, readonly) _Bool hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) _Bool hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (nonatomic, readonly) _Bool hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (nonatomic, readonly) _Bool hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (nonatomic, readonly) _Bool hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (nonatomic, readonly) _Bool hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;

+ (_Bool)isValid:(id)arg1;
+ (Class)requestElementType;

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
- (void)_readUserLocation;
- (unsigned long long)requestElementsCount;
- (void)clearRequestElements;
- (void)_readInputLanguage;
- (void)_readUserCredentials;
- (void)_readDevicePushToken;
- (void)_readUserEmail;
- (void)_readCountryCode;
- (void)_readHwMachine;
- (void)_readRequestElements;
- (void)_addNoFlagsRequestElement:(id)arg1;
- (void)_readOsRelease;
- (id)requestElementAtIndex:(unsigned long long)arg1;
- (void)addRequestElement:(id)arg1;

@end
