/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/Swift-Protocol.h>

@class NSArray, VNSaliencyImageObservation;

@protocol PIStillReframeResult <Swift>

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic, readonly) NSArray *ANODSubjects;

@end
