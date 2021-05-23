/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@interface CPImageObjectData : NSObject

{
    struct CGImage *_image;
    struct CGRect _boundsOnPage;
}

@property (retain) struct CGImage *image;
@property struct CGRect boundsOnPage;

+ (id)imageObjectDataWithCGImage:(struct CGImage *)arg1 andBounds:(struct CGRect)arg2;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 andBoundsOnPage:(struct CGRect)arg2;

@end
