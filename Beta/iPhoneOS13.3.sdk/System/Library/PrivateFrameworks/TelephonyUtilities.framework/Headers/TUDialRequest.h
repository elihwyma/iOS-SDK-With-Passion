/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/Swift-Protocol.h>

@class BSProcessHandle, CNGeminiManager, IDSDestination, NSArray, NSDate, NSString, NSURL, NSUUID, NSUserActivity, TUCallProvider, TUCallProviderManager, TUHandle, TUSenderIdentity, TUSenderIdentityClient;

@interface TUDialRequest : NSObject <Swift>

{
    _Bool _video;
    _Bool _performDialAssist;
    _Bool _performLocalDialAssist;
    _Bool _dialAssisted;
    _Bool _showUIPrompt;
    _Bool _hostOnCurrentDevice;
    _Bool _endpointOnCurrentDevice;
    _Bool _sos;
    _Bool _redial;
    _Bool _shouldSuppressInCallUI;
    NSString *_uniqueProxyIdentifier;
    TUSenderIdentityClient *_senderIdentityClient;
    CNGeminiManager *_contactGeminiManager;
    TUCallProvider *_provider;
    long long _dialType;
    TUHandle *_handle;
    NSString *_contactIdentifier;
    NSString *_providerCustomIdentifier;
    NSString *_audioSourceIdentifier;
    long long _ttyType;
    TUCallProviderManager *_providerManager;
    CDUnknownBlockType _isEmergencyNumberBlock;
    CDUnknownBlockType _isEmergencyNumberOrIsWhitelistedBlock;
    NSDate *_dateDialed;
    NSString *_endpointIDSDestinationURI;
    NSString *_endpointRapportMediaSystemIdentifier;
    NSString *_endpointRapportEffectiveIdentifier;
    NSUUID *_localSenderIdentityUUID;
    NSUUID *_localSenderIdentityAccountUUID;
    long long _originatingUIType;
    NSString *_successNotification;
    NSString *_failureNotification;
    BSProcessHandle *_processHandle;
    struct CGSize _localPortraitAspectRatio;
    struct CGSize _localLandscapeAspectRatio;
}

@property (nonatomic, readonly, getter=isRTTAvailable) _Bool rttAvailable;
@property (nonatomic, readonly, getter=isTTYAvailable) _Bool ttyAvailable;
@property (retain, nonatomic) TUCallProvider *provider;
@property (nonatomic, readonly) TUCallProviderManager *providerManager;
@property (retain, nonatomic) CNGeminiManager *contactGeminiManager;
@property (copy, nonatomic) CDUnknownBlockType isEmergencyNumberBlock;
@property (copy, nonatomic) CDUnknownBlockType isEmergencyNumberOrIsWhitelistedBlock;
@property (retain, nonatomic) NSDate *dateDialed;
@property (nonatomic, readonly) TUSenderIdentityClient *senderIdentityClient;
@property (nonatomic) _Bool hostOnCurrentDevice;
@property (nonatomic) _Bool endpointOnCurrentDevice;
@property (copy, nonatomic) NSString *endpointIDSDestinationURI;
@property (nonatomic, readonly) IDSDestination *endpointIDSDestination;
@property (copy, nonatomic) NSString *endpointRapportMediaSystemIdentifier;
@property (copy, nonatomic) NSString *endpointRapportEffectiveIdentifier;
@property (copy, nonatomic, readonly) TUSenderIdentity *localSenderIdentity;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic) long long originatingUIType;
@property (nonatomic, getter=isSOS, setter=setSOS:) _Bool sos;
@property (nonatomic, getter=isRedial) _Bool redial;
@property (nonatomic) _Bool shouldSuppressInCallUI;
@property (copy, nonatomic) NSString *successNotification;
@property (copy, nonatomic) NSString *failureNotification;
@property (retain, nonatomic) BSProcessHandle *processHandle;
@property (nonatomic, readonly) int service;
@property (nonatomic) long long dialType;
@property (copy, nonatomic) NSString *destinationID;
@property (retain, nonatomic) TUHandle *handle;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *providerCustomIdentifier;
@property (nonatomic, getter=isVideo) _Bool video;
@property (copy, nonatomic) NSString *audioSourceIdentifier;
@property (nonatomic) _Bool performDialAssist;
@property (nonatomic) _Bool performLocalDialAssist;
@property (nonatomic, getter=isDialAssisted) _Bool dialAssisted;
@property (nonatomic) long long ttyType;
@property (nonatomic, readonly) _Bool useTTY;
@property (nonatomic) _Bool showUIPrompt;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (copy, nonatomic, readonly) NSArray *validityErrors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *uniqueProxyIdentifier;
@property (nonatomic) struct CGSize localLandscapeAspectRatio;
@property (nonatomic) struct CGSize localPortraitAspectRatio;

+ (_Bool)supportsSecureCoding;
+ (id)contactStore;
+ (long long)dialRequestTTYTypeForCHRecentCallTTYType:(long long)arg1;
+ (CDUnknownBlockType)callProviderManagerGeneratorBlock;
+ (long long)ttyTypeForString:(id)arg1;
+ (long long)originatingUITypeForString:(id)arg1;
+ (long long)dialRequestTypeForIntentDestinationType:(long long)arg1;
+ (long long)ttyTypeForIntentTTYType:(long long)arg1;
+ (id)providerForIntentPreferredCallProvider:(long long)arg1 callCapability:(long long)arg2 providerManager:(id)arg3;
+ (id)stringForDialType:(long long)arg1;
+ (id)stringForTTYType:(long long)arg1;
+ (long long)handleTypeForQueryItem:(id)arg1;
+ (id)stringForOriginatingUIType:(long long)arg1;
+ (long long)intentTTYTypeForTTYType:(long long)arg1;
+ (void)setCallProviderManagerGeneratorBlock:(CDUnknownBlockType)arg1;
+ (void)setLegacyAddressBookIdentifierToContactIdentifierTransformBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)legacyAddressBookIdentifierToContactIdentifierTransformBlock;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)bundleIdentifier;
- (id)handles;
- (id)initWithProvider:(id)arg1;
- (id)initWithService:(int)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)shouldSuppressInCallUIQueryItem;
- (id)callProviderFromURLComponents:(id)arg1 video:(_Bool *)arg2;
- (id)handleFromURL:(id)arg1;
- (id)contactIdentifierFromURLComponents:(id)arg1;
- (int)legacyAddressBookIdentifierFromURLComponents:(id)arg1;
- (_Bool)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2;
- (id)initWithUserActivity:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (id)initWithDialIntent:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4;
- (id)_contactFromINPerson:(id)arg1 contactsDataSource:(id)arg2 bestGuessHandle:(id *)arg3;
- (id)destinationIDFromURL:(id)arg1;
- (id)legacyAddressBookIdentifierQueryItemName;
- (id)URLScheme;
- (id)URLHost;
- (id)URLQueryItems;
- (id)handleTypeURLQueryItem;
- (id)isVoicemailURLQueryItem;
- (id)providerCustomIdentifierURLQueryItem;
- (id)localSenderIdentityUUIDURLQueryItem;
- (id)localSenderIdentityAccountUUIDURLQueryItem;
- (id)contactIdentifierURLQueryItem;
- (id)audioSourceIdentifierURLQueryItem;
- (id)forceAssistURLQueryItem;
- (id)suppressAssistURLQueryItem;
- (id)dialAssistedURLQueryItem;
- (id)ttyTypeURLQueryItem;
- (id)originatingUIURLQueryItem;
- (id)noPromptURLQueryItem;
- (id)sosURLQueryItem;
- (id)redialURLQueryItem;
- (id)endpointIDSDestinationURIQueryItem;
- (id)endpointRapportMediaSystemIdentifierQueryItem;
- (id)endpointRapportEffectiveIdentifierQueryItem;
- (id)successNotificationQueryItem;
- (id)failureNotificationQueryItem;
- (id)userActivityUsingDeprecatedCallingIntents:(_Bool)arg1;
- (id)validityErrorForUnspecifiedProvider;
- (id)validityErrorForDestinationIDWithVoicemail;
- (id)validityErrorForNonNormalDialTypeWithoutTelephony;
- (id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
- (id)validityErrorForEmergencyCall;
- (id)validityErrorForVideoUnsupported;
- (id)validityErrorForNormalDialTypeWithUnknownDestination;
- (id)validityErrorForUnsupportedHandleType;
- (id)validityErrorForSOS;
- (_Bool)isEqualToDialRequest:(id)arg1;
- (id)dialRequestByReplacingProvider:(id)arg1;

@end
