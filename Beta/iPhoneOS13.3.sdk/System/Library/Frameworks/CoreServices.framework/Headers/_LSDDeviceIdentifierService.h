/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDService.h>

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierService : _LSDService

+ (void)clearIdentifiersForUninstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
+ (void)generateIdentifiersForInstallationWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
+ (id)vendorNameForDeviceIdentifiersWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData *)arg3;
+ (unsigned short)connectionType;
+ (Class)clientClass;
+ (id)XPCInterface;

@end
