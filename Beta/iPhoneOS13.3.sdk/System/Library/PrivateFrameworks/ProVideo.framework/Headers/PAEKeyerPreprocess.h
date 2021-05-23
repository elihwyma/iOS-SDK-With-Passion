/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PAEKeyer;

@interface PAEKeyerPreprocess : NSObject

{
    PAEKeyer *_keyer;
    id _apiManager;
}

- (void)dealloc;
- (_Bool)addAdvancedParametersWithParamAPI:(id)arg1 paramFlags:(unsigned int)arg2;
- (_Bool)findGrainRegionWithInfo:(CDStruct_f5b31fc1)arg1 coordX:(int *)arg2 coordY:(int *)arg3 width:(int)arg4 height:(int)arg5 minGreenHueAngle:(float)arg6 maxGreenHueAngle:(float)arg7 greenChroma:(float)arg8 minBlueHueAngle:(float)arg9 maxBlueHueAngle:(float)arg10 blueChroma:(float)arg11;
- (_Bool)doDegrainWithDegrainAmount:(double)arg1 degrainIntensity:(double)arg2 withInfo:(CDStruct_f5b31fc1)arg3 outputNode:(HGRef_265f9e4c *)arg4 pcaMatrix:(id)arg5 width:(int)arg6 height:(int)arg7;
- (_Bool)doPreprocessKeyerFootageWithParamAPI:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2 linearInput:(_Bool)arg3 scaleX:(float)arg4 scaleY:(float)arg5 width:(float)arg6 height:(float)arg7 fixDVResult:(HGRef_265f9e4c *)arg8 degrainResult:(HGRef_265f9e4c *)arg9 outputNode:(HGRef_265f9e4c *)arg10;
- (void)setKeyer:(id)arg1;

@end
