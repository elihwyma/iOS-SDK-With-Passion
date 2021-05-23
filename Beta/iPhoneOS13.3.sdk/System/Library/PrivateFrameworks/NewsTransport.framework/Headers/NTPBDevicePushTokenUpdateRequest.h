/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString, NTPBDeviceInfo;

@interface NTPBDevicePushTokenUpdateRequest : PBRequest

{
    NTPBDeviceInfo *_deviceInfoToAdd;
    NTPBDeviceInfo *_deviceInfoToRemove;
    NSString *_notificationUserId;
    NSString *_userStorefrontId;
}

@property (nonatomic, readonly) _Bool hasNotificationUserId;
@property (retain, nonatomic) NSString *notificationUserId;
@property (nonatomic, readonly) _Bool hasDeviceInfoToAdd;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToAdd;
@property (nonatomic, readonly) _Bool hasDeviceInfoToRemove;
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToRemove;
@property (nonatomic, readonly) _Bool hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
