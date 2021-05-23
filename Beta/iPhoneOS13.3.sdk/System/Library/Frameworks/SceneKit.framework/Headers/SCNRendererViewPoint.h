/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject

{
    MTLRenderPassDescriptor *_passDescriptor;
    CDStruct_4b2885c7 _viewport;
    struct SCNMatrix4 viewMatrix;
    struct SCNMatrix4 projectionMatrix;
}

@property (nonatomic) struct SCNMatrix4 viewMatrix;
@property (nonatomic) struct SCNMatrix4 projectionMatrix;
@property (retain, nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) CDStruct_4b2885c7 viewport;

- (void)dealloc;

@end
