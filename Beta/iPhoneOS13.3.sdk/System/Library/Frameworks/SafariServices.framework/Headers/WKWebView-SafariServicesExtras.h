/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebKit/WKWebView.h>

@class NSString, UIView, UIViewController, _SFSecurityInfo;

@interface WKWebView (SafariServicesExtras)

@property (nonatomic, readonly) UIView *_sf_effectiveViewToLayOut;
@property (retain, nonatomic, setter=_sf_setSecurityInfo:) _SFSecurityInfo *_sf_securityInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIViewController *webui_presentingViewController;
@property (nonatomic, readonly) _Bool webui_privateBrowsingEnabled;
@property (copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;

- (void)_sf_saveUnsubmittedGeneratedPasswordAndRemoveFormMetadata;
- (CDUnknownBlockType)webui_preventNavigationDuringAutoFillPrompt;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (void)_sf_applicationDidEnterBackgroundOrWillTerminate:(id)arg1;

@end
