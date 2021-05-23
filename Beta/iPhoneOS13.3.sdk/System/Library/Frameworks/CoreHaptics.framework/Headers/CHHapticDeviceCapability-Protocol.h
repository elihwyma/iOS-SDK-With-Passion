/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@protocol CHHapticDeviceCapability

@property (readonly) _Bool supportsHaptics;
@property (readonly) _Bool supportsAudio;

- (unsigned short)attributesForEventParameter:eventType:error: /* Error: Ran out of types for this method. */;
- (unsigned short)attributesForDynamicParameter:error: /* Error: Ran out of types for this method. */;

@end
