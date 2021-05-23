/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CNContact, NSDictionary, NSString, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsDefaults : NSObject

{
    int _defaultsChangedNotifyToken;
    unsigned long long _postedNotificationCount;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
    NSDictionary *_defaultBillingAddresses;
    CNContact *_defaultShippingAddress;
    CNContact *_defaultContactName;
    CNContact *_defaultContactEmail;
    CNContact *_defaultContactPhone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) CNContact *defaultShippingAddress;
@property (nonatomic, readonly) NSDictionary *defaultBillingAddresses;
@property (retain, nonatomic) CNContact *defaultContactEmail;
@property (retain, nonatomic) CNContact *defaultContactPhone;
@property (retain, nonatomic) CNContact *defaultContactName;

+ (id)defaults;

- (id)init;
- (void)dealloc;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (void)optionsSynchronizationDidChangeTo:(_Bool)arg1;
- (void)_registerForChangeNotifications;
- (void)_unregisterForChangeNotifications;
- (void)_deleteKeychainDataForKey:(id)arg1 localOnly:(_Bool)arg2;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)_keychainDataForKey:(id)arg1;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)deleteDefaultShippingAddress;
- (void)_deleteKeychainDataForKey:(id)arg1;
- (id)_rawDefaultBillingAddresses;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPrimaryAccountIdentifier:(id)arg2;
- (void)updateLastUpdatedDate:(id)arg1 forPrimaryAccountIdentifier:(id)arg2;
- (id)_lastUpdatedDatesForBillingAddresses;
- (void)deleteDefaultContactEmail;
- (void)deleteDefaultContactPhone;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)deleteDefaultContactName;
- (void)_hardDeleteDefaultBillingAddress;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;
- (void)_setRawDefaultBillingAddresses:(id)arg1;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)arg1;
- (id)lastUpdatedDateForPrimaryAccountIdentifier:(id)arg1;
- (void)deleteAllDefaults;
- (void)deleteAllLocalDefaults;
- (void)deleteDefaultForContactKey:(id)arg1;
- (void)migrateToSyncable;

@end
