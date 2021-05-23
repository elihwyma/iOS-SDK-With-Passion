/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxPlugAPIDelegate

- (unsigned short)displayName;
- (unsigned short)parameterAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)parameterCount;
- (unsigned short)removeParameter: /* Error: Ran out of types for this method. */;
- (unsigned short)convertFromFigTime: /* Error: Ran out of types for this method. */;
- (unsigned short)figTimeToFxTime:withConversionData: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInspector;
- (unsigned short)markForDynamicParameterUsage;
- (unsigned short)fxTimeToFigTime:withConversionData: /* Error: Ran out of types for this method. */;
- (unsigned short)beginTimingOperation:forChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)endTimingOperation: /* Error: Ran out of types for this method. */;
- (unsigned short)preChannelChange:flagsOnly: /* Error: Ran out of types for this method. */;
- (unsigned short)postChannelChange:flagsOnly: /* Error: Ran out of types for this method. */;
- (unsigned short)rootChannel;
- (unsigned short)channelWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)convertToFigTime: /* Error: Ran out of types for this method. */;
- (unsigned short)usesRationalTime;
- (unsigned short)beginOperationWithChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)endOperationWithChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)abortAndWait;

@end
