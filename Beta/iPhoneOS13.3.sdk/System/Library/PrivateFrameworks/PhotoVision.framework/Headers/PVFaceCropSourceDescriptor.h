/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@class PVFace, PVImage;

@interface PVFaceCropSourceDescriptor : NSObject

{
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)arg1 image:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)face;
- (id)image;
- (id)initWithFace:(id)arg1 image:(id)arg2;

@end
