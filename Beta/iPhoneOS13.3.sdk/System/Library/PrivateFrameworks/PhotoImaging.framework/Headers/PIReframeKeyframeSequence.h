/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject

{
    NUKeyframeSequenceMatrixFloat33 *_homographySequence;
}

@property (nonatomic, readonly) unsigned long long count;

- (long long)interpolation;
- (id)sparseSequence;
- (id)initWithKeyframeArray:(id)arg1;
- (CDStruct_8e0628e6)homographyAtTime:(CDStruct_1b6d18a9)arg1;

@end
