/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBAnfComponentExposure : PBCodable

{
    long long _backendArticleVersionInt64;
    long long _publisherArticleVersionInt64;
    NSString *_anfComponentId;
    NSString *_anfComponentRole;
    NSString *_anfComponentType;
    NSString *_articleId;
    NSString *_articleVersion;
    NSData *_articleViewingSessionId;
    NSMutableArray *_fractionalCohortMemberships;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_metadata;
    NSString *_sourceChannelId;
    struct {
        unsigned int backendArticleVersionInt64:1;
        unsigned int publisherArticleVersionInt64:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic, readonly) _Bool hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic, readonly) _Bool hasAnfComponentType;
@property (retain, nonatomic) NSString *anfComponentType;
@property (nonatomic, readonly) _Bool hasAnfComponentId;
@property (retain, nonatomic) NSString *anfComponentId;
@property (nonatomic, readonly) _Bool hasAnfComponentRole;
@property (retain, nonatomic) NSString *anfComponentRole;
@property (nonatomic, readonly) _Bool hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (nonatomic, readonly) _Bool hasArticleVersion;
@property (retain, nonatomic) NSString *articleVersion;
@property (nonatomic) _Bool hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) _Bool hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic, readonly) _Bool hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (nonatomic, readonly) _Bool hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (nonatomic, readonly) _Bool hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (nonatomic, readonly) _Bool hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;

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
