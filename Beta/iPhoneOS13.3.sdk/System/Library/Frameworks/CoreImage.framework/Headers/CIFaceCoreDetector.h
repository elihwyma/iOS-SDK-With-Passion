/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext, FCRFaceDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector

{
    CIContext *context;
    NSMutableDictionary *featureOptions;
    _Bool _tracking;
    FCRFaceDetector *faceCoreDetector;
}

@property (retain, nonatomic) CIContext *context;
@property (retain) FCRFaceDetector *faceCoreDetector;

- (void)dealloc;
- (void)finalize;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1;
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;

@end
