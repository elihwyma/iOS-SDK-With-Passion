/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFeature.h>

@class NSDictionary;

@interface CIFaceFeature : CIFeature

{
    struct CGRect bounds;
    _Bool hasLeftEyePosition;
    struct CGPoint leftEyePosition;
    _Bool hasRightEyePosition;
    struct CGPoint rightEyePosition;
    _Bool hasMouthPosition;
    struct CGPoint mouthPosition;
    _Bool hasTrackingID;
    int trackingID;
    _Bool hasTrackingFrameCount;
    int trackingFrameCount;
    _Bool hasFaceAngle;
    float faceAngle;
    _Bool hasSmile;
    _Bool leftEyeClosed;
    _Bool rightEyeClosed;
    NSDictionary *landmarks;
}

@property (readonly) NSDictionary *landmarks;
@property (readonly) struct CGRect bounds;
@property (readonly) _Bool hasLeftEyePosition;
@property (readonly) struct CGPoint leftEyePosition;
@property (readonly) _Bool hasRightEyePosition;
@property (readonly) struct CGPoint rightEyePosition;
@property (readonly) _Bool hasMouthPosition;
@property (readonly) struct CGPoint mouthPosition;
@property (readonly) _Bool hasTrackingID;
@property (readonly) int trackingID;
@property (readonly) _Bool hasTrackingFrameCount;
@property (readonly) int trackingFrameCount;
@property (readonly) _Bool hasFaceAngle;
@property (readonly) float faceAngle;
@property (readonly) _Bool hasSmile;
@property (readonly) _Bool leftEyeClosed;
@property (readonly) _Bool rightEyeClosed;

- (void)dealloc;
- (id)type;
- (id)initWithBounds:(struct CGRect)arg1 hasLeftEyePosition:(_Bool)arg2 leftEyePosition:(struct CGPoint)arg3 hasRightEyePosition:(_Bool)arg4 rightEyePosition:(struct CGPoint)arg5 hasMouthPosition:(_Bool)arg6 mouthPosition:(struct CGPoint)arg7 hasFaceAngle:(_Bool)arg8 faceAngle:(float)arg9 hasTrackingID:(_Bool)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(_Bool)arg12 trackingFrameCount:(int)arg13 hasSmile:(_Bool)arg14 leftEyeClosed:(_Bool)arg15 rightEyeClosed:(_Bool)arg16 landmarks:(id)arg17;

@end
