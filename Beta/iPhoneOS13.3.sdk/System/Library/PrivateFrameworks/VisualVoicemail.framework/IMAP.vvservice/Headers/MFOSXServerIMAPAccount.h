/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class DeliveryAccount;

@interface MFOSXServerIMAPAccount

{
    DeliveryAccount *_deliveryAccount;
}

+ (id)accountTypeString;
+ (id)accountTypeIdentifier;
+ (id)displayedAccountTypeString;
+ (_Bool)primaryDeliveryAccountIsDynamic;
+ (id)newChildAccountWithParentAccount:(id)arg1 error:(id *)arg2;
+ (id)_authSchemeForAuthenticationMethod:(id)arg1;

- (void)setPassword:(id)arg1;
- (id)displayName;
- (id)_credentialCreateIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (_Bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:(_Bool)arg1;

@end
