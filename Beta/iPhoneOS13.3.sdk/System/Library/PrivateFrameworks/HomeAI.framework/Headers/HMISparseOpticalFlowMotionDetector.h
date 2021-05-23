/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class NSMutableArray, NSString;

@interface HMISparseOpticalFlowMotionDetector : HMFObject

{
    NSMutableArray *_frames;
    struct CGSize _size;
}

@property (readonly) NSMutableArray *frames;
@property (readonly) struct CGSize size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithSize:(struct CGSize)arg1;
- (void)appendFramePixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (id)detectWithGlobalMotionScore:(float *)arg1;
- (id)_computeOpticalFlow:(struct __CVBuffer *)arg1 with:(struct __CVBuffer *)arg2 globalMotionScore:(float *)arg3;

@end
