/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PAEFilterDefaultBase.h>

@class NSLock;

@interface PAEFracturedFilter : PAEFilterDefaultBase

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
- (_Bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (_Bool)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_da8610d8)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (_Bool)variesOverTime;
- (void)onVTBUserInteractionEventNotification:(id)arg1;
- (_Bool)variesByDuration;

@end
