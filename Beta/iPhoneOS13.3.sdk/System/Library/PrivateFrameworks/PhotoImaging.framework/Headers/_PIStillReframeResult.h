/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSArray, NSString, VNSaliencyImageObservation;

@protocol NURenderStatistics;

@interface _PIStillReframeResult : _NURenderResult

{
    double _confidence;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double confidence;
@property (retain, nonatomic) VNSaliencyImageObservation *saliencyObservation;
@property (copy, nonatomic) NSArray *ANODSubjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
