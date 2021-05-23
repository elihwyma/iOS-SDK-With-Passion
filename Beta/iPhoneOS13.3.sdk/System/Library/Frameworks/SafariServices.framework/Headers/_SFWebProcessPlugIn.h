/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSWebProcessPlugIn.h>

@interface _SFWebProcessPlugIn : WBSWebProcessPlugIn

- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;
- (id)pageControllerWithBrowserContextController:(id)arg1;

@end
