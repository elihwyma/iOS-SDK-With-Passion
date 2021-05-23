/*
 Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, NSURL;

@interface CCSModuleMetadata : NSObject

{
    NSString *_moduleIdentifier;
    NSSet *_supportedDeviceFamilies;
    NSSet *_requiredDeviceCapabilities;
    NSString *_associatedBundleIdentifier;
    NSString *_associatedBundleMinimumVersion;
    unsigned long long _visibilityPreference;
    NSURL *_moduleBundleURL;
}

@property (copy, nonatomic, readonly) NSString *moduleIdentifier;
@property (copy, nonatomic, readonly) NSSet *supportedDeviceFamilies;
@property (copy, nonatomic, readonly) NSSet *requiredDeviceCapabilities;
@property (copy, nonatomic, readonly) NSString *associatedBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *associatedBundleMinimumVersion;
@property (nonatomic, readonly) unsigned long long visibilityPreference;
@property (copy, nonatomic, readonly) NSURL *moduleBundleURL;

+ (id)_supportedDeviceFamiliesForBundleInfoDictionary:(id)arg1;
+ (id)_requiredCapabilitiesForInfoDictionary:(id)arg1;
+ (id)metadataForBundleAtURL:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithModuleIdentifier:(id)arg1 supportedDeviceFamilies:(id)arg2 requiredDeviceCapabilities:(id)arg3 associatedBundleIdentifier:(id)arg4 associatedBundleMinimumVersion:(id)arg5 visibilityPreference:(unsigned long long)arg6 moduleBundleURL:(id)arg7;

@end
