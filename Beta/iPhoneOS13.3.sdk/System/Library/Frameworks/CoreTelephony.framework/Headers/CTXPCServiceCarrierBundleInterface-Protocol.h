/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceCarrierBundleInterface

- (unsigned short)setWiFiCallingSettingPreferences:key:value:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getWiFiCallingSettingPreferences:key:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleValue:key:bundleType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleValue:keyHierarchy:bundleType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleValueWithDefault:key:bundleType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleValueWithDefault:keyHierarchy:bundleType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleLocation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBookmarks:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyCarrierBundleVersion:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isAttachApnSettingAllowed:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:modifyAttachApnSettings:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:getAttachApnSettingsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyBundleVersion:bundleType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)copyBundleIdentifier:bundleType:completion: /* Error: Ran out of types for this method. */;

@end
