/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSBeginPairingMessage : PBCodable

{
    NSString *_appName;
    NSString *_deviceModel;
    NSString *_deviceName;
    NSString *_passcode;
}

@property (nonatomic, readonly) _Bool hasAppName;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic, readonly) _Bool hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic, readonly) _Bool hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic, readonly) _Bool hasPasscode;
@property (retain, nonatomic) NSString *passcode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
