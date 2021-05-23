/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMPanoramaPaintingStatus : NSObject

{
    double _speed;
    struct CGRect _cropRectangle;
}

@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) struct CGRect cropRectangle;

- (id)initWithSpeed:(double)arg1 cropRectangle:(struct CGRect)arg2;

@end
