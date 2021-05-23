/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TVRViewServiceConfigContext : NSObject

{
    NSString *_deviceIdentifier;
    long long _deviceIdentifierType;
    long long _deviceType;
    long long _launchContext;
    CDUnknownBlockType _presentationAnimations;
    CDUnknownBlockType _dismissalAnimations;
    unsigned long long _dismissalType;
    NSString *_lastActiveEndpointIdentifier;
}

@property (nonatomic) unsigned long long dismissalType;
@property (copy, nonatomic) NSString *lastActiveEndpointIdentifier;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) long long deviceIdentifierType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) long long launchContext;
@property (copy, nonatomic) CDUnknownBlockType presentationAnimations;
@property (copy, nonatomic) CDUnknownBlockType dismissalAnimations;

- (id)init;
- (id)description;
- (void)_commonInit;
- (id)initWithDeviceIdentifier:(id)arg1 identifierType:(long long)arg2 deviceType:(long long)arg3 launchContext:(long long)arg4;
- (id)_initWithLaunchContext:(long long)arg1;
- (id)_initWithUserInfo:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 type:(long long)arg2;

@end
