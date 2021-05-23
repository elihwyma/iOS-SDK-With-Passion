/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData;

@interface NTPBIssueExposure : PBCodable

{
    double _agedPersonalizationScore;
    double _agedUserFeedbackScore;
    double _autoSubscribeCtr;
    double _computedGlobalScoreCoefficient;
    double _diversifiedPersonalizationScore;
    double _featureCtr;
    double _globalScore;
    double _paidNonpaidSubscriptionCtr;
    double _personalizationScore;
    double _subscribedChannelCtr;
    double _userFeedbackScore;
    NTPBChannelData *_channelData;
    int _displayRank;
    NSMutableArray *_fractionalCohortMemberships;
    int _groupType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NSString *_language;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    _Bool _adSupportedChannel;
    _Bool _isPaidSubscriberToSourceChannel;
    CDStruct_2a523a1a _has;
}

@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic, readonly) _Bool hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (nonatomic, readonly) _Bool hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) _Bool hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic) _Bool hasDisplayRank;
@property (nonatomic) int displayRank;
@property (nonatomic) _Bool hasAdSupportedChannel;
@property (nonatomic) _Bool adSupportedChannel;
@property (nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) _Bool isPaidSubscriberToSourceChannel;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) _Bool hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) _Bool hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) _Bool hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) _Bool hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) _Bool hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) _Bool hasGlobalScore;
@property (nonatomic) double globalScore;
@property (nonatomic) _Bool hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic) _Bool hasAgedUserFeedbackScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) _Bool hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) _Bool hasDiversifiedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) _Bool hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;

+ (Class)fractionalCohortMembershipType;

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
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;

@end
