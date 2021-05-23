/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WBSCertificateWarningPageContext, _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@protocol WBSCertificateWarningPageHandler;

__attribute__((visibility("hidden")))
@interface SFWebProcessPlugInCertificateWarningController : NSObject

{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_certificateWarningPagePresenterInterface;
    WBSCertificateWarningPageContext *_warningPageContext;
    id <WBSCertificateWarningPageHandler> _certificateWarningPageHandlerProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void)openClockSettings;
- (void)prepareCertificateWarningPage:(id)arg1;
- (id)initWithPageController:(id)arg1;
- (void)injectCertificateWarningBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)_clearCertificateWarningPagePresenterInterface;
- (id)_certificateWarningPageHandlerProxy;
- (void)certificateWarningPageLoaded;
- (void)goBackSelected;

@end
