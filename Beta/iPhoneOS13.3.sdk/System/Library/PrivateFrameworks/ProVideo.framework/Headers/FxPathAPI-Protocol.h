/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxPathAPI

- (unsigned short)numberOfPathsAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)pathIDForIndex:error: /* Error: Ran out of types for this method. */;
- (unsigned short)nameOfPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)isPath:openAtTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)isPath:invertedAtTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)styleOfPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)lengthOfPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)lengthOfSegment:ofPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfVerticesInPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vertex:atIndex:ofPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pointAtPercentageOfDistance:alongPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pointAtPercentageOfParameter:alongPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)blendModeOfPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setPath:color:error: /* Error: Ran out of types for this method. */;

@end
