/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@interface BYLicenseAgreement : NSObject

+ (unsigned long long)versionOfAcceptedAgreement;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)arg1;
+ (unsigned long long)versionOfOnDiskAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (_Bool)needsToAcceptNewAgreement;

@end
