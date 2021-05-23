/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoFrame, HMICameraVideoResourceAttributes, NSMutableArray, NSString;

@protocol HMICameraVideoFrameSamplerDelegate;

@interface HMICameraVideoFrameSampler : HMFObject

{
    _Bool _markedAsFinished;
    id <HMICameraVideoFrameSamplerDelegate> _delegate;
    HMICameraVideoResourceAttributes *_attributes;
    NSMutableArray *_unmatchedSampleFrames;
    HMICameraVideoFrame *_frame;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _sampleInterval;
}

@property (readonly) CDStruct_1b6d18a9 targetInterval;
@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly) CDStruct_1b6d18a9 sampleInterval;
@property (readonly) NSMutableArray *unmatchedSampleFrames;
@property (retain) HMICameraVideoFrame *frame;
@property (getter=isMarkedAsFinished) _Bool markedAsFinished;
@property (weak) id <HMICameraVideoFrameSamplerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (_Bool)isFinishedEarly;
- (id)initWithResourceAttributes:(id)arg1 sampleRate:(CDStruct_1b6d18a9)arg2 targetInterval:(CDStruct_1b6d18a9)arg3;
- (_Bool)appendFrame:(id)arg1 error:(id *)arg2;
- (_Bool)_appendFrame:(id)arg1 error:(id *)arg2;

@end
