/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CheapRandomness : CIFilter

{
    NSNumber *inputDither;
    NSNumber *inputScale;
}

@property (retain, nonatomic) NSNumber *inputDither;
@property (retain, nonatomic) NSNumber *inputScale;

- (id)outputImage;

@end
