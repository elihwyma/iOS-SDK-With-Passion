/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackRequest : PBRequest

{
    struct GEOSessionID _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct {
        unsigned int has_sessionGUID:1;
        unsigned int has_businessID:1;
        unsigned int has_timestamp:1;
        unsigned int has_feedbackType:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_numberOfResults:1;
        unsigned int has_positionInResults:1;
        unsigned int has_sequenceNumber:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasSessionGUID;
@property (nonatomic) struct GEOSessionID sessionGUID;
@property (nonatomic) _Bool hasBusinessID;
@property (nonatomic) long long businessID;
@property (nonatomic) _Bool hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) _Bool hasNumberOfResults;
@property (nonatomic) int numberOfResults;
@property (nonatomic) _Bool hasPositionInResults;
@property (nonatomic) int positionInResults;
@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) int sequenceNumber;
@property (nonatomic) _Bool hasLocalSearchProviderID;
@property (nonatomic) int localSearchProviderID;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (id)feedbackTypeAsString:(int)arg1;
- (int)StringAsFeedbackType:(id)arg1;

@end
