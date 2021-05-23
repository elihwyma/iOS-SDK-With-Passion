/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray, NSString, NTPBDeviceInfo;

@interface NTPBPushNotifySubscriptionRequest : PBRequest

{
    NTPBDeviceInfo *_deviceInfo;
    NSMutableArray *_notificationEntitys;
    NSString *_notificationUserId;
    NSString *_userStorefrontId;
}

@property (nonatomic, readonly) _Bool hasNotificationUserId;
@property (retain, nonatomic) NSString *notificationUserId;
@property (nonatomic, readonly) _Bool hasDeviceInfo;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSMutableArray *notificationEntitys;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;

+ (Class)notificationEntityType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addNotificationEntity:(id)arg1;
- (void)clearNotificationEntitys;
- (unsigned long long)notificationEntitysCount;
- (id)notificationEntityAtIndex:(unsigned long long)arg1;

@end
