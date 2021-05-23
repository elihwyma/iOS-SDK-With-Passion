/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase

{
    struct OMSamples *_omSamples;
    _Bool _isMotion;
    CDStruct_1b6d18a9 _prevRationalTime;
    CDUnion_baaf6063 _prevRectanglesFrame;
    struct HGBitmapLoader *_lutsBitmapLoaderCache;
    struct PCMutex _cacheMutex;
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (void)getInputWidth:(float *)arg1 height:(float *)arg2 renderInfo:(CDStruct_f5b31fc1)arg3;
- (double)autokeyAmountToHistoPercent:(double)arg1;
- (int)getColorPrimaries;
- (_Bool)use32x32Histogram;
- (_Bool)pullInitialKey:(id *)arg1;
- (_Bool)isSimpleKey;
- (HGRef_265f9e4c)getKeyerNode:(HGRef_265f9e4c)arg1 omKeyer:(struct PAEKeyerOMKeyer2D *)arg2 atTime:(CDUnion_baaf6063)arg3;
- (_Bool)isLumaKey;
- (_Bool)sampleEdge:(struct OMSamplesElem *)arg1 renderInfo:(CDStruct_f5b31fc1 *)arg2 width:(float)arg3 height:(float)arg4;
- (_Bool)sampleRect:(struct OMSamplesElem *)arg1 renderInfo:(CDStruct_f5b31fc1 *)arg2 width:(float)arg3 height:(float)arg4;
- (void)computeModel:(_Bool)arg1 atTime:(CDUnion_baaf6063)arg2;
- (void)clearKey;
- (id)getBlendOptionsAtTime:(CDUnion_baaf6063)arg1;
- (id)apiManager;
- (void)setInitialSamples:(struct OMSamplesElem *)arg1;

@end
