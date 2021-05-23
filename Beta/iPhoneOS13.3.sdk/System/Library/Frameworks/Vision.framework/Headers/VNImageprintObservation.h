/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSData, NSString, VNImageprint;

@interface VNImageprintObservation : VNObservation

{
    _Bool _imageprintValid;
    VNImageprint *_imageprint;
    NSString *_imageprintVersion;
}

@property (retain, nonatomic) VNImageprint *imageprint;
@property (nonatomic, readonly) _Bool imageprintValid;
@property (copy, nonatomic, readonly) NSString *imageprintVersion;
@property (nonatomic, readonly) NSData *rawImageprintDescriptor;

+ (_Bool)supportsSecureCoding;
+ (id)observationWithImageprint:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)calculateDistanceFromImageprintObservation:(id)arg1;
- (_Bool)isImageprintValid;
- (id)initWithRawImageprintDescriptor:(id)arg1;

@end
