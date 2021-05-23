/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSSet, NSString;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage

{
    ACAccount *_account;
    NSString *_rawPassword;
    NSSet *_targetedAccountServices;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *rawPassword;
@property (retain, nonatomic) NSSet *targetedAccountServices;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
