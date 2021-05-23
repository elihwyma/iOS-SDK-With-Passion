/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class NSAttributedString, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAttributedTextImageGenerator : CIFilter

{
    NSAttributedString *inputText;
    NSNumber *inputScaleFactor;
}

@property (retain, nonatomic) NSAttributedString *inputText;
@property (retain, nonatomic) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)outputImage;

@end
