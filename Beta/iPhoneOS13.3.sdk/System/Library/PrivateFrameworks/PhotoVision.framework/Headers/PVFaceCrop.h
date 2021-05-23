/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject

{
    NSData *_faceCropData;
    PVFace *_originatingFace;
    struct CGSize _cachedImageDimensions;
    short _state;
}

@property (nonatomic) short state;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)imageDimensions;
- (id)faceCropData;
- (id)originatingFace;
- (id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2;
- (id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2;

@end
