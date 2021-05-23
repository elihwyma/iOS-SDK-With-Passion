/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <MetalKit/MTKView.h>

@interface SUICFlamesViewMetal : MTKView

+ (Class)layerClass;
+ (_Bool)_supportsAdaptiveFramerate;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2 fidelity:(long long)arg3 prewarmInBackground:(_Bool)arg4;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect)arg2 activeFrame:(struct CGRect)arg3 fidelity:(long long)arg4 prewarmInBackground:(_Bool)arg5;
+ (id)_indexCache;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize)arg2;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect)arg2 fidelity:(long long)arg3;
+ (void)setIndexCacheSize:(unsigned long long)arg1;

@end
