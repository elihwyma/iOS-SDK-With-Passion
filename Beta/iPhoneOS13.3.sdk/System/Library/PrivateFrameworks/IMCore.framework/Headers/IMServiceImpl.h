/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMService.h>

@class IMAccount, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface IMServiceImpl : IMService

{
    NSString *_name;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSMutableDictionary *_cardMap;
    NSDictionary *_personToIDMap;
    NSString *_countryCode;
    IMAccount *_bestAccount;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    NSDictionary *_defaultSettings;
    NSData *_imageData;
    NSArray *_abProperties;
    NSArray *_emailDomains;
    NSArray *_siblingServiceNames;
    unsigned int _screenNameSensitivity;
    _Bool _hasLoadedServiceProperties;
    _Bool _handlesChatInvites;
    _Bool _supportsSMS;
    _Bool _supportsPhoneNumberMapping;
    _Bool _supportsGroupAttachments;
    _Bool _supportsMutatingGroupMembers;
    _Bool _supportsOneSessionForAllAccounts;
    _Bool _supportsAuthorization;
    _Bool _supportsRegistration;
    _Bool _supportsAdding;
    _Bool _supportsPresence;
    _Bool _supportsIDStatusLookup;
    _Bool _supportsDatabaseStorage;
    _Bool _supportsAudioMessages;
    _Bool _shouldInternationalizeNumbers;
    _Bool _supportsOfflineTransfers;
    _Bool _shouldDisableDeactivation;
    _Bool _ignoresNetworkConnectivity;
    _Bool _isPersistent;
    _Bool _isPlugInService;
    _Bool _allowsMultipleConnections;
}

@property (nonatomic, readonly) _Bool _wantsInternationizedNumbers;
@property (nonatomic, readonly) _Bool _supportsDatabaseStorage;
@property (retain, nonatomic) NSDictionary *serviceDefaults;
@property (nonatomic, readonly) NSArray *accountIDs;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic, readonly) NSDictionary *cardMap;
@property (nonatomic, readonly) _Bool handlesChatInvites;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *internalName;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (retain, nonatomic) NSDictionary *defaultAccountSettings;
@property (nonatomic, readonly) _Bool supportsAdding;
@property (nonatomic, readonly) _Bool supportsPresence;
@property (nonatomic, readonly) _Bool supportsGroupAttachments;
@property (nonatomic, readonly) _Bool supportsMutatingGroupMembers;
@property (nonatomic, readonly) _Bool supportsOneSessionForAllAccounts;
@property (nonatomic, readonly) _Bool supportsRegistration;
@property (nonatomic, readonly) _Bool supportsAuthorization;
@property (nonatomic, readonly) _Bool supportsPhoneNumberMapping;
@property (nonatomic, readonly) _Bool supportsIDStatusLookup;
@property (nonatomic, readonly) _Bool supportsOfflineTransfers;
@property (nonatomic, readonly) _Bool supportsAudioMessages;
@property (nonatomic, readonly) _Bool isPersistent;
@property (nonatomic, readonly) _Bool ignoresNetworkConnectivity;
@property (nonatomic, readonly) long long maxAttachmentSize;
@property (nonatomic, readonly) unsigned int IDSensitivity;
@property (nonatomic, readonly) _Bool shouldDisableDeactivation;
@property (nonatomic, readonly) _Bool isPlugInService;
@property (nonatomic, readonly, getter=isDiscontinued) _Bool discontinued;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic, readonly) NSArray *siblingServices;
@property (nonatomic, readonly) NSArray *emailDomains;
@property (nonatomic, readonly) _Bool allowsMultipleConnections;
@property (nonatomic, readonly) long long buddyNotesMaxByteLength;
@property (nonatomic, readonly) NSData *serviceImageData;
@property (nonatomic, readonly) Class accountClass;

+ (Class)serviceClass;
+ (void)setServiceClass:(Class)arg1;
+ (id)connectedServices;
+ (id)allServices;
+ (_Bool)smsEnabled;
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2;
+ (_Bool)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2;
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (_Bool)iMessageEnabled;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)serviceWithName:(id)arg1;
+ (id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1;
+ (_Bool)hasAlias:(id)arg1 onAccountForService:(id)arg2;
+ (_Bool)_isSIMIdIDSRegisteredSIM:(id)arg1;
+ (_Bool)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2;
+ (_Bool)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1;
+ (_Bool)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (_Bool)_readMMSUserOverride;
+ (id)activeServices;
+ (id)servicesWithCapability:(unsigned long long)arg1;
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;
+ (_Bool)mmsEnabled;
+ (id)supportedCountryCodes;
+ (_Bool)systemSupportsSMSSending;
+ (_Bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long *)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)localizedName;
- (id)localizedShortName;
- (unsigned long long)status;
- (void)disconnect;
- (_Bool)isEnabled;
- (long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2;
- (_Bool)initialSyncPerformed;
- (id)infoForScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)canonicalFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)myScreenNames;
- (void)activeAccountsChanged:(id)arg1;
- (void)_syncWithRemoteBuddies;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)clearIDToCardMap;
- (void)_calculateBestAccount;
- (void)_blockUntilInitialSyncPerformed;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_loadPropertiesIfNeeded;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int *)arg3;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int *)arg2;
- (void)doneSetup;
- (_Bool)equalID:(id)arg1 andID:(id)arg2;
- (id)normalizedFormOfID:(id)arg1;
- (long long)compareNames:(id)arg1;
- (id)subtypeInformationForAccount:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_dumpCardMap;
- (id)_newIDToCardMap;
- (void)updateIDToCardMapWithNotification:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2;
- (id)_personToIDMap;
- (id)screenNamesForIMPerson:(id)arg1;
- (void)defaultsChanged:(id)arg1;

@end
