/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPClientCapabilities, GEORPDebugSettings, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackRequest : PBRequest

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABSecondPartyPlaceRequestClientMetaData *_abClientMetadata;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSMutableArray *_displayLanguages;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    GEORPFeedbackUserInfo *_userInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _feedbackRequestType;
    struct {
        unsigned int has_feedbackRequestType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_debugSettings:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_feedbackRequestParameters:1;
        unsigned int read_userInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_analyticMetadata:1;
        unsigned int wrote_clientCapabilities:1;
        unsigned int wrote_clientMetadata:1;
        unsigned int wrote_debugSettings:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_feedbackRequestParameters:1;
        unsigned int wrote_userInfo:1;
        unsigned int wrote_feedbackRequestType:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeedbackRequestType;
@property (nonatomic) int feedbackRequestType;
@property (nonatomic, readonly) _Bool hasFeedbackRequestParameters;
@property (retain, nonatomic) GEORPFeedbackRequestParameters *feedbackRequestParameters;
@property (nonatomic, readonly) _Bool hasUserInfo;
@property (retain, nonatomic) GEORPFeedbackUserInfo *userInfo;
@property (nonatomic, readonly) _Bool hasAnalyticMetadata;
@property (retain, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, readonly) _Bool hasClientMetadata;
@property (retain, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, readonly) _Bool hasClientCapabilities;
@property (retain, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (nonatomic, readonly) _Bool hasAbClientMetadata;
@property (retain, nonatomic) GEOABSecondPartyPlaceRequestClientMetaData *abClientMetadata;
@property (nonatomic, readonly) _Bool hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)displayLanguageType;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readClientCapabilities;
- (void)_readAbClientMetadata;
- (void)_readAnalyticMetadata;
- (void)_readClientMetadata;
- (void)_readDisplayLanguages;
- (void)_addNoFlagsDisplayLanguage:(id)arg1;
- (unsigned long long)displayLanguagesCount;
- (void)clearDisplayLanguages;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (void)addDisplayLanguage:(id)arg1;
- (id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (void)_readFeedbackRequestParameters;
- (void)_readUserInfo;
- (void)_readDebugSettings;
- (id)feedbackRequestTypeAsString:(int)arg1;
- (int)StringAsFeedbackRequestType:(id)arg1;
- (void)_initForSubmissionParameters;
- (void)setPreferredEmailAddress:(id)arg1;

@end
