/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject

{
    long long _securityMode;
    NSString *_password;
}

@property (nonatomic, readonly) long long securityMode;
@property (copy, nonatomic, readonly) NSString *password;

+ (void)getDeviceReceiverSettingsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getDeviceSenderSettingsForReceiverName:(id)arg1 securityMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;

- (id)description;
- (id)_init;

@end
