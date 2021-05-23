/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoFacePoseFilter : NSObject

{
    struct Matrix<float, 12, 1, false> _previousState;
    struct Matrix<float, 12, 12, false> _previousCovar;
    _Bool _previousStateIsValid;
}

- (void)reset;
- (id).cxx_construct;
- (int)rotationToEulerAngles:(float [3][3])arg1 angles:(float [3])arg2;
- (int)kalmanFiltering:(float [3])arg1 T:(float [3])arg2;
- (int)eulerAnglesToRotation:(float [3])arg1 R:(float [3][3])arg2;
- (int)filteringPose:(CDStruct_14d5dc5e *)arg1;

@end
