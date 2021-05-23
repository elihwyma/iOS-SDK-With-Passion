/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@protocol FxParameterRetrievalAPI

- (unsigned short)getCustomParameterValue:fromParm: /* Error: Ran out of types for this method. */;
- (unsigned short)getParameterFlags:fromParm: /* Error: Ran out of types for this method. */;
- (unsigned short)getFloatValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getIntValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getBoolValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getRedValue:greenValue:blueValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getRedValue:greenValue:blueValue:alphaValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getXValue:YValue:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getBitmap:layerOffsetX:layerOffsetY:requestInfo:fromParm:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getTexture:layerOffsetX:layerOffsetY:requestInfo:fromParm:atTime: /* Error: Ran out of types for this method. */;

@end
