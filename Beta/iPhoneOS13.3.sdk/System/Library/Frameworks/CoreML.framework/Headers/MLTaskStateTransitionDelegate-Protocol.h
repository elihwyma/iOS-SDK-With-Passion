/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <CoreML/Swift-Protocol.h>

@protocol MLTaskStateTransitionDelegate <Swift>

- (unsigned short)onResumptionWithTaskContext: /* Error: Ran out of types for this method. */;
- (unsigned short)onSuspensionWithTaskContext: /* Error: Ran out of types for this method. */;
- (unsigned short)onCancellation;
- (unsigned short)onCompletionWithTaskContext: /* Error: Ran out of types for this method. */;
- (unsigned short)onFailureWithTaskContext: /* Error: Ran out of types for this method. */;

@end
