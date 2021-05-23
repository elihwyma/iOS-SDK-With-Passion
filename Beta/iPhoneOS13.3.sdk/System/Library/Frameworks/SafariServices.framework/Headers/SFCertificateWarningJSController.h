/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class SFWebProcessPlugInCertificateWarningController;

__attribute__((visibility("hidden")))
@interface SFCertificateWarningJSController : NSObject

{
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)showCertificateInformation;
- (void)openClockSettings;
- (id)initWithCertificateWarningController:(id)arg1;
- (void)goBackSelected;
- (void)pageLoaded;

@end
