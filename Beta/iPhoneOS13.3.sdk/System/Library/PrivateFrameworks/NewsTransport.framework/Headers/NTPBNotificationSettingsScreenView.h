/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBNotificationSettingsScreenView : PBCodable

{
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_creativeId;
    int _notificationSettingsScreenViewPresentationReason;
    struct {
        unsigned int notificationSettingsScreenViewPresentationReason:1;
    } _has;
}

@property (nonatomic) _Bool hasNotificationSettingsScreenViewPresentationReason;
@property (nonatomic) int notificationSettingsScreenViewPresentationReason;
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

@end
