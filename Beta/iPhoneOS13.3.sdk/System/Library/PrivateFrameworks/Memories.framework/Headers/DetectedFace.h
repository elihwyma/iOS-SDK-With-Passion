/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface DetectedFace : NSObject

{
    int _trackID;
    int _frames;
    NSNumber *_size;
    NSNumber *_confidence;
    struct CGPoint _leftEye;
    struct CGPoint _rightEye;
    struct CGPoint _mouthCenter;
    struct CGPoint _faceCenter;
    struct CGRect _faceRect;
    struct CGRect _approximateFaceRect;
}

@property (retain, nonatomic) NSNumber *size;
@property (nonatomic) struct CGPoint leftEye;
@property (nonatomic) struct CGPoint rightEye;
@property (nonatomic) struct CGPoint mouthCenter;
@property (nonatomic) struct CGPoint faceCenter;
@property (retain, nonatomic) NSNumber *confidence;
@property (nonatomic) int trackID;
@property (nonatomic) int frames;
@property (nonatomic) struct CGRect faceRect;
@property (nonatomic) struct CGRect approximateFaceRect;

- (id)description;
- (id)initWithFaceSize:(id)arg1 leftEye:(struct CGPoint)arg2 rightEye:(struct CGPoint)arg3 mouthCenter:(struct CGPoint)arg4 faceCenter:(struct CGPoint)arg5 confidence:(id)arg6 trackID:(int)arg7 frames:(int)arg8;
- (id)initWithFaceFeature:(id)arg1 withImageSize:(struct CGSize)arg2;

@end
