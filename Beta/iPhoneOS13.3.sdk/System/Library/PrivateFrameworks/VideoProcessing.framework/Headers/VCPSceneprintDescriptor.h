/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VNSceneprint;

__attribute__((visibility("hidden")))
@interface VCPSceneprintDescriptor : NSObject

{
    VNSceneprint *_sceneprint;
}

+ (_Bool)usePHAssetData;
+ (int)preferredPixelFormat;
+ (id)descriptorWithImage:(struct __CVBuffer *)arg1;
+ (id)descriptorWithData:(id)arg1;

- (id)initWithData:(id)arg1;
- (id)initWithImage:(struct __CVBuffer *)arg1;
- (id)serialize;
- (int)computeDistance:(float *)arg1 toDescriptor:(id)arg2;

@end
