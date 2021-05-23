/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class VKCamera;

@interface VKMapSnapshot : NSObject

{
    struct CGImage *_image;
    unsigned long long _width;
    unsigned long long _height;
    double _scale;
    VKCamera *_camera;
}

@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGImage *image;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint)pointForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coordinateForPoint:(struct CGPoint)arg1;
- (id)_initWithImage:(struct CGImage *)arg1 scale:(double)arg2 camera:(id)arg3;
- (id)imageSurface;
- (id)imageDataInFormat:(unsigned long long)arg1;

@end
