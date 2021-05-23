/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@protocol EDAccountFactory;

@interface EMAccountAuthentication : NSObject

{
    id <EDAccountFactory> _accountFactory;
}

@property (nonatomic, readonly) id <EDAccountFactory> accountFactory;

+ (id)log;

- (_Bool)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)arg1;
- (_Bool)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)arg1;
- (_Bool)_shouldAutoUpdateDeliveryAccount:(id)arg1 forChangedReceivingAccount:(id)arg2;
- (_Bool)_hostnamesHaveSameTopLevelDomain:(id)arg1 deliveryAccount:(id)arg2;
- (id)initWithAccountFactory:(id)arg1;
- (_Bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)arg1;
- (_Bool)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)arg1;

@end
