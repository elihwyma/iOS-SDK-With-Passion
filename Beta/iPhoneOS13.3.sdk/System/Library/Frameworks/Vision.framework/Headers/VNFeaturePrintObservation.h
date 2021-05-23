/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long elementCount;
@property (readonly) NSData *data;

+ (_Bool)supportsSecureCoding;

- (_Bool)computeDistance:(float *)arg1 toFeaturePrintObservation:(id)arg2 error:(id *)arg3;
- (float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id *)arg2;

@end
