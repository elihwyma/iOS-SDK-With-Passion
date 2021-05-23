/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject

{
    ACAccount *_account;
    long long _deviceType;
    long long _messageType;
}

@property (nonatomic) long long messageType;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long deviceType;

- (_Bool)matchesMessage:(id)arg1;

@end
