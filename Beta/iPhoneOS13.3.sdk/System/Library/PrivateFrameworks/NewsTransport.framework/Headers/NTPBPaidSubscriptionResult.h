/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBIssueData;

@interface NTPBPaidSubscriptionResult : PBCodable

{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    NSString *_groupFeedId;
    int _groupType;
    NSString *_iadQtoken;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_purchaseId;
    int _resultType;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    int _storekitError;
    NSData *_subscriptionPurchaseSessionId;
    _Bool _arrivedFromAd;
    _Bool _sawSubscriptionSheet;
    _Bool _subscriptionOnlyArticlePreview;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int resultType:1;
        unsigned int storekitError:1;
        unsigned int arrivedFromAd:1;
        unsigned int sawSubscriptionSheet:1;
        unsigned int subscriptionOnlyArticlePreview:1;
    } _has;
}

@property (nonatomic) _Bool hasResultType;
@property (nonatomic) int resultType;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic, readonly) _Bool hasSectionId;
@property (retain, nonatomic) NSString *sectionId;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) _Bool hasSubscriptionOnlyArticlePreview;
@property (nonatomic) _Bool subscriptionOnlyArticlePreview;
@property (nonatomic) _Bool hasArrivedFromAd;
@property (nonatomic) _Bool arrivedFromAd;
@property (nonatomic, readonly) _Bool hasIadQtoken;
@property (retain, nonatomic) NSString *iadQtoken;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic, readonly) _Bool hasSubscriptionPurchaseSessionId;
@property (retain, nonatomic) NSData *subscriptionPurchaseSessionId;
@property (nonatomic) _Bool hasSawSubscriptionSheet;
@property (nonatomic) _Bool sawSubscriptionSheet;
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
@property (nonatomic) _Bool hasStorekitError;
@property (nonatomic) int storekitError;

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
- (id)storekitErrorAsString:(int)arg1;
- (int)StringAsStorekitError:(id)arg1;

@end
