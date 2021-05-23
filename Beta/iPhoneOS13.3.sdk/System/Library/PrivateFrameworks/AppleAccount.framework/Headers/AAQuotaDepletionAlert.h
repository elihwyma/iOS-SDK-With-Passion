/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface AAQuotaDepletionAlert : NSObject

{
    NSString *_dataclass;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
}

+ (_Bool)_isDisabledDataclass:(id)arg1;

- (id)init;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (id)_primaryAccount;
- (void)showWithHandler:(CDUnknownBlockType)arg1;
- (id)initForDataclass:(id)arg1;
- (_Bool)showIfNecessaryWithHandler:(CDUnknownBlockType)arg1;

@end
