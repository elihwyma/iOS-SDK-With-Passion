/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PAEKeyerMatteTools : NSObject

- (id)init;
- (_Bool)doMatteManipulationWithInfo:(CDStruct_f5b31fc1)arg1 pixelAspectRatio:(float)arg2 fieldHeight:(float)arg3 doInvertMatte:(_Bool)arg4 inputIsInverted:(_Bool)arg5 fillHoles:(_Bool)arg6 scaling:(_Bool)arg7 blendingGamma:(float)arg8 blackLevel:(double)arg9 whiteLevel:(double)arg10 gammaLevel:(double)arg11 preKeyedInputNode:(HGRef_265f9e4c *)arg12 outputNode:(HGRef_265f9e4c *)arg13;
- (_Bool)addParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2 isLumaKey:(_Bool)arg3;
- (_Bool)addLevelsParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (_Bool)addAdvancedParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned int)arg2;
- (_Bool)doMatteManipulationWithParamAPI:(id)arg1 withPrivateParamAPI:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3 pixelAspectRatio:(float)arg4 fieldHeight:(float)arg5 doInvertMatte:(_Bool)arg6 inputIsInverted:(_Bool)arg7 fillHoles:(_Bool)arg8 scaling:(_Bool)arg9 blendingGamma:(float)arg10 preKeyedInputNode:(HGRef_265f9e4c *)arg11 outputNode:(HGRef_265f9e4c *)arg12;

@end
