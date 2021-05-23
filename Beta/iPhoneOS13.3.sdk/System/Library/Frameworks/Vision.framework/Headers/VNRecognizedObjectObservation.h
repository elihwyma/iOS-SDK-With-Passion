/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNDetectedObjectObservation.h>

@class NSArray;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation

{
    NSArray *_labels;
}

@property (copy, nonatomic, readonly) NSArray *labels;

- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 confidence:(float)arg3 labels:(id)arg4;

@end
