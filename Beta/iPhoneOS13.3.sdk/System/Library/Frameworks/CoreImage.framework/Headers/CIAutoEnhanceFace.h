/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIAutoEnhanceFace : NSObject

{
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property (readonly) int size;
@property (readonly) int centerX;
@property (readonly) int centerY;
@property (readonly) double I;
@property (readonly) double Q;

- (id)description;
- (struct CGRect)faceRect;
- (id)initWithBounds:(struct CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3;

@end
