/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@interface QLThumbnailDescriptor : NSObject

{
    double _scaleFactor;
    struct CGSize _size;
}

@property struct CGSize size;
@property double scaleFactor;

+ (id)descriptorWithSize:(struct CGSize)arg1 scaleFactor:(double)arg2;

@end
