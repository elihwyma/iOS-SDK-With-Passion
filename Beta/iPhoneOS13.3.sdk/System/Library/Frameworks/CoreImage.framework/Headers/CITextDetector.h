/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext, FKTextDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CITextDetector : CIDetector

{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    FKTextDetector *textDetector;
}

@property (retain, nonatomic) CIContext *context;

- (void)dealloc;
- (void)finalize;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;

@end
