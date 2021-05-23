/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface NTPBWebAccessScreenView : PBCodable

{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_errorCode;
    NSString *_errorMessage;
    NSString *_iadQtoken;
    int _paidSubscriptionConversionPointType;
    int _parentFeedType;
    int _resultType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    int _webAccessScreenPresentationReason;
    _Bool _arrivedFromAd;
    _Bool _subscriptionOnlyArticlePreview;
    struct {
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int resultType:1;
        unsigned int userAction:1;
        unsigned int webAccessScreenPresentationReason:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic, readonly) _Bool hasErrorMessage;
@property (retain, nonatomic) NSString *errorMessage;
@property (nonatomic, readonly) _Bool hasErrorCode;
@property (retain, nonatomic) NSString *errorCode;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic, readonly) _Bool hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) _Bool hasSubscriptionOnlyArticlePreview;
@property (nonatomic) _Bool subscriptionOnlyArticlePreview;
@property (nonatomic) _Bool hasArrivedFromAd;
@property (nonatomic) _Bool arrivedFromAd;
@property (nonatomic, readonly) _Bool hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (nonatomic, readonly) _Bool hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (nonatomic) _Bool hasWebAccessScreenPresentationReason;
@property (nonatomic) int webAccessScreenPresentationReason;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;

@end
