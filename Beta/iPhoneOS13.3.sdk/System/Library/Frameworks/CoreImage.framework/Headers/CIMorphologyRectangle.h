/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMorphologyRectangle : CIFilter

{
    CIImage *inputImage;
    NSNumber *inputWidth;
    NSNumber *inputHeight;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputHeight;

+ (id)customAttributes;

- (id)outputImage;
- (_Bool)_isIdentity;
- (_Bool)_doMinimum;

@end
