/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@interface VCPInterAssetAnalyzer : NSObject

+ (struct CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;
+ (_Bool)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;

- (id)init;
- (int)_generateLastFrameDistanceDescriptor:(struct NSObject **)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3;
- (struct __CVBuffer *)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3;
- (int)computeDistance:(float *)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (int)computeDistance:(float *)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4;
- (int)generateDistanceDescriptor:(struct NSObject **)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(_Bool)arg5;

@end
