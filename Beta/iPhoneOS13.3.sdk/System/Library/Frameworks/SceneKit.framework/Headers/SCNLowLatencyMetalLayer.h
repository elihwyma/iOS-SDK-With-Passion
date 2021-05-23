/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <QuartzCore/CAMetalLayer.h>

__attribute__((visibility("hidden")))
@interface SCNLowLatencyMetalLayer : CAMetalLayer

- (_Bool)lowLatency;
- (unsigned long long)maximumDrawableCount;

@end
