/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLStereoscopicCamera, MISSING_TYPE;

@interface MDLInteractiveCameraController : NSObject

{
    MISSING_TYPE *_lookAt;
    MISSING_TYPE *_clickPoint;
    MISSING_TYPE *_dragVector;
    float _pitch;
    float _yaw;
    struct MDLAABB _framingBounds;
    float _targetElevation;
    float _tumbleSpeed;
    float _zoomSpeed;
    float _trackSpeed;
    float _targetDistance;
    float _zoom;
    MDLStereoscopicCamera *_camera;
    MISSING_TYPE *_dragPoint;
    unsigned long long _mode;
    MISSING_TYPE *_viewSize;
    MISSING_TYPE *_trackVector;
}

@property (copy, nonatomic) MDLStereoscopicCamera *camera;
@property (nonatomic) MISSING_TYPE *clickPoint;
@property (nonatomic) MISSING_TYPE *dragPoint;
@property (nonatomic) MISSING_TYPE *trackVector;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) float tumbleSpeed;
@property (nonatomic) float zoomSpeed;
@property (nonatomic) float trackSpeed;
@property (nonatomic) MISSING_TYPE *targetPosition;
@property (nonatomic) float targetDistance;
@property (nonatomic) MISSING_TYPE *position;
@property (nonatomic) struct MDLAABB framingBounds;
@property (nonatomic) MISSING_TYPE *viewSize;
@property (nonatomic) float zoom;

- (id)init;
- (id).cxx_construct;
- (void)update:(float)arg1;
- (void)frameObject;
- (void)frameBounds;
- (void)mouseMotionX:(float)arg1 Y:(float)arg2;

@end
