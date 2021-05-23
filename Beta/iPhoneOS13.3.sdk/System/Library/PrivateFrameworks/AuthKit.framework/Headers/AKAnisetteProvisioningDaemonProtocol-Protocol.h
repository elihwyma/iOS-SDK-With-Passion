/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@protocol AKAnisetteProvisioningDaemonProtocol <Swift>

- (unsigned short)provisionAnisetteForDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncAnisetteWithSIMData:device:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eraseAnisetteForDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAnisetteDataAndProvisionIfNecessary:device:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)legacyAnisetteDataForDSID:device:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)attestationDataForDevice:withRequest:completion: /* Error: Ran out of types for this method. */;

@end
