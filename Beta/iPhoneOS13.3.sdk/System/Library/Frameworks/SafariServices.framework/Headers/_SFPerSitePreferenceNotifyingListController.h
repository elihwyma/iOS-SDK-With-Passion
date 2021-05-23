/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Preferences/PSListController.h>

@interface _SFPerSitePreferenceNotifyingListController : PSListController

- (id)init;
- (void)dealloc;
- (void)_didUpdatePerSitePreferenceNotificationReceived:(id)arg1;
- (void)perSitePreferenceValueDidChange;
- (void)notifyPerSitePreferenceValueDidChange;

@end
