/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSGeolocationPreferenceManager.h>

@class UIWebGeolocationPolicyDecider;

@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager

{
    UIWebGeolocationPolicyDecider *_policyDecider;
}

+ (id)sharedManager;

- (void)requestPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_showDialogRequestingPermissionForURL:(id)arg1 frame:(id)arg2 dialogPresenter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
