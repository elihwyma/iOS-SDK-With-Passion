/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, AMSAuthenticateOptions, NSDictionary, NSString;

@interface AMSAuthenticateRequest : NSObject

{
    ACAccount *_account;
    NSString *_logKey;
    AMSAuthenticateOptions *_options;
    NSDictionary *_userInfo;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSAuthenticateOptions *options;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)initWithDSID:(id)arg1 altDSID:(id)arg2 username:(id)arg3 options:(id)arg4;

@end
