/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBPDFPageView : PBCodable

{
    CDStruct_95bda58d _pageIndices;
    NSString *_campaignId;
    NTPBChannelData *_channelData;
    int _groupType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_language;
    NSString *_notificationId;
    int _pageCount;
    int _paidSubscriberToFeedType;
    int _paidSubscriptionConversionPointType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_referringSourceApplication;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    _Bool _adSupportedChannel;
    _Bool _isFreeIssue;
    _Bool _isPaidSubscriberToSourceChannel;
    _Bool _viewFromNotificationDirectOpen;
    struct {
        unsigned int groupType:1;
        unsigned int pageCount:1;
        unsigned int paidSubscriberToFeedType:1;
        unsigned int paidSubscriptionConversionPointType:1;
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isFreeIssue:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int viewFromNotificationDirectOpen:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic, readonly) _Bool hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (nonatomic, readonly) _Bool hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (nonatomic, readonly) unsigned long long pageIndicesCount;
@property (nonatomic, readonly) int *pageIndices;
@property (nonatomic) _Bool hasPageCount;
@property (nonatomic) int pageCount;
@property (nonatomic) _Bool hasIsFreeIssue;
@property (nonatomic) _Bool isFreeIssue;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic, readonly) _Bool hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasAdSupportedChannel;
@property (nonatomic) _Bool adSupportedChannel;
@property (nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) _Bool isPaidSubscriberToSourceChannel;
@property (nonatomic) _Bool hasGroupType;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic) _Bool hasViewFromNotificationDirectOpen;
@property (nonatomic) _Bool viewFromNotificationDirectOpen;
@property (nonatomic, readonly) _Bool hasNotificationId;
@property (retain, nonatomic) NSString *notificationId;
@property (nonatomic, readonly) _Bool hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (nonatomic) _Bool hasPaidSubscriberToFeedType;
@property (nonatomic) int paidSubscriberToFeedType;
@property (nonatomic) _Bool hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (nonatomic, readonly) _Bool hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;

- (void)dealloc;
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
- (int)pageIndicesAtIndex:(unsigned long long)arg1;
- (void)addPageIndices:(int)arg1;
- (void)clearPageIndices;
- (void)setPageIndices:(int *)arg1 count:(unsigned long long)arg2;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (id)paidSubscriptionConversionPointTypeAsString:(int)arg1;
- (int)StringAsPaidSubscriptionConversionPointType:(id)arg1;

@end
