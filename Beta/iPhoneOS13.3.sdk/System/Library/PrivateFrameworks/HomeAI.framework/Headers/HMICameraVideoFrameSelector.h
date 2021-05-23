/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoFrameSampler, NSArray, NSMutableArray, NSString;

@protocol HMICameraVideoFrameSelectorDelegate, HMIMotionDetector;

@interface HMICameraVideoFrameSelector : HMFObject

{
    id <HMICameraVideoFrameSelectorDelegate> _delegate;
    HMICameraVideoFrameSampler *_sampler;
    NSMutableArray *_framesInternal;
    long long _maxFrameCount;
    NSMutableArray *_predictedFrames;
    id <HMIMotionDetector> _detector;
    CDStruct_1b6d18a9 _sampleRate;
}

@property (readonly) HMICameraVideoFrameSampler *sampler;
@property (readonly) CDStruct_1b6d18a9 sampleRate;
@property (readonly) NSMutableArray *framesInternal;
@property (readonly) long long maxFrameCount;
@property (readonly) NSMutableArray *predictedFrames;
@property (readonly) id <HMIMotionDetector> detector;
@property (weak) id <HMICameraVideoFrameSelectorDelegate> delegate;
@property (readonly) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (id)initWithResourceAttributes:(id)arg1 sampleRate:(CDStruct_1b6d18a9)arg2;
- (_Bool)handleVideoFrame:(id)arg1 error:(id *)arg2;
- (_Bool)isFinishedEarly;
- (void)sampler:(id)arg1 didFindSample:(id)arg2 target:(id)arg3;
- (void)sampler:(id)arg1 didDiscardFrame:(id)arg2;

@end
