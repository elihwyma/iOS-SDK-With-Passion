/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFilter.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CITextImageGenerator : CIFilter

{
    NSString *inputText;
    NSString *inputFontName;
    NSNumber *inputFontSize;
    NSNumber *inputScaleFactor;
}

@property (retain, nonatomic) NSString *inputText;
@property (retain, nonatomic) NSString *inputFontName;
@property (retain, nonatomic) NSNumber *inputFontSize;
@property (retain, nonatomic) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)outputImage;

@end
