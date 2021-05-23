/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, AKDevice, NSSet;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage

{
    ACAccount *_account;
    NSSet *_targetedAccountServices;
    AKDevice *_companionDevice;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedAccountServices;
@property (retain, nonatomic) AKDevice *companionDevice;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
