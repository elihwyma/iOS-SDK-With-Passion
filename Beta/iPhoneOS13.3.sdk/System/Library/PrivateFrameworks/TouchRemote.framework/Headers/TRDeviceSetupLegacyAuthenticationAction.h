/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRDeviceSetupConnectAction.h>

@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction

{
    NSString *_deviceGUID;
    NSString *_userAgent;
}

@property (retain, nonatomic) NSString *deviceGUID;
@property (retain, nonatomic) NSString *userAgent;

- (id)deviceName;
- (id)propertyListRepresentation;

@end
