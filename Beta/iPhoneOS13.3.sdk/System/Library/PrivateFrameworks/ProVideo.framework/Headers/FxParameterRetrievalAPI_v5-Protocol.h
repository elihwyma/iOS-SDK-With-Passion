/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/Swift-Protocol.h>

@protocol FxParameterRetrievalAPI_v5 <Swift>

- (unsigned short)getFloatValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getIntValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getBoolValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getRedValue:greenValue:blueValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getRedValue:greenValue:blueValue:alphaValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getXValue:YValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getBitmap:layerOffsetX:layerOffsetY:requestInfo:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getTexture:layerOffsetX:layerOffsetY:requestInfo:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getCustomParameterValue:fromParm: /* Error: Ran out of types for this method. */;
- (unsigned short)getParameterFlags:fromParm: /* Error: Ran out of types for this method. */;
- (unsigned short)getStringParameterValue:fromParm: /* Error: Ran out of types for this method. */;
- (unsigned short)getCustomParameterValue:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getPathID:fromParm:atFxTime: /* Error: Ran out of types for this method. */;
- (unsigned short)getFontName:fromParm:atFxTime: /* Error: Ran out of types for this method. */;

@end
