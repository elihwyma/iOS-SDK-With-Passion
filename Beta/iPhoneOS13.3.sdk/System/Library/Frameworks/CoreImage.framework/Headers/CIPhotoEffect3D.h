/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect3D : CIFilter

{
    CIImage *inputImage;
    CIImage *inputDepthMap;
    NSNumber *inputThreshold;
    NSNumber *inputGrainAmount;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputDepthMap;
@property (retain, nonatomic) NSNumber *inputThreshold;
@property (retain, nonatomic) NSNumber *inputGrainAmount;
@property (retain, nonatomic) NSNumber *inputScale;

+ (id)customAttributes;

- (id)init;
- (id)outputImage;
- (int)_defaultVersion;
- (void)setDefaults;
- (int)_maxVersion;
- (id)cubeName;
- (id)cubePath;
- (id)cubeColorSpaceName;
- (int)_maxVersionBG;
- (id)backgroundCubeName;
- (id)applyCubeWithName:(id)arg1 toImage:(id)arg2;
- (id)_CIPhotoEffectDepthBlend;
- (id)backgroundCubePath;

@end
