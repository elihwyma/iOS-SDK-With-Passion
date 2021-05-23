/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBAdExposureOpportunity : PBCodable

{
    long long _adErrorCode;
    NSString *_adCreativeId;
    int _adCreativeType;
    NSString *_adOpportunityId;
    NSString *_adSlotId;
    int _adType;
    NSData *_articleViewingSessionId;
    int _durationInFeed;
    int _errorCode;
    NSString *_eventId;
    int _exposureLocationType;
    NSString *_exposureLocationTypeId;
    int _feedType;
    NSData *_feedViewExposureId;
    int _responseTime;
    int _screenfulsFromTop;
    _Bool _isExpanded;
    _Bool _isFilled;
    _Bool _isViewable;
    struct {
        unsigned int adErrorCode:1;
        unsigned int adCreativeType:1;
        unsigned int adType:1;
        unsigned int durationInFeed:1;
        unsigned int errorCode:1;
        unsigned int exposureLocationType:1;
        unsigned int feedType:1;
        unsigned int responseTime:1;
        unsigned int screenfulsFromTop:1;
        unsigned int isExpanded:1;
        unsigned int isFilled:1;
        unsigned int isViewable:1;
    } _has;
}

@property (nonatomic) _Bool hasIsExpanded;
@property (nonatomic) _Bool isExpanded;
@property (nonatomic) _Bool hasIsFilled;
@property (nonatomic) _Bool isFilled;
@property (nonatomic, readonly) _Bool hasAdSlotId;
@property (retain, nonatomic) NSString *adSlotId;
@property (nonatomic) _Bool hasDurationInFeed;
@property (nonatomic) int durationInFeed;
@property (nonatomic) _Bool hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) _Bool hasScreenfulsFromTop;
@property (nonatomic) int screenfulsFromTop;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) _Bool hasIsViewable;
@property (nonatomic) _Bool isViewable;
@property (nonatomic) _Bool hasExposureLocationType;
@property (nonatomic) int exposureLocationType;
@property (nonatomic) _Bool hasFeedType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) _Bool hasExposureLocationTypeId;
@property (retain, nonatomic) NSString *exposureLocationTypeId;
@property (nonatomic, readonly) _Bool hasAdCreativeId;
@property (retain, nonatomic) NSString *adCreativeId;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic, readonly) _Bool hasAdOpportunityId;
@property (retain, nonatomic) NSString *adOpportunityId;
@property (nonatomic, readonly) _Bool hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) _Bool hasAdErrorCode;
@property (nonatomic) long long adErrorCode;
@property (nonatomic) _Bool hasAdType;
@property (nonatomic) int adType;
@property (nonatomic) _Bool hasAdCreativeType;
@property (nonatomic) int adCreativeType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
- (int)StringAsFeedType:(id)arg1;
- (id)adTypeAsString:(int)arg1;
- (int)StringAsAdType:(id)arg1;
- (id)adCreativeTypeAsString:(int)arg1;
- (int)StringAsAdCreativeType:(id)arg1;

@end
