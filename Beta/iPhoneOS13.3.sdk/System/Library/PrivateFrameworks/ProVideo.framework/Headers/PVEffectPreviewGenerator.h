/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase

+ (id)sharedGenerator;
+ (void)cleanupCaches;

- (id)initWithOptions:(id)arg1;
- (void)generatePreviewForEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inputImage:(struct CGImage *)arg3 outputSize:(struct CGSize)arg4 waitForFinish:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelAllPendingPreviewRequests;

@end
