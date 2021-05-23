/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAETransitionDefaultBase.h>

@class NSLock;

@interface PAEFracturedTransition : PAETransitionDefaultBase

{
    struct FracturedParams *_fxParams;
    struct vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *>> _fxPool;
    NSLock *_fxPoolLock;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)properties;
- (id)initWithAPIManager:(id)arg1;
- (_Bool)addParameters;
- (_Bool)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfoA:(CDStruct_da8610d8)arg2 inputInfoB:(CDStruct_da8610d8)arg3 timeFraction:(float)arg4 hardware:(_Bool *)arg5 software:(_Bool *)arg6;
- (_Bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(CDStruct_f5b31fc1)arg5;

@end
