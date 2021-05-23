/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class CEKLightingCube, CEKLightingCubeAppearance;

@interface CEKLightingCubeRenderer : NSObject

{
    CEKLightingCube *_cube;
    CEKLightingCubeAppearance *_appearance;
    long long _components;
}

- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;
- (void)renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;

@end
