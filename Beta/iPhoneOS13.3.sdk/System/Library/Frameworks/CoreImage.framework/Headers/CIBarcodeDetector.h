/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBarcodeDetector : CIDetector

{
    CIContext *context;
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
}

@property (retain, nonatomic) CIContext *context;

- (void)dealloc;
- (void)finalize;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;

@end
