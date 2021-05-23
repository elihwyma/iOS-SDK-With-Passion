/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@protocol AKAnisetteProvisioningClientProtocol <Swift>

- (unsigned short)provisionAnisetteForContext:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncAnisetteForContext:withSIMData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)eraseAnisetteForContext:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAnisetteDataForContext:provisionIfNecessary:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)legacyAnisetteDataForContext:DSID:withCompletion: /* Error: Ran out of types for this method. */;

@end
