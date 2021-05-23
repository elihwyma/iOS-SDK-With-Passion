/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARPersonDetectionResult.h>

@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult

{
    double _sumDepthValues;
    long long _numberDepthPixels;
}

@property (nonatomic) double sumDepthValues;
@property (nonatomic) long long numberDepthPixels;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBoundingBox:(struct CGRect)arg1;

@end
