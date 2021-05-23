/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVMetadataFaceObjectInternal : NSObject

{
    long long _faceID;
    _Bool _hasRollAngle;
    double _rollAngle;
    _Bool _hasYawAngle;
    double _yawAngle;
    _Bool _hasLeftEyeClosedConfidence;
    int _leftEyeClosedConfidence;
    _Bool _hasRightEyeClosedConfidence;
    int _rightEyeClosedConfidence;
    _Bool _hasSmileConfidence;
    int _smileConfidence;
    _Bool _hasLeftEyeBounds;
    struct CGRect _leftEyeBounds;
    _Bool _hasRightEyeBounds;
    struct CGRect _rightEyeBounds;
}

@property (nonatomic) long long faceID;
@property (nonatomic) _Bool hasRollAngle;
@property (nonatomic) double rollAngle;
@property (nonatomic) _Bool hasYawAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) _Bool hasLeftEyeClosedConfidence;
@property (nonatomic) int leftEyeClosedConfidence;
@property (nonatomic) _Bool hasRightEyeClosedConfidence;
@property (nonatomic) int rightEyeClosedConfidence;
@property (nonatomic) _Bool hasSmileConfidence;
@property (nonatomic) int smileConfidence;
@property (nonatomic) _Bool hasLeftEyeBounds;
@property (nonatomic) struct CGRect leftEyeBounds;
@property (nonatomic) _Bool hasRightEyeBounds;
@property (nonatomic) struct CGRect rightEyeBounds;

@end
