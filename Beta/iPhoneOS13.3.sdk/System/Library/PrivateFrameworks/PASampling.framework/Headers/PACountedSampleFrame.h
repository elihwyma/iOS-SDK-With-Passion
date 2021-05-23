/*
 Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame

{
    PASampleFrame *_sampleFrame;
}

@property (readonly) PASampleFrame *sampleFrame;

- (id)debugDescription;
- (id)initWithSampleFrame:(id)arg1;

@end
