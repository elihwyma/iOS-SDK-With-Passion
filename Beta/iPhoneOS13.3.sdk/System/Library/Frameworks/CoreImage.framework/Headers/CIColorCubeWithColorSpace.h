/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIColorCube.h>

__attribute__((visibility("hidden")))
@interface CIColorCubeWithColorSpace : CIColorCube

{
    id inputColorSpace;
}

@property (retain, nonatomic) id inputColorSpace;

+ (id)customAttributes;

- (id)outputImage;

@end
