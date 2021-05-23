/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNDetector : CIDetector

{
    CIContext *context;
}

- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)featuresInImage:(id)arg1 withContext:(id)arg2;

@end
