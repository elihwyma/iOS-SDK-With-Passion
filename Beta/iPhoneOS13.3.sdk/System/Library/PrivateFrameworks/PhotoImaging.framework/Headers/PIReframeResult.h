/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSArray, VNSaliencyImageObservation;

@interface PIReframeResult : NSObject

{
    double _confidence;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    struct CGRect _bounds;
}

@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) double confidence;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic) NSArray *ANODSubjects;

- (id)initWithBounds:(struct CGRect)arg1 confidence:(double)arg2 ANODSubjects:(id)arg3 saliencyObservation:(id)arg4;

@end
