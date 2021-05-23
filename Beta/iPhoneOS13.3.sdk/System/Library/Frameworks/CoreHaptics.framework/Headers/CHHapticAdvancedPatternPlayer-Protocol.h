/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <CoreHaptics/Swift-Protocol.h>

@protocol CHHapticAdvancedPatternPlayer <Swift>

@property _Bool loopEnabled;
@property double loopEnd;
@property float playbackRate;
@property _Bool isMuted;
@property (copy) CDUnknownBlockType completionHandler;

- (unsigned short)seekToOffset:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAtTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAtTime:error: /* Error: Ran out of types for this method. */;

@end
