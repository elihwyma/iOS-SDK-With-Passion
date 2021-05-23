/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSBundleProxy.h>

@class LSExtensionPoint, NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface LSPlugInKitProxy : LSBundleProxy

{
    unsigned int _platform;
    _Bool _onSystemPartition;
    NSString *_signerOrganization;
    NSString *_pluginIdentifier;
    NSString *_originalIdentifier;
    NSString *_protocol;
    NSUUID *_pluginUUID;
    NSDate *_registrationDate;
    LSBundleProxy *_containingBundle;
}

@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly, getter=isOnSystemPartition) _Bool onSystemPartition;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) _Bool pluginCanProvideIcon;
@property (nonatomic, readonly) LSExtensionPoint *extensionPoint;

+ (_Bool)supportsSecureCoding;
+ (id)pluginKitProxyForUUID:(id)arg1;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id *)arg2;
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext *)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_managedPersonas;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (_Bool)_usesSystemPersona;
- (_Bool)profileValidated;
- (_Bool)UPPValidated;
- (id)signerOrganization;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;
- (id)_initWithPlugin:(unsigned int)arg1 andContext:(struct LSContext *)arg2;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (id)boundIconsDictionary;
- (id)_valueForEqualityTesting;

@end
