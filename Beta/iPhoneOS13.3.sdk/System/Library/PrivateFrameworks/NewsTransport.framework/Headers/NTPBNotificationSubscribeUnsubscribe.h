/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable

{
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_channelId;
    NSString *_creativeId;
    int _notificationSettingType;
    int _notificationSubscribeUnsubscribeLocation;
    int _userAction;
    _Bool _isPaidUserOfChannel;
    struct {
        unsigned int notificationSettingType:1;
        unsigned int notificationSubscribeUnsubscribeLocation:1;
        unsigned int userAction:1;
        unsigned int isPaidUserOfChannel:1;
    } _has;
}

@property (nonatomic) _Bool hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) _Bool hasNotificationSubscribeUnsubscribeLocation;
@property (nonatomic) int notificationSubscribeUnsubscribeLocation;
@property (nonatomic, readonly) _Bool hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) _Bool hasIsPaidUserOfChannel;
@property (nonatomic) _Bool isPaidUserOfChannel;
@property (nonatomic, readonly) _Bool hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic, readonly) _Bool hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (nonatomic, readonly) _Bool hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) _Bool hasNotificationSettingType;
@property (nonatomic) int notificationSettingType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
