/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <CoreHaptics/Swift-Protocol.h>

@class NSArray;

@protocol CHHapticPlayable <Swift>

@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;
@property (readonly) double duration;

- (unsigned short)resolveExternalResources:error: /* Error: Ran out of types for this method. */;

@end
