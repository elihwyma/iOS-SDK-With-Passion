/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <CoreHaptics/Swift-Protocol.h>

@protocol CHHapticPatternPlayer <Swift>

@property _Bool isMuted;

- (unsigned short)sendParameters:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)startAtTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)stopAtTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleParameterCurve:atTime:error: /* Error: Ran out of types for this method. */;

@end
