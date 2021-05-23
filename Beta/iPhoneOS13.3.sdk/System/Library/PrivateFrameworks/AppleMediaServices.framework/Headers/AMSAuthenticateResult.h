/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSDictionary;

@interface AMSAuthenticateResult : NSObject

{
    ACAccount *_account;
    NSDictionary *_serverResponse;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *serverResponse;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end
