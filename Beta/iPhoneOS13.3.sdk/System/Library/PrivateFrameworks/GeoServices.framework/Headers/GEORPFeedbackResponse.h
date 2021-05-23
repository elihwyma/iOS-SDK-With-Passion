/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPFeedbackResult, PBUnknownFields;

@interface GEORPFeedbackResponse : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEORPFeedbackResult *_feedbackResult;
    int _feedbackRequestType;
    int _status;
    struct {
        unsigned int has_feedbackRequestType:1;
        unsigned int has_status:1;
    } _flags;
}

@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasFeedbackRequestType;
@property (nonatomic) int feedbackRequestType;
@property (nonatomic, readonly) _Bool hasFeedbackResult;
@property (retain, nonatomic) GEORPFeedbackResult *feedbackResult;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)feedbackRequestTypeAsString:(int)arg1;
- (int)StringAsFeedbackRequestType:(id)arg1;

@end
