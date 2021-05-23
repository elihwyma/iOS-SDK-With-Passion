/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDClient.h>

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierClient : _LSDClient

- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (_Bool)hasUninstallEntitlement;
- (unsigned int)findAppBundleForExecutableURL:(id)arg1 withContext:(struct LSContext *)arg2;
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;

@end
