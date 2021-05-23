/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PIApertureRedEyeFilter : CIFilter

{
    CIImage *inputImage;
    NSArray *inputSpots;
}

- (id)outputImage;

@end
