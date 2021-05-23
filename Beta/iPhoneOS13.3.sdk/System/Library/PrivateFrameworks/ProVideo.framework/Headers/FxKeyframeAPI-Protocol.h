/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxKeyframeAPI

- (unsigned short)channelCount:forParam: /* Error: Ran out of types for this method. */;
- (unsigned short)keyframeCount:forParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)keyframeInfo:forParam:channel:andIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setKeyframe:withInfo:forParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)addKeyframe:toParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)removeKeyframeAtIndex:fromParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)param:channel:hasKeyframe:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)keyframeInfo:atOrBefore:fromParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)keyframeInfo:atOrAfter:fromParam:andChannel: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllKeyframesForParam:andChannel: /* Error: Ran out of types for this method. */;

@end
