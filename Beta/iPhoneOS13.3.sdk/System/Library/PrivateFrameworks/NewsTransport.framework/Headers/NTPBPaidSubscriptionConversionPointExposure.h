/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable

{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadQtoken;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointExposureLocation;
    int _paidSubscriptionConversionPointExposurePresentationReason;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_purchaseId;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    NSData *_subscriptionPurchaseSessionId;
    int _userAction;
    _Bool _arrivedFromAd;
    _Bool _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointExposureLocation:1;
        unsigned int paidSubscriptionConversionPointExposurePresentationReason:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int userAction:1;
        unsigned int arrivedFromAd:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property (nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointExposureLocation;
@property (nonatomic) int paidSubscriptionConversionPointExposureLocation;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointExposurePresentationReason;
@property (nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;
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
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) _Bool hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic, readonly) _Bool hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (nonatomic, readonly) _Bool hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
- (int)StringAsGroupType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1;
- (int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1;

@end
