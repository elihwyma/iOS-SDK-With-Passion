/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VNFaceObservation;

__attribute__((visibility("hidden")))
@interface VCPFace : NSObject

{
    _Bool _leftEyeClosed;
    _Bool _rightEyeClosed;
    _Bool _smile;
    int _trackID;
    float _confidence;
    float _faceQuality;
    long long _yaw;
    VNFaceObservation *_observation;
    struct CGRect _bounds;
}

@property struct CGRect bounds;
@property _Bool leftEyeClosed;
@property _Bool rightEyeClosed;
@property _Bool smile;
@property long long yaw;
@property int trackID;
@property float confidence;
@property float faceQuality;
@property (retain) VNFaceObservation *observation;

- (id)init;
- (struct CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (unsigned long long)flagsForOrientation:(_Bool)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(struct CGAffineTransform)arg3;

@end
