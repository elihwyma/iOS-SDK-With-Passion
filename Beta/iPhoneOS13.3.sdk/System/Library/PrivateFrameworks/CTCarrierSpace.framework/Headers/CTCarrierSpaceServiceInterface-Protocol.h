/*
 Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

#import <CTCarrierSpace/Swift-Protocol.h>

@protocol CTCarrierSpaceServiceInterface <Swift>

- (unsigned short)ping: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshUsageInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshPlansInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshAppsInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserInAuthFlow:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticationDidComplete:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticationDidFail:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userDidAcceptPlanTerms:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAuthenticationContext: /* Error: Ran out of types for this method. */;
- (unsigned short)getCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)getUserConsentFlowInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserConsent:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUsageInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPlansInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAppsInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshAllInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)purchasePlan:authInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDataPlanMetrics: /* Error: Ran out of types for this method. */;
- (unsigned short)testMode:config:completion: /* Error: Ran out of types for this method. */;

@end
