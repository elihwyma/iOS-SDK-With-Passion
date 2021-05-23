/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPresentation, SCNRenderer;

@interface ARSinglePassRenderer : NSObject

{
    SCNRenderer *_renderer;
    ARPresentation *_presentation;
}

@property (nonatomic, readonly) SCNRenderer *sceneRenderer;
@property (weak, nonatomic) ARPresentation *presentation;

- (id)initWithSCNRenderer:(id)arg1;
- (void)renderFrame:(id)arg1;

@end
