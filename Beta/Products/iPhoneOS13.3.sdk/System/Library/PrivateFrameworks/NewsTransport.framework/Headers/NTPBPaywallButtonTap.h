/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPaywallButtonTap : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    int  _groupType;
    struct { 
        unsigned int groupType : 1; 
        unsigned int paidSubscriptionConversionPointType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int subscriptionButtonTargetType : 1; 
    }  _has;
    NTPBIssueData * _issueData;
    int  _paidSubscriptionConversionPointType;
    int  _parentFeedType;
    NSString * _purchaseId;
    NSString * _sectionId;
    NSString * _sourceChannelId;
    int  _subscriptionButtonTargetType;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasIssueData;
@property (nonatomic) bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) bool hasParentFeedType;
@property (nonatomic, readonly) bool hasPurchaseId;
@property (nonatomic, readonly) bool hasSectionId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) bool hasSubscriptionButtonTargetType;
@property (nonatomic, retain) NTPBIssueData *issueData;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic) int parentFeedType;
@property (nonatomic, retain) NSString *purchaseId;
@property (nonatomic, retain) NSString *sectionId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic) int subscriptionButtonTargetType;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (int)StringAsSubscriptionButtonTargetType:(id)arg1;
- (id)articleId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasGroupType;
- (bool)hasIssueData;
- (bool)hasPaidSubscriptionConversionPointType;
- (bool)hasParentFeedType;
- (bool)hasPurchaseId;
- (bool)hasSectionId;
- (bool)hasSourceChannelId;
- (bool)hasSubscriptionButtonTargetType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueData;
- (void)mergeFrom:(id)arg1;
- (int)paidSubscriptionConversionPointType;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (id)purchaseId;
- (bool)readFrom:(id)arg1;
- (id)sectionId;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasPaidSubscriptionConversionPointType:(bool)arg1;
- (void)setHasParentFeedType:(bool)arg1;
- (void)setHasSubscriptionButtonTargetType:(bool)arg1;
- (void)setIssueData:(id)arg1;
- (void)setPaidSubscriptionConversionPointType:(int)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setPurchaseId:(id)arg1;
- (void)setSectionId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSubscriptionButtonTargetType:(int)arg1;
- (id)sourceChannelId;
- (int)subscriptionButtonTargetType;
- (id)subscriptionButtonTargetTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end