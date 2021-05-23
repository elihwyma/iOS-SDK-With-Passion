/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProvider/FPAppRegistry.h>

__attribute__((visibility("hidden")))
@interface FPDAppRegistry : FPAppRegistry

- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)addApps:(id)arg1;
- (id)removeAppsWithBundleIDs:(id)arg1;

@end
