/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMICameraVideoFrame;

__attribute__((visibility("hidden")))
@interface HMICameraVideoFrameSelectorFrameScore : HMFObject

{
    float _score;
    HMICameraVideoFrame *_frame;
}

@property (readonly) HMICameraVideoFrame *frame;
@property (readonly) float score;

- (id)description;
- (id)initWithFrame:(id)arg1 score:(float)arg2;

@end
