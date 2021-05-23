/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNMTLRenderPipeline;

__attribute__((visibility("hidden")))
@interface SCNMTLShadableKey : NSObject

{
    struct __C3DMaterial *_material;
    struct __C3DGeometry *_geometry;
    SCNMTLRenderPipeline *_pipeline;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
