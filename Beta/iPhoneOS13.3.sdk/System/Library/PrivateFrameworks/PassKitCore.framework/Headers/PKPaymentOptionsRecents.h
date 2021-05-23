/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CNContact, CRRecentContactsLibrary, PKPaymentOptionsSynchronization;

@protocol NSObject;

@interface PKPaymentOptionsRecents : NSObject

{
    CNContact *_cachedMeContact;
    id <NSObject> _meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
    _Bool _meCardCachingEnabled;
    CRRecentContactsLibrary *_recentContactsLibrary;
}

@property (nonatomic, readonly) CNContact *meCard;
@property (nonatomic, getter=isMeCardCachingEnabled) _Bool meCardCachingEnabled;
@property (retain, nonatomic) CRRecentContactsLibrary *recentContactsLibrary;

+ (id)defaultInstance;
+ (id)_coreRecentsKindForPreference:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)deleteRecent:(id)arg1;
- (id)recentsForPreference:(id)arg1;
- (id)meCardEntriesForPreference:(id)arg1;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)_keychainDataForKey:(id)arg1;
- (id)postalAddressMetadataForContact:(id)arg1;
- (id)contactMetadataForContact:(id)arg1 preference:(id)arg2;
- (void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2;
- (void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_contactFromRecent:(id)arg1 preference:(id)arg2;
- (void)_coreRecentsContactsForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_contactsFromKeychainForPreference:(id)arg1;
- (void)_deleteRecentContactsFromKeychainForPreference:(id)arg1;
- (void)_deleteRecentContactFromKeychain:(id)arg1 forPreference:(id)arg2;
- (id)_postalAddressLabeledValueFromRecent:(id)arg1;
- (id)_defaultCRSearchQuery;
- (void)_deleteRecentContactsFromKeychainForContactKey:(id)arg1;
- (void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_labelsToPropertiesDictionaryForContact:(id)arg1;
- (id)_keychainKeyFromContactKey:(id)arg1;
- (id)saveContactToCoreRecents:(id)arg1 preference:(id)arg2;
- (void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
