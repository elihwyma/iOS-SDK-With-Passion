/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

#import <AccessibilityUIService/Swift-Protocol.h>

@protocol AXUIService <Swift>

- (unsigned short)processMessage:withIdentifier:fromClientWithIdentifier:error: /* Error: Ran out of types for this method. */;

+ (unsigned short)sharedInstance;
+ (unsigned short)requiredEntitlementForProcessingMessageWithIdentifier: /* Error: Ran out of types for this method. */;
+ (unsigned short)possibleRequiredEntitlementsForProcessingMessageWithIdentifier: /* Error: Ran out of types for this method. */;

- (unsigned short)messageWithIdentifierShouldBeProcessedAsynchronously: /* Error: Ran out of types for this method. */;
- (unsigned short)processMessageAsynchronously:withIdentifier:fromClientWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accessQueueForProcessingMessageWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)messageWithIdentifierRequiresWritingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)processInitializationMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)serviceWasFullyInitialized;
- (unsigned short)connectionWillBeInterruptedForClientWithIdentifier: /* Error: Ran out of types for this method. */;

@end
