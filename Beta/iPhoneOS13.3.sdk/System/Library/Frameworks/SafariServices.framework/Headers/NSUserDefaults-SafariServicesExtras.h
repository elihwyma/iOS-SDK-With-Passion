/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariServicesExtras)

+ (id)_sf_safariDefaults;

- (id)_sf_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_sf_dateForKey:(id)arg1;
- (void)_sf_registerSafariDefaults;
- (_Bool)_sf_javaScriptEnabled;
- (_Bool)_sf_javaScriptCanOpenWindowsAutomatically;
- (_Bool)_sf_warnAboutFraudulentWebsites;
- (_Bool)_sf_shouldAutomaticallyDownloadReadingListItems;
- (void)_sf_setShouldAutomaticallyDownloadReadingListItems:(_Bool)arg1;

@end
