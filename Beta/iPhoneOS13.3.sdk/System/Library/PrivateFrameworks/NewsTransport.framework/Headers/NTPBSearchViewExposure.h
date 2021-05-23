/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBSearchViewExposure : PBCodable

{
    int _areaPresentationReason;
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    struct {
        unsigned int areaPresentationReason:1;
    } _has;
}

@property (nonatomic) _Bool hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)areaPresentationReasonAsString:(int)arg1;
- (int)StringAsAreaPresentationReason:(id)arg1;

@end
