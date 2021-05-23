/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject

{
    AVMetadataFaceObjectInternal *_internal;
}

@property (readonly) long long faceID;
@property (readonly) _Bool hasRollAngle;
@property (readonly) double rollAngle;
@property (readonly) _Bool hasYawAngle;
@property (readonly) double yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(_Bool)arg2 rollAngle:(double)arg3 hasYawAngle:(_Bool)arg4 yawAngle:(double)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8;
- (id)initWithType:(id)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (_Bool)hasLeftEyeClosedConfidence;
- (int)leftEyeClosedConfidence;
- (_Bool)hasRightEyeClosedConfidence;
- (int)rightEyeClosedConfidence;
- (_Bool)hasSmileConfidence;
- (int)smileConfidence;
- (_Bool)hasLeftEyeBounds;
- (struct CGRect)leftEyeBounds;
- (_Bool)hasRightEyeBounds;
- (struct CGRect)rightEyeBounds;
- (id)initWithFaceID:(long long)arg1 hasRollAngle:(_Bool)arg2 rollAngle:(double)arg3 hasYawAngle:(_Bool)arg4 yawAngle:(double)arg5 time:(CDStruct_1b6d18a9)arg6 duration:(CDStruct_1b6d18a9)arg7 bounds:(struct CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

@end
