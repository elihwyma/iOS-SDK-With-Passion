/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEORPUserCredentials, GEOServicesState, NSMutableArray, NSString, PBDataReader;

@interface GEORPProblemStatusRequest : PBRequest

{
    PBDataReader *_reader;
    GEOABSecondPartyPlaceRequestClientMetaData *_abAssignmentMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    NSMutableArray *_problemIds;
    GEOServicesState *_servicesState;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_abAssignmentMetadata:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_problemIds:1;
        unsigned int read_servicesState:1;
        unsigned int read_statusNotificationId:1;
        unsigned int read_userCredentials:1;
        unsigned int wrote_abAssignmentMetadata:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_problemIds:1;
        unsigned int wrote_servicesState:1;
        unsigned int wrote_statusNotificationId:1;
        unsigned int wrote_userCredentials:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (nonatomic, readonly) _Bool hasStatusNotificationId;
@property (retain, nonatomic) NSString *statusNotificationId;
@property (retain, nonatomic) NSMutableArray *problemIds;
@property (nonatomic, readonly) _Bool hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, readonly) _Bool hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, readonly) _Bool hasAbAssignmentMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (nonatomic, readonly) _Bool hasServicesState;
@property (retain, nonatomic) GEOServicesState *servicesState;

+ (_Bool)isValid:(id)arg1;
+ (Class)problemIdType;

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
- (void)_readUserCredentials;
- (void)_readServicesState;
- (void)_readStatusNotificationId;
- (void)_readProblemIds;
- (void)_addNoFlagsProblemId:(id)arg1;
- (void)_readAbAssignmentMetadata;
- (unsigned long long)problemIdsCount;
- (void)clearProblemIds;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (void)addProblemId:(id)arg1;
- (void)populateAnalyticsMetadata;

@end
