/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IXPlaceholderAttributes : NSObject <Swift>

{
    _Bool _launchProhibited;
    _Bool _watchOnlyApp;
    _Bool _runsIndependentlyOfCompanionApp;
    NSString *_bundleVersion;
    NSDictionary *_extensionDictionary;
    NSString *_minimumOSVersion;
    NSDictionary *_requiredDeviceCapabilities;
    NSArray *_sbAppTags;
    NSArray *_lsCounterpartIdentifiers;
    NSString *_sbIconMasqueradeIdentifier;
    NSString *_companionBundleIdentifierForWatchApp;
}

@property (nonatomic) _Bool launchProhibited;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSDictionary *extensionDictionary;
@property (copy, nonatomic) NSString *minimumOSVersion;
@property (copy, nonatomic) NSDictionary *requiredDeviceCapabilities;
@property (copy, nonatomic) NSArray *sbAppTags;
@property (copy, nonatomic) NSArray *lsCounterpartIdentifiers;
@property (copy, nonatomic) NSString *sbIconMasqueradeIdentifier;
@property (copy, nonatomic) NSString *companionBundleIdentifierForWatchApp;
@property (nonatomic) _Bool watchOnlyApp;
@property (nonatomic) _Bool runsIndependentlyOfCompanionApp;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfoPlistFromBundle:(struct __CFBundle *)arg1 error:(id *)arg2;
- (id)_plistKeys;
- (id)initWithInfoPlistDictionary:(id)arg1;
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;
- (id)infoPlistContent;
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id *)arg2;

@end
