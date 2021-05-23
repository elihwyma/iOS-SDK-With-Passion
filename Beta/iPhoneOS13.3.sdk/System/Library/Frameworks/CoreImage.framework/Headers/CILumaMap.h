/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILumaMap : CIFilter

{
    CIImage *inputImage;
    CIImage *_tableImage;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (id)_kernel;
- (id)outputImage;
- (void)setDefaults;
- (const char *)lumaTable;

@end
