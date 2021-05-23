/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCRegisterDeviceTokenCommand : FCCommand

{
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_storefrontID;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3;

@end
