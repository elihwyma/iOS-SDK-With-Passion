/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIReframeSubject.h>

@interface PIVideoReframeDebugSubject : PIReframeSubject

{
    struct CGVector _velocity;
    struct CGVector _acceleration;
}

@property struct CGVector velocity;
@property struct CGVector acceleration;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
