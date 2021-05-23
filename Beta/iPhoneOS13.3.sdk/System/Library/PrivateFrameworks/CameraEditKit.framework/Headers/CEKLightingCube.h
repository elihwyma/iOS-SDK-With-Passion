/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface CEKLightingCube : NSObject

{
    MISSING_TYPE *_world[8];
    MISSING_TYPE *_normals[6];
    struct CGPoint _screen[8];
    long long _points[8];
    long long _planes[6];
}

- (void)points:(struct CGPoint (*)[6])arg1 forOutlineWithSize:(struct CGSize)arg2;
- (void)points:(struct CGPoint (*)[4])arg1 forPlane:(long long)arg2 size:(struct CGSize)arg3;
- (id)initWithRotationAngle:(double)arg1;
- (const struct CGPath *)pathForOutlineWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (const struct CGPath *)centerShadowPathWithSize:(struct CGSize)arg1 width:(double)arg2;
- (const struct CGPath *)centerPathWithSize:(struct CGSize)arg1;
- (const struct CGPath *)pathForPlane:(long long)arg1 size:(struct CGSize)arg2;
- (double)intensityForPlane:(long long)arg1;

@end
