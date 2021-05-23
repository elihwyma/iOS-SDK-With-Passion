/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxTimingAPI

- (unsigned short)startTimeOfInputToFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)startTimeOfInputAToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)startTimeOfInputBToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)startTimeOfImageParm:forEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)durationOfInputToFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)durationOfInputAToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)durationOfInputBToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)durationOfImageParm:forEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)fieldOrderForInputToFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)fieldOrderForInputAToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)fieldOrderForInputBToTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)fieldOrderForImageParm:forEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineFpsNumeratorForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineFpsDenominatorForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)inPointOfTimelineForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)outPointOfTimelineForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)startTimeForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)durationForEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineTimeFromInputTime:forFilter: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineTimeFromInputATime:forTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineTimeFromInputBTime:forTransition: /* Error: Ran out of types for this method. */;
- (unsigned short)timelineTimeFromImageTime:forParmId:forEffect: /* Error: Ran out of types for this method. */;
- (unsigned short)inputTimeForFilter:fromTimelineTime: /* Error: Ran out of types for this method. */;
- (unsigned short)inputATimeForTransition:fromTimelineTime: /* Error: Ran out of types for this method. */;
- (unsigned short)inputBTimeForTransition:fromTimelineTime: /* Error: Ran out of types for this method. */;
- (unsigned short)imageTimeForParmId:forEffect:fromTimelineTime: /* Error: Ran out of types for this method. */;

@end
