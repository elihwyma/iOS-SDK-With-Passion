/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxPathAPI_v2

- (unsigned short)numberOfPathsAtFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)pathID:forIndex:error: /* Error: Ran out of types for this method. */;
- (unsigned short)name:ofPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)isPath:open:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)isPath:inverted:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)style:ofPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)length:ofPath:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)length:ofSegment:ofPath:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfVertices:inPath:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)vertex:atIndex:ofPath:atFxTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)point:atPercentageOfDistance:alongPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)point:atPercentageOfParameter:alongPath:atTime:error: /* Error: Ran out of types for this method. */;
- (unsigned short)blendMode:ofPath:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setPath:toColor:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pathGeometryInfo:forPath:atTime:error: /* Error: Ran out of types for this method. */;

@end
