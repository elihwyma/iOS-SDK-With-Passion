/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@protocol WBSCertificateWarningPageHandler <Swift>

- (unsigned short)goBackButtonClicked;
- (unsigned short)visitInsecureWebsite;
- (unsigned short)visitInsecureWebsiteWithTemporaryBypass;
- (unsigned short)showCertificateInformation;
- (unsigned short)openClockSettings;

@end
