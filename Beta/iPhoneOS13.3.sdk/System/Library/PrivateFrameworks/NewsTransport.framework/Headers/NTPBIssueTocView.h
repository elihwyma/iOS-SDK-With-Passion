/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBIssueTocView : PBCodable

{
    NSString *_articleId;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    _Bool _adSupportedChannel;
    struct {
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic, readonly) _Bool hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (nonatomic, readonly) _Bool hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) _Bool hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (nonatomic, readonly) _Bool hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) _Bool hasAdSupportedChannel;
@property (nonatomic) _Bool adSupportedChannel;

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

@end
