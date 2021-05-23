/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSResourceProxy.h>

@class NSArray, NSDictionary, NSString, NSURL, NSUUID, _LSBundleIDValidationToken, _LSLazyPropertyList;

@interface LSBundleProxy : LSResourceProxy

{
    NSString *_localizedShortName;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned char _iconFlags;
    _Bool _foundBackingBundle;
    _Bool _containerized;
    _Bool _profileValidated;
    _Bool _UPPValidated;
    NSURL *_dataContainerURL;
    NSString *_bundleIdentifier;
    NSString *_bundleType;
    NSURL *_bundleURL;
    NSString *_bundleExecutable;
    NSURL *_bundleContainerURL;
    NSString *_bundleVersion;
    NSString *_sdkVersion;
    NSString *_signerIdentity;
    NSString *_signerOrganization;
    NSUUID *_cacheGUID;
    unsigned long long _sequenceNumber;
    NSArray *_machOUUIDs;
    unsigned long long _compatibilityState;
    _LSLazyPropertyList *__infoDictionary;
    _LSLazyPropertyList *__groupContainers;
    _LSLazyPropertyList *__entitlements;
    _LSLazyPropertyList *__environmentVariables;
    _LSBundleIDValidationToken *__validationToken;
}

@property (nonatomic, readonly) NSString *localizedShortName;
@property (copy, nonatomic, setter=_setInfoDictionary:) _LSLazyPropertyList *_infoDictionary;
@property (copy, nonatomic) NSArray *machOUUIDs;
@property (copy, nonatomic, setter=setSDKVersion:) NSString *sdkVersion;
@property (copy, nonatomic, setter=_setGroupContainers:) _LSLazyPropertyList *_groupContainers;
@property (copy, nonatomic, setter=_setEntitlements:) _LSLazyPropertyList *_entitlements;
@property (copy, nonatomic, setter=_setEnvironmentVariables:) _LSLazyPropertyList *_environmentVariables;
@property (retain, nonatomic, setter=_setValidationToken:) _LSBundleIDValidationToken *_validationToken;
@property (nonatomic, setter=_setCompatibilityState:) unsigned long long compatibilityState;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *canonicalExecutablePath;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) NSDictionary *groupContainerURLs;
@property (nonatomic, readonly) _Bool foundBackingBundle;
@property (nonatomic, readonly, getter=isContainerized) _Bool containerized;
@property (nonatomic, readonly) _Bool profileValidated;
@property (nonatomic, readonly) _Bool UPPValidated;
@property (nonatomic, readonly) NSString *signerOrganization;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic, readonly) unsigned long long sequenceNumber;

+ (_Bool)supportsSecureCoding;
+ (id)bundleProxyForCurrentProcess;
+ (id)bundleProxyForIdentifier:(id)arg1;
+ (_Bool)canInstantiateFromDatabase;
+ (id)bundleProxyForURL:(id)arg1 error:(id *)arg2;
+ (_Bool)bundleProxyForCurrentProcessNeedsUpdate:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;
+ (id)bundleProxyWithAuditToken:(CDStruct_4c969caf)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)uniqueIdentifier;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext *)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)_managedPersonas;
- (_Bool)_usesSystemPersona;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;
- (unsigned long long)_containerClassForLSBundleType:(id)arg1;
- (_Bool)_hasAssociatedPersonas;
- (_Bool)_shouldCallThroughToContainerManagerForPersona;
- (id)_dataContainerURLFromContainerManager;
- (id)appStoreReceiptName;
- (id)_environmentVariablesFromContainerManager;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)_groupContainerURLsFromContainerManager;
- (id)_valueForEqualityTesting;
- (id)entitlementValuesForKeys:(id)arg1;
- (id)objectsForInfoDictionaryKeys:(id)arg1;
- (id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;

@end
