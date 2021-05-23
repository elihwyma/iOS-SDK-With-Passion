/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNFaceDetector : CIDetector

{
    CIContext *context;
}

@property (retain, readonly) CIContext *context;

- (void)dealloc;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end
