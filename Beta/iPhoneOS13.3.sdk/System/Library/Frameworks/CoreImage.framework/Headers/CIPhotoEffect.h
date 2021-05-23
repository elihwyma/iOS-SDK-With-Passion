/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect : CIFilter

{
    CIImage *inputImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)init;
- (id)outputImage;
- (int)_defaultVersion;
- (void)setDefaults;
- (int)_maxVersion;
- (id)cubeName;
- (id)cubePath;
- (id)cubeColorSpaceName;

@end
