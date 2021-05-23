/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@protocol _INExtensionContextVending <Swift>

- (unsigned short)getIntentParameterOptions:forIntent:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)getIntentParameterDefaultValue:forIntent:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveIntentSlot:forIntent:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveIntentSlots:forIntent:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)confirmIntent:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIntent:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTransactionWithIntentIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)completeTransactionWithIntentIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelTransactionDueToTimeoutWithIntentIdentifier:completion: /* Error: Ran out of types for this method. */;

@end
