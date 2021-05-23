/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class NSData, NSMutableDictionary, NSURL;

@interface PAEPhotosFilters : PAEFilterDefaultBase

{
    struct PCMutex cacheMutex;
    NSMutableDictionary *LUTcache;
    NSURL *LUTCubeURL;
    NSURL *LUTScubeURL;
    NSURL *LUTCcubeURL;
    int whichFilter;
    NSData *cool16BitLUT;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_da8610d8)arg2 hardware:(_Bool *)arg3 software:(_Bool *)arg4;
- (_Bool)variesOverTime;
- (_Bool)read:(id)arg1 red:(float *)arg2 green:(float *)arg3 blue:(float *)arg4;
- (_Bool)readCubeLine:(id)arg1 intoLUTEntries:(vector_513fe8f7 *)arg2;
- (id)readCubeData:(id)arg1 error:(id *)arg2;
- (id)lutFromCubeFile:(id)arg1;
- (id)lutFromScubeFile:(id)arg1;
- (id)lutFromCcubeFile:(id)arg1;
- (id)LUTFromCache:(int)arg1 atPath:(id)arg2;
- (id)convertLUTTo16Bit:(HGRef_0776e7a8)arg1;
- (HGRef_0776e7a8)lutBitmapForFilter:(int)arg1 lutDimensions:(int *)arg2;
- (HGRef_265f9e4c)generateCoolNode:(HGRef_0776e7a8)arg1 withInput:(HGRef_265f9e4c)arg2;
- (HGRef_265f9e4c)applyP3PhotosFilterToNode:(HGRef_265f9e4c)arg1 withInputImage:(id)arg2 andLUTNode:(HGRef_265f9e4c)arg3;

@end
