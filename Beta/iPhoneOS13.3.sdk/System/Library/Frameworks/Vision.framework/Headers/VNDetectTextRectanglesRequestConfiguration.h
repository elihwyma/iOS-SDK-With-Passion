/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

{
    _Bool _reportCharacterBoxes;
    _Bool _detectDiacritics;
    _Bool _minimizeFalseDetections;
    unsigned long long _algorithm;
    unsigned long long _minimumCharacterPixelHeight;
    NSString *_textRecognition;
}

@property (nonatomic) _Bool reportCharacterBoxes;
@property (nonatomic) unsigned long long algorithm;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight;
@property (nonatomic) _Bool detectDiacritics;
@property (nonatomic) _Bool minimizeFalseDetections;
@property (copy, nonatomic) NSString *textRecognition;

- (id)initWithRequestClass:(Class)arg1;

@end
