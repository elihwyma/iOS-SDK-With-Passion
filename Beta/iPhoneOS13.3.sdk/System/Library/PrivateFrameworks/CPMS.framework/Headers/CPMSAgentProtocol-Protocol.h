/*
 Image: /System/Library/PrivateFrameworks/CPMS.framework/CPMS
 */

#import <CPMS/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol CPMSAgentProtocol <Swift>

+ (MISSING_TYPE *)isCPMSSupported;
+ (MISSING_TYPE *)sharedCPMSAgent;
+ (MISSING_TYPE *)createCPMSAgentSharedInstance;

- (MISSING_TYPE *)acknowledgePowerBudget:forClientId:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)registerClientWithDescription:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)requestPowerBudget:forClient:error: /* Error: Ran out of types for this method. */;

@end
