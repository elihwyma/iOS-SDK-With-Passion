/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface FigM2MController : NSObject

{
    struct {
        int hTaps;
        int vTaps;
        int hPhases;
        int vPhases;
        int prePointBits;
        int postPointBits;
    } _cap;
    struct __IOSurfaceAccelerator *_accelRef;
    _Bool _useCustomCoeff;
    struct __CFDictionary *_runOptions;
}

- (id)init;
- (void)dealloc;
- (int)transform:(struct __CVBuffer *)arg1 srcRect:(struct CGRect)arg2 dst:(struct __CVBuffer *)arg3 dstRect:(struct CGRect)arg4 rotate:(int)arg5 sync_m2m:(_Bool)arg6;
- (int)downsample:(struct __CVBuffer *)arg1 dst:(struct __CVBuffer *)arg2 sync_m2m:(_Bool)arg3;
- (int)setCustomFilter:(int)arg1 alignment:(int)arg2 sourceWidth:(unsigned long long)arg3 sourceHeight:(unsigned long long)arg4 destinationWidth:(unsigned long long)arg5 destinationHeight:(unsigned long long)arg6 luma_param:(float)arg7 chroma_param:(float)arg8;
- (int)setHistogramMode:(int)arg1 dstRect:(struct CGRect)arg2;
- (int)copyHistogram:(CDStruct_26f71572 *)arg1;
- (int)clearHistorgramMode;
- (int)queryCapabilities;
- (int)_transform:(struct __CVBuffer *)arg1 srcRect:(struct CGRect)arg2 dst:(struct __CVBuffer *)arg3 dstRect:(struct CGRect)arg4 symmetricTransform:(unsigned int)arg5 sync_m2m:(_Bool)arg6;
- (int)transform:(struct __CVBuffer *)arg1 srcRect:(struct CGRect)arg2 dst:(struct __CVBuffer *)arg3 sync_m2m:(_Bool)arg4;
- (int)setCustomFilter:(int)arg1 alignment:(int)arg2 src:(struct __CVBuffer *)arg3 dst:(struct __CVBuffer *)arg4 luma_param:(float)arg5 chroma_param:(float)arg6;
- (int)transform:(struct __CVBuffer *)arg1 srcRect:(struct CGRect)arg2 dst:(struct __CVBuffer *)arg3 dstRect:(struct CGRect)arg4 rotate:(int)arg5 flipX:(_Bool)arg6 flipY:(_Bool)arg7 sync_m2m:(_Bool)arg8;

@end
