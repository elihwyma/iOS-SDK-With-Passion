/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFAccount.h>

@interface DeliveryAccount : MFAccount

+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountTypeIdentifier;
+ (id)newDefaultInstance;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)deliveryAccounts;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(_Bool)arg3;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (void)addDeliveryAccount:(id)arg1;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)carrierDeliveryAccount;

- (id)identifier;
- (void)setUsername:(id)arg1;
- (void)_setAccountProperties:(id)arg1;
- (_Bool)shouldUseAuthentication;
- (id)newDeliveryWithMessage:(id)arg1;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (Class)deliveryClass;
- (id)mailAccountIfAvailable;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (void)setShouldUseAuthentication:(_Bool)arg1;
- (unsigned long long)maximumMessageBytes;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (_Bool)hasNoReferences;
- (id)displayHostname;
- (_Bool)canBeFallbackAccount;
- (_Bool)hasEnoughInformationForEasySetup;
- (_Bool)supportsOutboxCopy;
- (_Bool)shouldUseSaveSentForAccount:(id)arg1;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

@end
