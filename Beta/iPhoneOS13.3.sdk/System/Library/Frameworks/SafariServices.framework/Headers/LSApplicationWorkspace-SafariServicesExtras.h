/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <CoreServices/LSApplicationWorkspace.h>

@interface LSApplicationWorkspace (SafariServicesExtras)

- (void)_sf_openURL:(id)arg1 inApplication:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sf_openURL:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_sf_shouldOverrideiCloudSharingURL:(id)arg1 withAppRedirectURL:(id)arg2 referrerURL:(id)arg3 loadedUsingDesktopUserAgent:(_Bool)arg4;
- (void)_sf_tryOpeningURLInDefaultApp:(id)arg1 isContentManaged:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
