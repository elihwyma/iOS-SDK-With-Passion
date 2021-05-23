/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProactiveML/Swift-Protocol.h>

@protocol PMLTrainingProtocol <Swift>

- (unsigned short)deleteSessionsWithBundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteSessionsWithDomainIdentifiers:bundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteSessionsWithIdentifiers:bundleID: /* Error: Ran out of types for this method. */;
- (unsigned short)planReceivedWithPayload:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setSourceRecoverer: /* Error: Ran out of types for this method. */;
- (unsigned short)trimDb;
- (unsigned short)addSessionWithCovariates:source:label:sessionDescriptor:spotlightReference:isInternal: /* Error: Ran out of types for this method. */;
- (unsigned short)lastTrainingFeaturizationForModelName:andLocale: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSessionsAndLabelForModel:block: /* Error: Ran out of types for this method. */;
- (unsigned short)updateLastTrainingFeaturizationForModel:andData: /* Error: Ran out of types for this method. */;
- (unsigned short)addSessionWithCovariates:label:sessionDescriptor:spotlightReference:isInternal: /* Error: Ran out of types for this method. */;

@end
