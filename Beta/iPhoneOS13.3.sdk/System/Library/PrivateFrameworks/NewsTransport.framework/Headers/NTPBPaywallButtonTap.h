/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, NTPBIssueData;

@interface NTPBPaywallButtonTap : PBCodable

{
    NSString *_articleId;
    NSData *_articleViewingSessionId;
    int _groupType;
    NTPBIssueData *_issueData;
    int _paidSubscriptionConversionPointType;
    int _parentFeedType;
    NSString *_purchaseId;
    NSString *_sectionId;
    NSString *_sourceChannelId;
    int _subscriptionButtonTargetType;
    struct {
        unsigned int groupType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int subscriptionButtonTargetType:1;
    } _has;
}

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
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic, readonly) _Bool hasPurchaseId;
@property (retain, nonatomic) NSString *purchaseId;
@property (nonatomic) _Bool hasSubscriptionButtonTargetType;
@property (nonatomic) int subscriptionButtonTargetType;
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
- (id)subscriptionButtonTargetTypeAsString:(int)arg1;
- (int)StringAsSubscriptionButtonTargetType:(id)arg1;

@end
