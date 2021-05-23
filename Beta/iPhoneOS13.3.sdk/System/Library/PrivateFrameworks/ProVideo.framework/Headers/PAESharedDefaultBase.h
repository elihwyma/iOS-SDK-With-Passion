/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@protocol PROAPIAccessing;

@interface PAESharedDefaultBase : NSObject

{
    id <PROAPIAccessing> _apiManager;
    _Bool _upscalesFields;
    _Bool _hostIsFinalCutPro;
    _Bool _hostIsVertigo;
    _Bool _ignorePixelAspectRatio;
}

- (void)dealloc;
- (id)properties;
- (double)frameRate;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (int)getRenderMode:(CDUnion_baaf6063)arg1;
- (PCMatrix44Tmpl_93ed1289)getInversePixelTransformForImage:(id)arg1;
- (PCMatrix44Tmpl_93ed1289)getPixelTransformForImage:(id)arg1;
- (PCVector2_5d498db0)convertRelativeToPixelCoordinates:(const PCVector2_5d498db0 *)arg1 withImage:(id)arg2;
- (void)overrideFrameSetupForRenderMode:(CDStruct_f5b31fc1)arg1 hardware:(_Bool *)arg2 software:(_Bool *)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (_Bool)getPoint:(PCVector2_5d498db0 *)arg1 fromParm:(unsigned int)arg2 atTime:(CDUnion_baaf6063)arg3 withImage:(id)arg4;
- (PCVector2_5d498db0)getScaleForImage:(id)arg1;
- (_Bool)getHeliumImage:(id *)arg1 layerOffsetX:(double *)arg2 layerOffsetY:(double *)arg3 requestInfo:(CDStruct_f5b31fc1)arg4 fromParm:(int)arg5 atTime:(CDUnion_baaf6063)arg6;
- (void)transform:(HGRef_265f9e4c *)arg1 fromImage:(id)arg2 toImage:(id)arg3 fit:(_Bool)arg4;
- (void)crop:(HGRef_265f9e4c *)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (PCRect_7f811c82)getImageBoundary:(id)arg1;
- (HGRef_265f9e4c)smear:(HGRef_265f9e4c)arg1 fromImage:(id)arg2 toImage:(id)arg3;
- (_Bool)variesOverTime;
- (_Bool)frameCleanup;
- (float)getBlendingGamma;
- (HGRef_265f9e4c)transformFromImage:(id)arg1 toImage:(id)arg2 fit:(_Bool)arg3;
- (void)setIgnoresPixelAspectRatio:(_Bool)arg1;
- (PCVector2_5d498db0)convertRelativeToImageCoordinates:(const PCVector2_5d498db0 *)arg1 withImage:(id)arg2;
- (double)secondsFromFxTime:(CDUnion_baaf6063)arg1;
- (HGRef_265f9e4c)changeDOD:(HGRef_265f9e4c)arg1 withRect:(const PCRect_3a266109 *)arg2;
- (_Bool)getHeliumImage:(id *)arg1 source:(_Bool)arg2 withInfo:(CDStruct_f5b31fc1)arg3 atTime:(CDUnion_baaf6063)arg4;
- (double)frameFromFxTime:(CDUnion_baaf6063)arg1 forPlugIn:(id)arg2;
- (double)relativeShutterForAngle:(double)arg1;
- (PCRect_7f811c82)getCropRectFromImage:(id)arg1 toImage:(id)arg2;
- (_Bool)getCropRectFromImage:(id)arg1 toImage:(id)arg2 output:(PCRect_7f811c82 *)arg3;
- (void)crop:(HGRef_265f9e4c *)arg1 withRect:(PCRect_7f811c82)arg2;
- (HGRef_265f9e4c)cropFromImage:(id)arg1 toImage:(id)arg2;
- (_Bool)smear:(HGRef_265f9e4c)arg1 fromImage:(id)arg2 toImage:(id)arg3 resultNode:(HGRef_265f9e4c *)arg4;
- (_Bool)ignoresPixelAspectRatio;
- (void)fxTime:(CDUnion_baaf6063 *)arg1 fromFrame:(double)arg2 forPlugIn:(id)arg3;

@end
