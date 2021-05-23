/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNEspressoDetectedObject.h>

__attribute__((visibility("hidden")))
@interface ANFDDetectedObject : VNEspressoDetectedObject

{
    float _rotationAngle;
    float _yawAngle;
    int _labelKey;
}

@property float rotationAngle;
@property float yawAngle;
@property int labelKey;

- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 labelKey:(int)arg6;

@end
