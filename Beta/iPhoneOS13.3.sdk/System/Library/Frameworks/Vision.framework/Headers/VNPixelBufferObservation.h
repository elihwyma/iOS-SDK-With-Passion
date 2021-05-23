/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNObservation.h>

@class NSString;

@interface VNPixelBufferObservation : VNObservation

{
    struct __CVBuffer *_pixelBuffer;
    NSString *_featureName;
}

@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (copy, nonatomic, readonly) NSString *featureName;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 featureName:(id)arg2 CVPixelBuffer:(struct __CVBuffer *)arg3;

@end
