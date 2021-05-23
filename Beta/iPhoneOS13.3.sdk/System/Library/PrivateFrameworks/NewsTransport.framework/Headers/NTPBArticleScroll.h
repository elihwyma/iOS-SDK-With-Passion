/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBArticleScroll : PBCodable

{
    NTPBAlternateHeadline *_alternateHeadline;
    NSString *_articleId;
    NSData *_articleSessionId;
    NSData *_articleViewingSessionId;
    NSData *_feedViewExposureId;
    NSMutableArray *_fractionalCohortMemberships;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_referencedArticleId;
    int _scrollHostViewType;
    NSString *_scrollVelocity;
    float _scrollingVelocity;
    NSString *_sectionHeadlineId;
    NSString *_sourceChannelId;
    NSString *_verticalScrollPositionEnd;
    float _verticalScrollPositionEnding;
    NSString *_verticalScrollPositionStart;
    float _verticalScrollPositionStarting;
    _Bool _adSupportedChannel;
    struct {
        unsigned int scrollHostViewType:1;
        unsigned int scrollingVelocity:1;
        unsigned int verticalScrollPositionEnding:1;
        unsigned int verticalScrollPositionStarting:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic, readonly) _Bool hasArticleSessionId;
@property (retain, nonatomic) NSData *articleSessionId;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasScrollHostViewType;
@property (nonatomic) int scrollHostViewType;
@property (nonatomic, readonly) _Bool hasVerticalScrollPositionStart;
@property (retain, nonatomic) NSString *verticalScrollPositionStart;
@property (nonatomic, readonly) _Bool hasVerticalScrollPositionEnd;
@property (retain, nonatomic) NSString *verticalScrollPositionEnd;
@property (nonatomic, readonly) _Bool hasScrollVelocity;
@property (retain, nonatomic) NSString *scrollVelocity;
@property (nonatomic, readonly) _Bool hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) _Bool hasAdSupportedChannel;
@property (nonatomic) _Bool adSupportedChannel;
@property (nonatomic, readonly) _Bool hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) _Bool hasVerticalScrollPositionStarting;
@property (nonatomic) float verticalScrollPositionStarting;
@property (nonatomic) _Bool hasVerticalScrollPositionEnding;
@property (nonatomic) float verticalScrollPositionEnding;
@property (nonatomic) _Bool hasScrollingVelocity;
@property (nonatomic) float scrollingVelocity;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic, readonly) _Bool hasAlternateHeadline;
@property (retain, nonatomic) NTPBAlternateHeadline *alternateHeadline;
@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic, readonly) _Bool hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (nonatomic, readonly) _Bool hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;

+ (Class)fractionalCohortMembershipType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;

@end
