/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCProfileTrustEvaluator : NSObject

- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1;

@end
