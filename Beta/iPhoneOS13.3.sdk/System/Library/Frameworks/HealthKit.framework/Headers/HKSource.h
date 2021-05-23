/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HKSource : NSObject <Swift>

{
    NSString *_name;
    NSString *_bundleIdentifier;
    _Bool _localDevice;
    NSString *_owningAppBundleIdentifier;
    NSNumber *_sourceID;
    NSString *_productType;
    unsigned long long _options;
}

@property (copy, nonatomic, getter=_owningAppBundleIdentifier, setter=_setOwningAppBundleIdentifier:) NSString *owningAppBundleIdentifier;
@property (retain, nonatomic, getter=_sourceID, setter=_setSourceID:) NSNumber *sourceID;
@property (nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) _Bool localDevice;
@property (copy, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType;
@property (nonatomic, getter=_options, setter=_setOptions:) unsigned long long options;
@property (readonly) NSString *name;
@property (readonly) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (id)_privateSourceForClinicalAccountIdentifier:(id)arg1 name:(id)arg2;
+ (id)_publicSourceForGatewayExternalIdentifier:(id)arg1 name:(id)arg2;
+ (id)_uncachedDefaultSource;
+ (id)_uncachedDefaultSourceWithEntitlements:(id)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(_Bool)arg3;
+ (_Bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (unsigned long long)_sourceOptionsForAppEntitlements:(id)arg1;
+ (id)_currentSourceProductType:(_Bool)arg1;
+ (id)_sourceNameWithRepresentsCurrentDevice:(_Bool)arg1 defaultSource:(_Bool)arg2;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)_researchStudiesDirectoryURL;
+ (id)defaultSource;
+ (id)_localDeviceSource;
+ (id)_connectedGymSource;
+ (id)_generateIdentifierForAppleDevice;
+ (_Bool)_isPlaceholderBundleIdentifier:(id)arg1;
+ (id)_sourceWithBundleIdentifier:(id)arg1 defaultBundleIdentifier:(id)arg2 appEntitlements:(id)arg3 name:(id)arg4;
+ (id)hd_getNameForSource:(id)arg1;
+ (id)hd_currentDeviceSourceName;
+ (_Bool)hd_isSpartanDeviceBundleIdentifier:(id)arg1;
+ (id)_studyNameForResearchStudySource:(id)arg1;
+ (id)_applicationNameForCompanionBundleIdentifier:(id)arg1;
+ (id)hd_sourceForClient:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (_Bool)_isApplication;
- (_Bool)_isHidden;
- (void)_setName:(id)arg1;
- (void)_setBundleIdentifier:(id)arg1;
- (_Bool)_requiresAuthorization;
- (_Bool)_isAppleWatch;
- (_Bool)_isPreferredSource;
- (_Bool)_isClinicalSource;
- (_Bool)_isResearchStudy;
- (id)_deducedClinicalAccountIdentifier;
- (id)_fetchBundleWithError:(id *)arg1;
- (_Bool)_isAppleDevice;
- (_Bool)_hasFirstPartyBundleID;
- (_Bool)_isConnectedGymSource;

@end
