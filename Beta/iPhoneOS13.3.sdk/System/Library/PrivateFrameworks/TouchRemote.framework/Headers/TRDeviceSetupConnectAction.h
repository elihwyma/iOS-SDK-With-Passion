/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (copy, nonatomic, readonly) NSString *deviceName;
@property (copy, nonatomic, readonly) NSString *networkSSID;
@property (copy, nonatomic, readonly) NSString *networkPassword;

- (id)init;
- (id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3;

@end
