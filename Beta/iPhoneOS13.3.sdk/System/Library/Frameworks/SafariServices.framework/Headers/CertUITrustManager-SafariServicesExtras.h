/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <CertUI/CertUITrustManager.h>

@interface CertUITrustManager (SafariServicesExtras)

- (_Bool)userAllowsCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2 shouldPrompt:(_Bool)arg3;

@end
